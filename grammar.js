/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  range: 15,
  call: 14,
  field: 13,
  unary: 12,
  cast: 11,
  multiplicative: 10,
  additive: 9,
  shift: 8,
  bitand: 7,
  bitxor: 6,
  bitor: 5,
  comparative: 4,
  and: 3,
  or: 2,
  assign: 0,
  closure: -1,
}

const numeric_types = [
  "u8",
  "i8",
  "u16",
  "i16",
  "u32",
  "i32",
  "u64",
  "i64",
  "u128",
  "i128",
]

const primitve_types = ["Field", "bool", "Self"]

module.exports = grammar({
  name: "noir",

  extras: ($) => [/\s|\\\r?\n/, $.comment],

  externals: ($) => [$.float],

  conflicts: ($) => [
    [$.function_call, $.self_method],
    [$.return_type, $.generic_type],
    [$._array_parameter, $._type],
    [$._type, $.generic_type],
    [$._type, $.array],
    [$._type, $.function_import],
    [$.array_type, $.array],
    [$.generic_type, $.typed_identifier],
    [$.array_identifier, $.struct_expression],
    [$.array_identifier, $._expression, $._type],
    [$.array_identifier, $._expression],
    [$.function_call, $.struct_expression],
    [$._definition, $._expression],
    [$._statement, $._expression],
    [$.struct_function, $.struct_expression],
    [$.struct_function, $._expression],
    [$.struct_initialization, $.single_type],
    [$.generic_type, $._type, $._expression],
    [$.function_call, $._type, $._expression],
    [$._type, $._expression],
    [$.function_call, $._expression],
    [$._expression, $.struct_initialization],
    [$._type, $._expression, $.struct_initialization],
    [$.module],
    [$._type],
    [$.typed_identifier],
    [$.self_method],
    [$.function_import],
    [$.let_declaration, $.function_import],
  ],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $._statement,
        $._expression,
        $.module,
        $.import,
        $.body,
        $.for_loop,
        $._if_else_exp,
        $.struct_initialization,
        $._function,
        $.comment,
        $.let_declaration,
        $._type,
        $.import,
        $.macro,
        $.struct_definition,
        $.self_method,
        $.struct_method,
        $.struct_function,
        $.return,
        $.global
      ),

    _statement: ($) =>
      seq(
        choice(
          $._expression,
          $.let_declaration,
          $.import,
          $.struct_definition,
          $.module,
          $.assert,
          $._function
        ),
        ";"
      ),

    //expressions
    binary_expression: ($) => {
      const table = [
        [PREC.assign, "="],
        [PREC.and, "&&"],
        [PREC.or, "||"],
        [PREC.bitand, "&"],
        [PREC.bitor, "|"],
        [PREC.bitxor, "^"],
        [
          PREC.comparative,
          choice(
            "==",
            "!=",
            "<",
            "<=",
            ">",
            ">=",
            "|=",
            "&="
          ),
        ],
        [PREC.shift, choice("<<", ">>")],
        [PREC.additive, choice("+", "-", "+=", "-=")],
        [PREC.multiplicative, choice("*", "/", "%")],
      ]

      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression)
            )
          )
        )
      )
    },

    unary_expression: ($) =>
      prec(
        PREC.unary,
        seq(choice("-", "*", "!"), $._expression)
      ),

    grouped_expression: ($) =>
      seq(
        "(",
        commaSep(seq(optional($.mutable), $._expression)),
        ")"
      ),

    global: ($) => seq("global", $._statement),

    _expression: ($) =>
      choice(
        $.float,
        $.binary_expression,
        $.unary_expression,
        $.identifier,
        $.integer,
        $.string_literal,
        $.character,
        $.array,
        $.boolean,
        $.grouped_expression,
        $.struct_expression,
        $._function,
        $.struct_function,
        $.as_identifier,
        $.self_method,
        $.typed_identifier,
        $.struct_initialization,
        $.array_identifier,
        $.import_variable
      ),

    // primitives
    integer: ($) => /(\d+_?)+/,

    boolean: ($) => choice("true", "false"),

    generic: ($) => seq("<", commaSep($.identifier), ">"),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    array_identifier: ($) =>
      seq(
        $.identifier,
        "[",
        choice($.identifier, $.integer, $.string_literal),
        "]"
      ),

    typed_identifier: ($) =>
      seq(
        optional($.mutable),
        field("var", $.identifier),
        ":",
        seq(
          optional($.viewer),
          optional($.comptime),
          choice($._tuple_type, $._type)
        )
      ),

    string_literal: ($) => /b?"(\\.|[^"\\])*"/,

    character: ($) => /'(\\.|[^'\\])*'/,

    as_identifier: ($) =>
      seq(
        choice(
          $.identifier,
          $.grouped_expression,
          $.integer
        ),
        "as",
        $._type
      ),

    range: ($) => seq($._expression, "..", $._expression),

    _array_parameter: ($) =>
      choice(
        $.integer,
        $.string_literal,
        $.identifier,
        $.as_identifier,
        $.import_variable
      ),

    array: ($) =>
      seq(
        "[",
        seq(
          $._array_parameter,
          choice(
            repeat(seq(",", $._array_parameter)),
            seq(";", $._array_parameter)
          )
        ),
        "]"
      ),

    // comment
    comment: (_) =>
      token(
        choice(
          seq("//", /(\\+(.|\r?\n)|[^\\\n])*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
        )
      ),

    //specifiers
    mutable: ($) => "mut",

    comptime: ($) => "comptime",

    viewer: ($) => "pub",

    return: ($) => "return",

    crate: ($) => "crate",

    super: ($) => "super",

    //types
    single_type: ($) =>
      choice(...numeric_types, ...primitve_types),

    array_type: ($) =>
      seq(
        "[",
        seq(
          $._type,
          optional(seq(";", choice($.integer, $._type)))
        ),
        "]"
      ),

    generic_type: ($) =>
      seq(optional($.identifier), $.generic),

    _type: ($) =>
      seq(
        optional($.comptime),
        choice(
          $.single_type,
          $.array_type,
          $.generic_type,
          $.function_type,
          $.import_variable,
          field("type", $.identifier)
        )
      ),

    // functions
    _function: ($) =>
      choice(
        $.function_definition,
        $.function_import,
        $.function_call
      ),

    function_definition: ($) =>
      seq(
        "fn",
        $.identifier,
        optional($.generic),
        optional($.array_type),
        $.parameter,
        optional($.return_type),
        $.body
      ),

    function_call: ($) => seq($.identifier, $.parameter),

    parameter: ($) =>
      seq(
        "(",
        optional(
          commaSep(
            choice(
              $.typed_identifier,
              $.self_method,
              $.array,
              $._function,
              $.array_identifier,
              $.identifier,
              $.grouped_expression,
              $.as_identifier,
              $.integer,
              $.string_literal,
              $.character
            )
          )
        ),
        ")"
      ),

    body: ($) =>
      seq(
        "{",
        optional(repeat(choice($._definition, ","))),
        "}"
      ),

    _tuple_type: ($) => seq("(", commaSep($._type), ")"),

    return_type: ($) =>
      seq(
        "->",
        choice(
          $._tuple_type,
          seq(optional($.viewer), $._type)
        )
      ),

    function_type: ($) =>
      seq("fn", $.parameter, $.return_type),

    // modules
    module: ($) =>
      choice(
        seq(
          optional($.viewer),
          "mod",
          $.identifier,
          $.body
        ),

        seq(optional($.viewer), "mod", $.identifier)
      ),

    // imports
    import_identifier: ($) =>
      seq(choice($.crate, $.super, $.identifier), "::"),

    import_variable: ($) =>
      seq(
        repeat1($.import_identifier),
        field("", $.identifier)
      ),

    import: ($) =>
      seq(
        optional($.viewer),
        "use",
        repeat($.import_identifier),
        choice(
          $.identifier,
          $.import_body,
          "*",
          $.as_identifier
        )
      ),

    import_body: ($) =>
      seq(
        "{",
        optional(
          repeat(
            choice(
              $.identifier,
              $.import_identifier,
              "*",
              ",",
              $.as_identifier,
              $.import_body
            )
          )
        ),
        "}"
      ),

    function_import: ($) =>
      seq(
        $.import_identifier,
        repeat($.import_identifier),
        $.function_call
      ),

    // macros
    macro: ($) =>
      seq(
        "#",
        "[",
        repeat(
          choice(
            $.identifier,
            $._punctuation,
            choice($.integer, $.string_literal)
          )
        ),
        "]"
      ),

    _punctuation: (_) => token(choice(..."(),")),

    // structs
    struct_definition: ($) =>
      seq(
        "struct",
        field("name", $.identifier),
        optional($.generic),
        "{",
        repeat($._field),
        "}"
      ),

    struct_initialization: ($) =>
      seq(
        choice($.identifier, "Self"),
        "{",
        repeat($._field),
        "}"
      ),

    struct_expression: ($) =>
      dotSep(
        choice(
          $.array_identifier,
          $.identifier,
          $.array,
          $.integer
        )
      ),

    struct_function: ($) =>
      seq(
        $.identifier,
        ".",
        repeat(seq($.identifier, ".")),
        $.function_call
      ),

    self: ($) => "self",

    self_method: ($) =>
      seq(
        $.self,
        optional(
          choice(
            $.array,
            repeat(
              seq(
                ".",
                choice($.identifier, $.function_call)
              )
            )
          )
        )
      ),

    _field: ($) =>
      seq(
        field("var", $.identifier),
        optional(
          seq(
            ":",
            choice($._type, $.integer, $.string_literal)
          )
        ),
        optional(",")
      ),

    struct_method: ($) =>
      seq(
        "impl",
        optional($.generic),
        optional($.identifier),
        optional($.array_type),
        optional($.generic),
        $.body
      ),

    // control flow
    for_loop: ($) =>
      seq(
        "for",
        $.identifier,
        "in",
        choice($._expression, $.range),
        $.body
      ),

    if_exp: ($) => seq("if", $._expression, $.body),

    else_exp: ($) => seq("else", $.body),

    _if_else_exp: ($) =>
      seq($.if_exp, optional($.else_exp)),

    // declarations
    let_declaration: ($) =>
      seq("let", optional($.mutable), $._expression, ";"),

    // identifier class
    assert: ($) =>
      seq(
        choice("assert", "constrain"),
        "(",
        $._expression,
        ")"
      ),
  },
})

// custom functions
function commaSep(rule) {
  return optional(seq(rule, repeat(seq(",", rule))))
}

function dotSep(rule) {
  return seq(rule, repeat1(seq(".", rule)))
}
