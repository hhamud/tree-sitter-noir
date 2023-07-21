;;; noir-ts-mode.el --- tree-sitter support for Noir  -*- lexical-binding: t; -*-

;; Copyright (C) Hamza Hamud,

;; Author     : Hamza Hamud <self@hamzahamud.com>
;; Maintainer : Hamza Hamud <self@hamzahamud.com>
;; Created    : July 2023
;; Keywords   : noir languages tree-sitter

;; This file is part of GNU Emacs.

;; GNU Emacs is free software: you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation, either version 3 of the License, or
;; (at your option) any later version.

;; GNU Emacs is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with GNU Emacs.  If not, see <https://www.gnu.org/licenses/>.

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
  '("keyword1" "keyword2" "keyword3")
  "Noir keywords for tree-sitter font-locking.")


(defvar noir-ts-mode--operators
  '("!"  "!=" "%" "%=" "&" "&=" "&&" "*" "*=" "+" "+=" "," "-" "-="
    "->" "."  ".."  "..=" "..."  "/" "/=" ":" ";" "<<" "<<=" "<" "<="
    "=" "==" "=>" ">" ">=" ">>" ">>=" "@" "^" "^=" "|" "|=" "||" "?")
  "Noir operators for tree-sitter font-locking.")

(defvar noir-ts-mode--font-lock-settings
  (treesit-font-lock-rules
   :language 'noir
   :feature 'bracket
   '((["(" ")" "[" "]" "{" "}"]) @font-lock-bracket-face)


   ((identifier) @font-lock-type-face)

   :language 'noir
   :feature 'comment
   '((comment) @font-lock-comment-face)

   :language 'noir
   :feature 'constant
   `((boolean) @font-lock-constant-face
     ((identifier) @font-lock-constant-face
      (:match "^[A-Z][A-Z\\d_]*$" @font-lock-constant-face)))

   :language 'noir
   :feature 'delimiter
   '((["," "." ";" ":" "::"]) @font-lock-delimiter-face)

   :language 'noir
   :feature 'keyword
   `([,@noir-ts-mode--keywords] @font-lock-keyword-face)

   :language 'noir
   :feature 'number
   '((integer) @font-lock-number-face)

   :language 'noir
   :feature 'operator
   `([,@noir-ts-mode--operators] @font-lock-operator-face)

   :language 'noir
   :feature 'string
   '([(char)
      (string)] @font-lock-string-face))

  "Tree-sitter font-lock settings for `noir-ts-mode'.")


;;;###autoload
(add-to-list 'auto-mode-alist '("\\.nr\\'" . noir-ts-mode))

;;;###autoload
(define-derived-mode noir-ts-mode prog-mode "Noir"
  "Major mode for editing Noir, powered by tree-sitter."
  :group 'noir
  :syntax-table noir-ts-mode--syntax-table

  (when (treesit-ready-p 'noir)
    (treesit-parser-create 'noir)

    ;; Comments.
    (setq-local comment-start "// ")
    (setq-local comment-end "")
    (setq-local comment-start-skip (rx (or "//" "/*")))
    (setq-local comment-end-skip (rx (or "\n" "*/")))


 ;; Font-lock
 (setq-local treesit-font-lock-settings noir-ts-mode--font-lock-settings)

    (treesit-major-mode-setup)))

(provide 'noir-ts-mode)

;;; noir-ts-mode.el ends here