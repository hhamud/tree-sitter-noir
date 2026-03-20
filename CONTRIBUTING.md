# Contributing

Contributions to `tree-sitter-noir` are welcome. If you find a bug, notice a
syntax regression, or want to improve the queries, open an issue or send a pull
request.

## Setup

This repository uses Bun for dependency management and script execution.

```shell
bun install
bun run generate
bun run test
```

## Development Workflow

Use the regular parser test suite while working on grammar or query changes:

```shell
bun run test
```

When you update the pinned upstream Noir manifest or touch the upstream tracking
scripts, also run:

```shell
bun run test:upstream-corpus
```

## Tracking Noir Upstream

Noir does not currently publish a standalone language specification, so this
repository treats the upstream `noir-lang/noir` repository as the source of
truth for syntax changes.

The repo tracks upstream in two ways:

- A pinned manifest lives at `test/upstream-corpus/noir/manifest.json`.
- A scheduled GitHub Actions canary checks the current upstream Noir repository
  and publishes a drift report.

No upstream Noir sources are committed to this repository. The pinned manifest
records:

- the upstream commit
- the parse-clean files to validate at that commit
- the upstream files that still fail to parse

## Refreshing The Pinned Manifest

To sync from the default upstream repository:

```shell
bun run sync:upstream-noir
```

To sync from an existing local checkout of `noir-lang/noir`:

```shell
bun scripts/sync-upstream-noir.js --source /path/to/noir
```

After refreshing the manifest:

1. Review `test/upstream-corpus/noir/manifest.json`.
2. Run `bun run test`.
3. Run `bun run test:upstream-corpus`.
4. If the sync exposed new syntax that should be supported, reduce it to a
   focused corpus test before changing the grammar.

## CI Expectations

Pull requests are expected to pass:

- `bun run test`
- `bun run test:upstream-corpus`

The scheduled `upstream-canary` workflow checks the full current upstream Noir
corpus, uploads a JSON report artifact, writes a job summary, and now fails if
the parser regresses against upstream.

When `upstream-canary` fails with a report artifact present, the
`upstream-canary-autofix` workflow downloads that report, checks out the exact
upstream Noir commit, runs Codex to attempt a minimal fix, and opens a pull
request if verification passes. This automation requires an `OPENAI_API_KEY`
repository secret and GitHub Actions permission to create pull requests.

The pinned upstream-corpus check downloads the upstream Noir repository at the
commit recorded in the manifest, builds the current parser locally, and then
runs the parse check against that downloaded checkout.
