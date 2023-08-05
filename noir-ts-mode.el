;;; noir-ts-mode.el --- tree-sitter support for Noir  -*- lexical-binding: t; -*-

;; Copyright (C) Hamza Hamud,

;; Author     : Hamza Hamud <self@hamzahamud.com>
;; Maintainer : Hamza Hamud <self@hamzahamud.com>
;; Created    : July 2023
;; Keywords   : noir languages tree-sitter

;; This file is not part of GNU Emacs.

;; Noir-ts-mode is free software: you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation, either version 3 of the License, or
;; (at your option) any later version.

;; Noir-ts-mode is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with Noir-ts-mode.  If not, see <https://www.gnu.org/licenses/>.

;;; Commentary:
;;

;;; Code:

(require 'treesit)
(eval-when-compile (require 'rx))

(declare-function treesit-parser-create "treesit.c")
(declare-function treesit-induce-sparse-tree "treesit.c")
(declare-function treesit-node-child "treesit.c")
(declare-function treesit-node-child-by-field-name "treesit.c")
(declare-function treesit-node-start "treesit.c")
(declare-function treesit-node-type "treesit.c")

(defcustom noir-ts-mode-indent-offset 4
  "Number of spaces for each indentation step in `noir-ts-mode'."
  :version "29.1"
  :type 'integer
  :safe 'integerp
  :group 'noir)

(defvar noir-ts-mode--syntax-table
  (let ((table (make-syntax-table)))
    (modify-syntax-entry ?+   "."      table)
    (modify-syntax-entry ?-   "."      table)
    (modify-syntax-entry ?=   "."      table)
    (modify-syntax-entry ?%   "."      table)
    (modify-syntax-entry ?&   "."      table)
    (modify-syntax-entry ?|   "."      table)
    (modify-syntax-entry ?^   "."      table)
    (modify-syntax-entry ?!   "."      table)
    (modify-syntax-entry ?@   "."      table)
    (modify-syntax-entry ?~   "."      table)
    (modify-syntax-entry ?<   "."      table)
    (modify-syntax-entry ?>   "."      table)
    (modify-syntax-entry ?/   ". 124b" table)
    (modify-syntax-entry ?*   ". 23"   table)
    (modify-syntax-entry ?\n  "> b"    table)
    (modify-syntax-entry ?\^m "> b"    table)
    table)
  "Syntax table for `noir-ts-mode'.")

 (defvar noir-ts-mode--keywords
  '("as" "else" "fn" "for" "if"
    "impl" "in" "let" "mod" "global" "assert" "constrain"
    "struct" "use" (crate) (super) (return) (self)
    (mutable) (viewer)  (comptime))
   "Noir keywords for tree-sitter font-locking.")

(defvar noir-ts-mode--operators
  '("!"  "!=" "%" "&" "&=" "&&" "*" "+" "+=" "," "-" "-="
    "->" "."  ".." "/" ":" ";" "<<" "<" "<="
    "=" "==" ">" ">=" ">>" "^" "|" "|=" "||")
  "Noir operators for tree-sitter font-locking.")


(defvar noir-ts-mode--font-lock-settings
  (treesit-font-lock-rules

   :feature 'bracket
   :language 'noir
   '((["(" ")" "[" "]" "{" "}"]) @font-lock-bracket-face)

   :feature 'comment
   :language 'noir
   '((comment) @font-lock-comment-face)

   :feature 'constant
   :override t
   :language 'noir
   '((boolean) @font-lock-constant-face
     (import_identifier (identifier) @font-lock-constant-face))


   :feature 'delimiter
   :language 'noir
   '((["," "." ";" ":" "::"]) @font-lock-delimiter-face)

   :feature 'keyword
   :override t
   :language 'noir
   `([,@noir-ts-mode--keywords] @font-lock-keyword-face)

   :feature 'number
   :language 'noir
   '((integer) @font-lock-constant-face)


   :feature 'function-name
   :language 'noir
   '((function_definition
      (identifier) @font-lock-function-name-face)
     (function_call
        (identifier) @font-lock-function-call-face))

   :feature 'builtin
   :override t
   :language 'noir
   '((macro) @font-lock-builtin-face)

   :feature 'operator
   :language 'noir
   `([,@noir-ts-mode--operators] @font-lock-operator-face)


   :feature 'type
   :override t
   :language 'noir
   '(
     (generic_type (identifier) @font-lock-type-face)
     (generic (identifier) @font-lock-type-face)
     (single_type) @font-lock-type-face
     (array_type (identifier) @font-lock-type-face)
     (module (identifier) @font-lock-type-face)
     (return_type (identifier) @font-lock-type-face)
     (struct_definition name: (identifier) @font-lock-type-face)
     (struct_definition type: (identifier) @font-lock-type-face)
     (typed_identifier type: (identifier) @font-lock-type-face)
     (struct_method (identifier) @font-lock-type-face)
     ((as_identifier type: (identifier) @font-lock-type-face)))


   :feature 'variable
   :language 'noir
   '(
     (let_declaration (binary_expression left: (identifier) @font-lock-variable-name-face))
     (let_declaration (binary_expression left: (grouped_expression (identifier) @font-lock-variable-name-face)))
     (struct_definition var: (identifier) @font-lock-variable-name-face)
     (typed_identifier var: (identifier) @font-lock-variable-name-face)
     (as_identifier (identifier) @font-lock-variable-name-face)
     (global (binary_expression left: (typed_identifier var: (identifier) @font-lock-variable-name-face))))

   :feature 'string
   :language 'noir
   '([(character) (string_literal)] @font-lock-string-face))

  "Tree-sitter font-lock settings for `noir-ts-mode'.")

(defvar noir-ts-mode--indent-rules
  `((noir
     ((node-is ")") parent-bol 0)
     ((node-is "]") parent-bol 0)
     ((node-is "}") (and parent parent-bol) 0)
     ((parent-is "array") parent-bol noir-ts-mode-indent-offset)
     ((parent-is "binary_expression") parent-bol noir-ts-mode-indent-offset)
     ((parent-is "body") parent-bol noir-ts-mode-indent-offset)
     ((parent-is "_expression") parent-bol noir-ts-mode-indent-offset)
     ((parent-is "let_declaration") parent-bol noir-ts-mode-indent-offset)
     ((parent-is "parameters") parent-bol noir-ts-mode-indent-offset)))
  "Tree-sitter indent rules for `noir-ts-mode'.")


;;;###autoload
(add-to-list 'auto-mode-alist '("\\.nr\\'" . noir-ts-mode))

;;;###autoload
(define-derived-mode noir-ts-mode prog-mode "Noir"
  "Major mode for editing Noir, powered by tree-sitter."
  :group 'noir
  :syntax-table noir-ts-mode--syntax-table

  (when (treesit-ready-p 'noir)
    (treesit-parser-create 'noir)

    ;; Set the level of syntax highlighting detail
    (setq-local treesit-font-lock-level 4)

    ;; Comments.
    (setq-local comment-start "// ")
    (setq-local comment-end "")
    (setq-local comment-start-skip (rx (or "//" "/*")))
    (setq-local comment-end-skip (rx (or "\n" "*/")))

    ;; Indent.
    (setq-local indent-tabs-mode nil
                treesit-simple-indent-rules noir-ts-mode--indent-rules)

    ;; Font-lock
    (setq-local treesit-font-lock-settings noir-ts-mode--font-lock-settings)
    (setq-local treesit-font-lock-feature-list
                '((comment)
                  (keyword string)
                  (constant variable type function-name builtin number)
                  (bracket delimiter operator)))

    ;; Navigation.
    (setq-local treesit-defun-type-regexp
                (regexp-opt '("function_definition"
                              "struct_method"
                              "struct_definition")))


    (treesit-major-mode-setup)))

(provide 'noir-ts-mode)

;;; noir-ts-mode.el ends here

