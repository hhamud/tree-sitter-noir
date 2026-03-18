const fs = require("node:fs");
const path = require("node:path");

const {
  CORPUS_ROOT,
  DEFAULT_UPSTREAM_REF,
  DEFAULT_UPSTREAM_REPO,
  INCLUDED_PATHS,
  MANIFEST_PATH,
  clearVendoredSnapshotDirs,
  cloneUpstreamRepo,
  collectNoirFiles,
  getGitRevision,
  parseArgs,
  parseNoirFiles,
  writeJson,
} = require("./upstream-noir");

function main() {
  const args = parseArgs(process.argv.slice(2));
  let cleanupRoot = null;
  let sourceRoot = args.source ? path.resolve(args.source) : null;

  if (!sourceRoot) {
    cleanupRoot = cloneUpstreamRepo({
      repoUrl: args.repo || DEFAULT_UPSTREAM_REPO,
      ref: args.ref || DEFAULT_UPSTREAM_REF,
    });
    sourceRoot = cleanupRoot;
  }

  try {
    const commit = getGitRevision(sourceRoot);
    const candidateFiles = collectNoirFiles(sourceRoot);
    const parseResults = parseNoirFiles(candidateFiles);
    const successfulPaths = new Set(
      parseResults.summaries
        .filter((summary) => summary.successful)
        .map((summary) => summary.file)
    );
    const files = candidateFiles.filter((file) =>
      successfulPaths.has(file.absolutePath)
    );

    if (candidateFiles.length === 0) {
      throw new Error(`No Noir files found under configured paths in ${sourceRoot}`);
    }

    if (files.length === 0) {
      throw new Error(
        `Collected ${candidateFiles.length} candidate Noir files from ${sourceRoot}, but none parsed successfully with the current grammar`
      );
    }

    const perGroupCounts = {};
    const manifestFiles = files.map((file) => {
      perGroupCounts[file.sourceGroup] = (perGroupCounts[file.sourceGroup] || 0) + 1;

      return {
        path: file.relativePath,
        sourceGroup: file.sourceGroup,
      };
    });

    clearVendoredSnapshotDirs(CORPUS_ROOT);

    writeJson(MANIFEST_PATH, {
      upstream: {
        repo: args.repo || DEFAULT_UPSTREAM_REPO,
        ref: args.ref || DEFAULT_UPSTREAM_REF,
        commit,
        syncedAt: new Date().toISOString(),
        includedPaths: INCLUDED_PATHS,
      },
      candidateFileCount: candidateFiles.length,
      fileCount: manifestFiles.length,
      excludedFailureCount: parseResults.failures.length,
      perGroupCounts,
      excludedFailures: parseResults.failures,
      files: manifestFiles,
    });

    console.log(
      `Wrote pinned upstream manifest for ${manifestFiles.length} parse-clean Noir files out of ${candidateFiles.length} candidates from ${commit} to ${MANIFEST_PATH}`
    );
  } finally {
    if (cleanupRoot) {
      fs.rmSync(cleanupRoot, { recursive: true, force: true });
    }
  }
}

main();
