# Tree-sitter Noir

[![test](https://github.com/hhamud/tree-sitter-noir/actions/workflows/ci.yml/badge.svg)](https://github.com/hhamud/tree-sitter-noir/actions/workflows/ci.yml)
[![npm](https://img.shields.io/npm/v/tree-sitter-noir)](https://www.npmjs.com/package/tree-sitter-noir)
[![Latest version](https://img.shields.io/crates/v/tree-sitter-noir.svg)](https://crates.io/crates/tree-sitter-noir)
![gpl-3.0](https://shields.io/badge/gpl-3.0-blue)


Noir grammar and parser for [tree-sitter](https://tree-sitter.github.io/tree-sitter/)


### Emacs
To use with Emacs; use the following [package here](https://github.com/hhamud/noir-ts-mode).


### NeoVim
1. Make sure that you have the latest version of Neovim and have also installed the neovim tree-sitter plugin.

2. Add the following lines to your `init.vim` file:


```lua

lua <<EOF
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()

parser_config.noir = {
    install_info = {
        url = "https://github.com/hhamud/tree-sitter-noir", -- the url for this tree-sitter grammar
        files = {"src/parser.c", "src/scanner.cc"},
    },
    filetype = "noir", -- if filetype does not agrees with parser name you can define this field
}

require'nvim-treesitter.configs'.setup {
  ensure_installed = "noir", -- The custom parser
  highlight = {
    enable = true,              -- false will disable the whole extension
  },
}
EOF
```

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
