; Identifier conventions

; Assume all-caps names are constants
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]+$'"))

; Assume other uppercase names are enum constructors
((identifier) @constructor
 (#match? @constructor "^[A-Z]"))

; types
(generic_type) @type
(single_type) @type.builtin
(array_type) @type

(comment) @comment

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

(type_arguments
  "<" @punctuation.bracket
  ">" @punctuation.bracket)
(type_parameters
  "<" @punctuation.bracket
  ">" @punctuation.bracket)

"::" @punctuation.delimiter
":" @punctuation.delimiter
"." @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter

(parameter (identifier) @variable.parameter)

"as" @keyword
"break" @keyword
"const" @keyword
"continue" @keyword
"default" @keyword
"else" @keyword
"enum" @keyword
"fn" @keyword
"for" @keyword
"if" @keyword
"impl" @keyword
"in" @keyword
"let" @keyword
"loop" @keyword
"match" @keyword
"mod" @keyword
"move" @keyword
"pub" @keyword
"return" @keyword
"struct" @keyword
"type" @keyword
"use" @keyword

(mutable) @keyword
(viewer) @keyword
(super) @keyword

(self) @variable.builtin

(character) @string
(string) @string

(boolean) @constant.builtin
(integer) @constant.builtin
(float) @constant.builtin


"*" @operator
"&" @operator
"'" @operator
