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
  "isize",
  "usize",
  "f32",
  "f64",
]

const primitve_types = ["Field", "bool", "String"]

module.exports = grammar({
  name: "noir",

  extras: ($) => [/\s|\\\r?\n/, $.comment],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.comment,
        $._expression_statement,
        $.let_declaration,
        $._type,
        $.function_definition,
        $.module,
        $.import,
        $.macro,
        $.struct,
        $.for_loop,
        $._if_else_exp
      ),

    binary_expression: ($) => {
      const table = [
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
        [PREC.additive, choice("+", "-")],
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

    _expression_statement: ($) => seq($._expression, ";"),

    re_assignment: ($) =>
      seq($.identifier, "=", choice($.integer, $.string)),

    grouped_expression: ($) => seq("(", $._expression, ")"),

    _expression: ($) =>
      choice(
        $.binary_expression,
        $.unary_expression,
        $.re_assignment,
        $.identifier,
        $.integer,
        $.string,
        $.character,
        $.array,
        $.grouped_expression
      ),

    // primitives
    empty_expression: ($) => ";",

    integer: ($) => /(\d+_?)+/,

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    as_identifier: ($) =>
      seq($.identifier, "as", $.identifier),

    string: ($) => /b?"(\\.|[^"\\])*"/,

    character: ($) => /'(\\.|[^'\\])*'/,

    range: ($) => seq($.integer, "..", $.integer),

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

    viewer: ($) => "pub",

    //types
    single_type: ($) =>
      choice(...numeric_types, ...primitve_types),

    array_type: ($) =>
      seq(
        "[",
        choice(...numeric_types, ...primitve_types),
        optional(seq(";", $.integer)),
        "]"
      ),

    _type: ($) => choice($.single_type, $.array_type),

    // functions
    function_definition: ($) =>
      seq(
        "fn",
        $.identifier,
        $.parameter,
        optional($.return_type),
        $.body
      ),

    parameter: ($) =>
      seq(
        "(",
        optional(
          repeat(
            seq(
              $.identifier,
              ":",
              optional($.viewer),
              $._type,
              optional(",")
            )
          )
        ),
        ")"
      ),

    body: ($) =>
      seq(
        "{",
        optional(
          repeat(
            choice(
              $._expression,
              $._expression_statement,
              $.module,
              $.as_identifier,
              $.import_identifier,
              $.body,
              "*",
              ",",
              $.for_loop,
              $._if_else_exp
            )
          )
        ),
        "}"
      ),

    return_type: ($) =>
      seq("->", optional($.viewer), $._type),

    function_call: ($) => seq($.identifier, $.parameter),

    // modules
    module: ($) =>
      choice(
        // If the body is present, the semicolon is optional
        seq(
          optional($.viewer),
          "mod",
          $.identifier,
          $.body,
          optional(";")
        ),
        // If the body is not present, the semicolon is required
        seq(optional($.viewer), "mod", $.identifier, ";")
      ),

    // imports
    import_identifier: ($) => seq($.identifier, "::"),

    import: ($) =>
      seq(
        optional($.viewer),
        "use",
        repeat($.import_identifier),
        choice($.identifier, $.body, "*", $.as_identifier),
        ";"
      ),

    // macros
    macro: ($) =>
      seq(
        "#",
        "[",
        repeat(
          choice($.identifier, $._punctuation, $._literal)
        ),
        "]"
      ),

    _punctuation: (_) => token(choice(..."(),")),
    _literal: ($) => choice($.integer, $.string),

    // structs
    struct: ($) =>
      seq(
        optional("struct"),
        $.identifier,
        "{",
        repeat($._field),
        "}"
      ),

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

    struct_method: ($) => seq("impl", $.body),

    // control flow

    for_loop: ($) =>
      seq(
        "for",
        $.identifier,
        "in",
        choice($.identifier, $.range),
        $.body
      ),

    if_exp: ($) => seq("if", $._expression, $.body),

    else_exp: ($) => seq("else", $.body),

    _if_else_exp: ($) =>
      seq($.if_exp, optional($.else_exp)),

    // declarations
    let_declaration: ($) =>
      seq(
        "let",
        optional($.mutable),
        choice($.struct, $.identifier),
        optional(seq(":", field("type", $._type))),
        optional(
          seq(
            "=",
            field(
              "value",
              choice(
                $._expression,
                $.struct,
                $.function_call
              )
            )
          )
        ),
        ";"
      ),
  },
})
