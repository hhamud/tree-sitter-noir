# Tree-sitter Noir

[![test](https://github.com/hhamud/tree-sitter-noir/actions/workflows/ci.yml/badge.svg)](https://github.com/hhamud/tree-sitter-noir/actions/workflows/ci.yml)
[![npm](https://img.shields.io/npm/v/github-buttons)](https://www.npmjs.com/package/tree-sitter-noir)



Noir grammar and parser for [tree-sitter](https://tree-sitter.github.io/tree-sitter/)

### Emacs
1. Make sure you have Emacs version 29.x and above.


2. Add the grammar to your settings as so:
``` elisp
(add-to-list
 'treesit-language-source-alist
 '(noir "https://github.com/hhamud/tree-sitter-noir.git"))
```


3. Install the grammar
``` elisp
M-x treesit-install-language-grammar 
```


4. Check if it has installed successfully
``` elisp
(treesit-language-available-p 'noir)
```


5. Download `noir-ts-mode.el` from the [GitHub repository](https://github.com/hhamud/tree-sitter-noir).


6. Move `noir-mode.el` to a directory in your Emacs load path.



7. Add the following code to your Emacs configuration file:

```elisp
(require noir-ts-mode)
```


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

## Usage

Once `noir-ts-mode.el` is installed, it will automatically be enabled when you open a `.nr` file. The major mode will provide syntax highlighting for editing Noir code.

## Examples
You can view a few examples of the syntax highlighting and of `treesit-explore-mode` using `noir-ts-mode.el` in [images](./images).


## References

- [Noir Language](https://github.com/noir-lang/noir)
- [Noir Docs](https://noir-lang.org/)

## Contributing

Contributions to tree-sitter-noir are welcome. If you find any issues or have suggestions for improvement, please create a new issue or submit a pull request on the [GitHub repository](https://github.com/hhamud/tree-sitter-noir).
