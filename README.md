# Tree-sitter Noir

[![test](https://github.com/hhamud/tree-sitter-noir/actions/workflows/ci.yml/badge.svg)](https://github.com/hhamud/tree-sitter-noir/actions/workflows/ci.yml)

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



## Other

To install the grammar

```shell
npm i tree-sitter-noir
```

## Usage

Once `noir-ts-mode.el` is installed, it will automatically be enabled when you open a `.nr` file. The major mode will provide syntax highlighting for editing Noir code.

## Examples
You can view a few examples of the syntax highlighting and of `treesit-explore-mode` using `noir-ts-mode.el` in images.


## References

- [Noir Language](https://github.com/noir-lang/noir)
- [Noir Docs](https://noir-lang.org/)

## Contributing

Contributions to tree-sitter-noir are welcome. If you find any issues or have suggestions for improvement, please create a new issue or submit a pull request on the [GitHub repository](https://github.com/hhamud/tree-sitter-noir).
