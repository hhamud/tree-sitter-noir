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

const primitve_types = ["Field", "bool", "String", "Self"]

module.exports = grammar({
  name: "noir",

  extras: ($) => [/\s|\\\r?\n/, $.comment],

  externals: ($) => [$.float],

  conflicts: ($) => [
    [$.generic_type, $._typed_identifier],
    [$.array_identifier, $._expression],
    [$.function_call, $.struct_expression],
    [$._definition, $._expression],
    [$._statement, $._expression],
    [$.struct_function, $.struct_expression],
    [$.struct_function, $._expression],
    [$.struct_initialization, $.single_type],
    [$.generic_type, $._expression],
    [$.function_call, $._expression],
    [$._expression, $.struct_initialization],
    [$.module],
    [$._type],
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
          choice("==", "!=", "<", "<=", ">", ">="),
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

    grouped_expression: ($) => seq("(", $._expression, ")"),

    global: ($) => seq("global", $._statement),

    _expression: ($) =>
      choice(
        $.float,
        $.binary_expression,
        $.unary_expression,
        $.identifier,
        $.integer,
        $.string,
        $.character,
        $.array,
        $.boolean,
        $.grouped_expression,
        $.struct_expression,
        $._function,
        $.struct_function,
        $.as_identifier,
        $.self_method,
        $._typed_identifier,
        $.struct_initialization,
        $.array_identifier,
        $._import_var
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
        choice($.identifier, $.integer, $.string),
        "]"
      ),

    _typed_identifier: ($) =>
      seq(
        optional($.mutable),
        $.identifier,
        ":",
        seq(
          optional($.viewer),
          optional($.comptime),
          choice($._type, $.identifier)
        )
      ),

    string: ($) => /b?"(\\.|[^"\\])*"/,

    character: ($) => /'(\\.|[^'\\])*'/,

    as_identifier: ($) =>
      seq(
        $.identifier,
        "as",
        choice($.identifier, $.single_type)
      ),

    range: ($) => seq($._expression, "..", $._expression),

    array: ($) =>
      seq(
        "[",
        optional(
          seq(
            choice($.integer, $.string),
            repeat(seq(",", choice($.integer, $.string)))
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

    //types
    single_type: ($) =>
      choice(...numeric_types, ...primitve_types),

    array_type: ($) =>
      seq(
        "[",
        choice(...numeric_types, ...primitve_types),
        optional(seq(";", choice($.integer, $.identifier))),
        "]"
      ),

    generic_type: ($) =>
      seq(optional($.identifier), $.generic),

    _type: ($) =>
      seq(
        optional($.comptime),
        choice($.single_type, $.array_type, $.generic_type)
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
        $.parameter,
        optional($.return_type),
        $.body
      ),

    function_call: ($) => seq($.identifier, $.parameter),

    //()
    //(n: Field)
    // (self)
    // (self, n: Field)
    // ([pky, pkx])
    // (sm[i].signature)
    // (sm[i].signature)

    parameter: ($) =>
      seq("(", optional(commaSep($._expression)), ")"),

    body: ($) =>
      seq(
        "{",
        optional(repeat(choice($._definition, ","))),
        "}"
      ),

    return_type: ($) =>
      seq(
        "->",
        optional($.viewer),
        choice($._type, $.identifier)
      ),

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
    import_identifier: ($) => seq($.identifier, "::"),

    _import_var: ($) =>
      seq(repeat1($.import_identifier), $.identifier),

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
            choice($.integer, $.string)
          )
        ),
        "]"
      ),

    _punctuation: (_) => token(choice(..."(),")),

    // structs
    struct_definition: ($) =>
      seq(
        "struct",
        $.identifier,
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

    struct_expression: ($) => dotSep($.identifier),

    struct_function: ($) =>
      seq(
        $.identifier,
        ".",
        repeat(seq($.identifier, ".")),
        $.function_call
      ),

    self: ($) => "self",

    self_method: ($) =>
      seq($.self, optional(repeat(seq(".", $.identifier)))),

    _field: ($) =>
      seq(
        $.identifier,
        optional(
          seq(
            ":",
            choice(
              $._type,
              $.integer,
              $.string,
              $.identifier
            )
          )
        ),
        optional(",")
      ),

    struct_method: ($) =>
      seq(
        "impl",
        optional($.generic),
        $.identifier,
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
    let_declaration: ($) => seq("let", $._expression, ";"),

    // identifier class
    assert: ($) => seq("assert", "(", $._expression, ")"),
  },
})

// custom functions
function commaSep(rule) {
  return optional(seq(rule, repeat(seq(",", rule))))
}

function dotSep(rule) {
  return seq(rule, repeat1(seq(".", rule)))
}
