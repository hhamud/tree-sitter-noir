# Tree-sitter Noir

[![test](https://github.com/hhamud/tree-sitter-noir/actions/workflows/ci.yml/badge.svg)](https://github.com/hhamud/tree-sitter-noir/actions/workflows/ci.yml)
[![npm](https://img.shields.io/npm/v/tree-sitter-noir)](https://www.npmjs.com/package/tree-sitter-noir)
[![Latest version](https://img.shields.io/crates/v/tree-sitter-noir.svg)](https://crates.io/crates/tree-sitter-noir)
![gpl-3.0](https://shields.io/badge/gpl-3.0-blue)

Noir grammar and parser for [tree-sitter](https://tree-sitter.github.io/tree-sitter/)

### Emacs

To use with Emacs; use the following [package here](https://github.com/hhamud/noir-ts-mode).

### NeoVim

To use this parser with current `nvim-treesitter`, register the custom parser in
the `User TSUpdate` hook, make sure Neovim recognizes `.nr` files as `noir`,
and start tree-sitter highlighting for that filetype:

```lua
vim.api.nvim_create_autocmd("User", {
  pattern = "TSUpdate",
  callback = function()
    require("nvim-treesitter.parsers").noir = {
      install_info = {
        url = "https://github.com/hhamud/tree-sitter-noir",
        files = { "src/parser.c", "src/scanner.c" },
        branch = "main",
        queries = "queries/neovim",
      },
    }
  end,
})

vim.filetype.add({
  extension = {
    nr = "noir",
  },
})

vim.api.nvim_create_autocmd("FileType", {
  pattern = "noir",
  callback = function(args)
    vim.treesitter.start(args.buf, "noir")
  },
})
```

Then run `:TSInstall noir`.

If you are on an older `nvim-treesitter` version that does not support the
`queries` key in `install_info`, copy
`queries/neovim/highlights.scm` into your Neovim `queries/noir/` runtime
directory manually.

## Other

To install the grammar from NPM

```shell
npm i tree-sitter-noir
```

To install the grammar from cargo

```shell
cargo add tree-sitter-noir
```

## References

- [Noir Language](https://github.com/noir-lang/noir)
- [Noir Docs](https://noir-lang.org/)

## Contributing

Contributions to tree-sitter-noir are welcome. If you find any issues or have suggestions for improvement, please create a new issue or submit a pull request on the [GitHub repository](https://github.com/hhamud/tree-sitter-noir).

Contributor setup, testing expectations, and the upstream Noir sync workflow are documented in [CONTRIBUTING.md](./CONTRIBUTING.md).

Install dependencies with Bun and use Bun to run the project scripts:

```shell
bun install
bun run generate
bun run test
bun run test:upstream-corpus
bun run sync:upstream-noir
```

## Tracking Noir Upstream

Noir does not currently publish a standalone language specification, so this
grammar treats the upstream `noir-lang/noir` repository as the source of truth
for syntax changes.

This repository now tracks upstream in two ways:

- A pinned manifest lives at `test/upstream-corpus/noir/manifest.json`. It
  records an upstream Noir commit plus the parse-clean file list to check
  against that commit. Required CI downloads that pinned upstream revision and
  runs `bun run test:upstream-corpus` against it.
- A scheduled GitHub Actions canary clones the latest upstream Noir repository
  and runs the parser against the full current upstream corpus. The canary
  uploads a JSON report, writes a job summary, and fails when upstream parse
  regressions are present.
- A companion `upstream-canary-autofix` workflow listens for failed canary
  runs, downloads the canary report artifact, checks out the matching upstream
  Noir commit, and uses Codex to open a fix PR after verification passes.

No upstream Noir sources are committed to this repository. The pinned manifest
intentionally targets `examples`, `noir_stdlib`, and the success-oriented
`test_programs` directories. See [CONTRIBUTING.md](./CONTRIBUTING.md) for the
sync command, validation steps, and CI expectations around keeping this manifest
up to date, including the Bun-based direct maintenance commands.
