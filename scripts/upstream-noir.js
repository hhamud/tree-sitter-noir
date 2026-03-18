const fs = require("node:fs");
const os = require("node:os");
const path = require("node:path");
const { spawnSync } = require("node:child_process");

const REPO_ROOT = path.resolve(__dirname, "..");
const DEFAULT_UPSTREAM_REPO = "https://github.com/noir-lang/noir.git";
const DEFAULT_UPSTREAM_REF = "master";
const CORPUS_ROOT = path.join(REPO_ROOT, "test", "upstream-corpus", "noir");
const MANIFEST_PATH = path.join(CORPUS_ROOT, "manifest.json");
const INCLUDED_PATHS = [
  "examples",
  "noir_stdlib",
  "test_programs/benchmarks",
  "test_programs/compile_success_contract",
  "test_programs/compile_success_empty",
  "test_programs/compile_success_no_bug",
  "test_programs/compile_success_with_bug",
  "test_programs/execution_success",
  "test_programs/noir_test_success",
  "test_programs/test_libraries",
];

function parseArgs(argv) {
  const args = {};

  for (let i = 0; i < argv.length; i += 1) {
    const arg = argv[i];

    if (!arg.startsWith("--")) {
      throw new Error(`Unexpected argument: ${arg}`);
    }

    const key = arg.slice(2);
    const value = argv[i + 1];

    if (!value || value.startsWith("--")) {
      throw new Error(`Missing value for --${key}`);
    }

    args[key] = value;
    i += 1;
  }

  return args;
}

function run(command, args, options = {}) {
  const result = spawnSync(command, args, {
    cwd: options.cwd,
    encoding: "utf8",
    env: { ...process.env, ...options.env },
    stdio: options.stdio ?? "pipe",
  });

  if (result.error) {
    throw result.error;
  }

  return result;
}

function runOrThrow(command, args, options = {}) {
  const result = run(command, args, options);

  if (result.status !== 0) {
    const details = [result.stderr, result.stdout].filter(Boolean).join("\n").trim();
    throw new Error(
      details || `${command} ${args.join(" ")} exited with status ${result.status}`
    );
  }

  return result.stdout.trim();
}

function ensureDir(dirPath) {
  fs.mkdirSync(dirPath, { recursive: true });
}

function walkNoirFiles(rootDir) {
  const files = [];

  if (!fs.existsSync(rootDir)) {
    return files;
  }

  const stack = [rootDir];

  while (stack.length > 0) {
    const currentDir = stack.pop();
    const entries = fs.readdirSync(currentDir, { withFileTypes: true });

    for (const entry of entries) {
      const absolutePath = path.join(currentDir, entry.name);

      if (entry.isDirectory()) {
        stack.push(absolutePath);
        continue;
      }

      if (entry.isFile() && absolutePath.endsWith(".nr")) {
        files.push(absolutePath);
      }
    }
  }

  files.sort();
  return files;
}

function collectNoirFiles(sourceRoot) {
  const files = [];

  for (const includePath of INCLUDED_PATHS) {
    const absoluteIncludePath = path.join(sourceRoot, includePath);
    const noirFiles = walkNoirFiles(absoluteIncludePath);

    for (const absolutePath of noirFiles) {
      files.push({
        absolutePath,
        relativePath: path.relative(sourceRoot, absolutePath),
        sourceGroup: includePath,
      });
    }
  }

  files.sort((left, right) => left.relativePath.localeCompare(right.relativePath));
  return files;
}

function cloneUpstreamRepo({ repoUrl = DEFAULT_UPSTREAM_REPO, ref = DEFAULT_UPSTREAM_REF }) {
  const tempRoot = fs.mkdtempSync(path.join(os.tmpdir(), "tree-sitter-noir-upstream-"));
  runOrThrow("git", ["clone", repoUrl, tempRoot]);
  runOrThrow("git", ["-C", tempRoot, "checkout", "--detach", ref]);
  return tempRoot;
}

function getGitRevision(repoRoot) {
  return runOrThrow("git", ["rev-parse", "HEAD"], { cwd: repoRoot });
}

function clearVendoredSnapshotDirs(corpusRoot = CORPUS_ROOT) {
  if (!fs.existsSync(corpusRoot)) {
    return;
  }

  const entries = fs.readdirSync(corpusRoot, { withFileTypes: true });

  for (const entry of entries) {
    if (!entry.isDirectory()) {
      continue;
    }

    fs.rmSync(path.join(corpusRoot, entry.name), { recursive: true, force: true });
  }
}

function loadManifest(manifestPath = MANIFEST_PATH) {
  return JSON.parse(fs.readFileSync(manifestPath, "utf8"));
}

function writeJson(filePath, value) {
  ensureDir(path.dirname(filePath));
  fs.writeFileSync(filePath, `${JSON.stringify(value, null, 2)}\n`);
}

function collectManifestFiles(sourceRoot, manifest) {
  return manifest.files.map((file) => {
    const absolutePath = path.join(sourceRoot, file.path);

    if (!fs.existsSync(absolutePath)) {
      throw new Error(`Pinned upstream file not found: ${file.path}`);
    }

    return {
      absolutePath,
      relativePath: file.path,
      sourceGroup: file.sourceGroup,
    };
  });
}

function parseTreeSitterJson(stdout) {
  const trimmed = stdout.trim();

  if (!trimmed) {
    throw new Error("tree-sitter parse returned empty output");
  }

  const jsonStart = trimmed.indexOf("{");

  if (jsonStart === -1) {
    throw new Error(trimmed);
  }

  return JSON.parse(trimmed.slice(jsonStart));
}

function parseNoirFiles(files) {
  const failures = [];
  const summaries = [];
  let exitCode = 0;

  for (const file of files) {
    const result = run(
      "bun",
      ["x", "tree-sitter", "parse", "-q", "-j", file.absolutePath],
      { cwd: REPO_ROOT }
    );

    let parsedOutput;

    try {
      parsedOutput = parseTreeSitterJson(result.stdout);
    } catch (error) {
      const details = [result.stderr, result.stdout].filter(Boolean).join("\n").trim();
      throw new Error(`Could not parse tree-sitter JSON output.\n${details}`);
    }

    const summary = (parsedOutput.parse_summaries || [])[0];

    if (!summary) {
      throw new Error(`tree-sitter parse did not return a summary for ${file.absolutePath}`);
    }

    summaries.push(summary);

    if (!summary.successful) {
      failures.push({
        file: file.relativePath,
        start: summary.start,
        end: summary.end,
      });
    }

    if (result.status !== 0) {
      exitCode = result.status;
    }
  }

  return { exitCode, failures, summaries };
}

module.exports = {
  CORPUS_ROOT,
  DEFAULT_UPSTREAM_REF,
  DEFAULT_UPSTREAM_REPO,
  INCLUDED_PATHS,
  MANIFEST_PATH,
  REPO_ROOT,
  clearVendoredSnapshotDirs,
  cloneUpstreamRepo,
  collectManifestFiles,
  collectNoirFiles,
  ensureDir,
  getGitRevision,
  loadManifest,
  parseArgs,
  parseNoirFiles,
  parseTreeSitterJson,
  run,
  runOrThrow,
  writeJson,
};
