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

;; You need to update the syntax table, indent rules, keywords, operators, and 
;; other related language-specific settings to match the Noir language based on
;; the grammar you provided. The example above does not provide enough information
;; to generate these settings.

;; ...

;;;###autoload
(add-to-list 'auto-mode-alist '("\\.noir\\'" . noir-ts-mode))

;;;###autoload
(define-derived-mode noir-ts-mode prog-mode "Noir"
  "Major mode for editing Noir, powered by tree-sitter."
  :group 'noir
  ;; Replace `rust-ts-mode--syntax-table` with your syntax table.
  :syntax-table noir-ts-mode--syntax-table

  (when (treesit-ready-p 'noir)
    (treesit-parser-create 'noir)

    ;; Comments.
    (setq-local comment-start "// ")
    (setq-local comment-end "")
    (setq-local comment-start-skip (rx (or "//" "/*")))
    (setq-local comment-end-skip (rx (or "\n" "*/")))


 ;; Font-lock.
    (setq-local font-lock-defaults
                '(noir-font-lock-keywords nil nil nil nil
                  (font-lock-syntactic-face-function
                   . noir-font-lock-syntactic-face-function)))

    ;; Imenu.
(setq-local imenu-generic-expression
            '((nil "^\\s-*def\\s-+\\(.*\\)" 1)))

    ;; Indent.
(setq-local indent-line-function 'indent-relative)


 ;; Navigation.
(setq-local beginning-of-defun-function 'noir-beginning-of-defun)
(setq-local end-of-defun-function 'noir-end-of-defun)

    (treesit-major-mode-setup)))

(provide 'noir-ts-mode)

;;; noir-ts-mode.el ends here
