const fs = require("node:fs");
const path = require("node:path");

const {
  DEFAULT_UPSTREAM_REPO,
  MANIFEST_PATH,
  cloneUpstreamRepo,
  collectManifestFiles,
  collectNoirFiles,
  getGitRevision,
  loadManifest,
  parseArgs,
  parseNoirFiles,
  writeJson,
} = require("./upstream-noir");

function gatherTargets(args) {
  if (args.source) {
    const sourceRoot = path.resolve(args.source);
    const commit = fs.existsSync(path.join(sourceRoot, ".git"))
      ? getGitRevision(sourceRoot)
      : "unknown";
    const files = collectNoirFiles(sourceRoot);

    return {
      label: args.label || `upstream-${commit}`,
      commit,
      files: files.map((file) => ({
        absolutePath: file.absolutePath,
        relativePath: file.relativePath,
        sourceGroup: file.sourceGroup,
      })),
    };
  }

  const manifest = loadManifest(MANIFEST_PATH);
  const sourceRoot = cloneUpstreamRepo({
    repoUrl: manifest.upstream.repo || DEFAULT_UPSTREAM_REPO,
    ref: manifest.upstream.commit,
  });

  return {
    label: args.label || `snapshot-${manifest.upstream.commit}`,
    cleanupRoot: sourceRoot,
    commit: manifest.upstream.commit,
    files: collectManifestFiles(sourceRoot, manifest),
  };
}

function main() {
  const args = parseArgs(process.argv.slice(2));
  let target;

  try {
    target = gatherTargets(args);

    if (target.files.length === 0) {
      throw new Error(`No Noir files found for ${target.label}`);
    }

    const result = parseNoirFiles(target.files);
    const report = {
      label: target.label,
      commit: target.commit,
      checkedAt: new Date().toISOString(),
      fileCount: target.files.length,
      successfulCount: target.files.length - result.failures.length,
      failureCount: result.failures.length,
      failures: result.failures,
    };

    if (args.report) {
      writeJson(path.resolve(args.report), report);
    }

    if (result.failures.length > 0 || result.exitCode !== 0) {
      console.error(
        `Parsed ${target.files.length} Noir files from ${target.label} with ${result.failures.length} failures.`
      );

      for (const failure of result.failures.slice(0, 20)) {
        console.error(
          `- ${failure.file} (${failure.start.row}:${failure.start.column} - ${failure.end.row}:${failure.end.column})`
        );
      }

      process.exit(1);
    }

    console.log(
      `Parsed ${target.files.length} Noir files from ${target.label} successfully.`
    );
  } finally {
    if (target?.cleanupRoot) {
      fs.rmSync(target.cleanupRoot, { recursive: true, force: true });
    }
  }
}

main();
