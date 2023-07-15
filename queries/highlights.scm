; Identifier conventions

; Assume all-caps names are constants
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]+$'"))

; types
(generic_type) @type
(single_type) @type.builtin
(array_type) @type


;; functions
(function_definition
    name: (identifier) @function)
(function_call
  name: (identifier) @function)


;; let
(let_declaration
    name: (identifier) @variable)


;; structs
(struct_definition
    name: (identifier) @type)

;; imports
(import
    path: (import_identifier) @include)

;; comments
(comment) @comment

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

(generic
  "<" @punctuation.bracket
  ">" @punctuation.bracket)
(generic
  "<" @punctuation.bracket
  ">" @punctuation.bracket)

"::" @punctuation.delimiter
":" @punctuation.delimiter
"." @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter

(parameter (identifier) @variable.parameter)

"as" @keyword
;;"break" @keyword
;;"const" @keyword
;;"global" @keyword
;;"continue" @keyword
"else" @keyword
"fn" @keyword
"for" @keyword
"if" @keyword
"impl" @keyword
"in" @keyword
"let" @keyword
"mod" @keyword
;;"return" @keyword
"struct" @keyword
"use" @keyword

(mutable) @keyword
(viewer) @keyword

(self) @variable.builtin

(character) @string
(string) @string

(boolean) @constant.builtin
(integer) @constant.builtin
(float) @constant.builtin


"*" @operator
"&" @operator
;;"'" @operator
