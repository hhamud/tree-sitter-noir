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
};

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
];

const primitve_types = ["Field", "bool", "String"];

module.exports = grammar({
  name: "noir",

  extras: ($) => [/\s|\\\r?\n/, $.comment],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice($.comment, $._expression_statement, $.let_declaration), // comment is the only valid construct

    //Statements
    let_declaration: ($) =>
      seq(
        "let",
        optional($.mutable),
        $.identifier,
        optional(seq(":", field("type", $._type))),
        optional(seq("=", field("value", $._expression))),
        ";"
      ),

    binary_expression: ($) => {
      const table = [
        [PREC.and, "&&"],
        [PREC.or, "||"],
        [PREC.bitand, "&"],
        [PREC.bitor, "|"],
        [PREC.bitxor, "^"],
        [PREC.comparative, choice("==", "!=", "<", "<=", ">", ">=")],
        [PREC.shift, choice("<<", ">>")],
        [PREC.additive, choice("+", "-")],
        [PREC.multiplicative, choice("*", "/", "%")],
      ];

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
      );
    },

    unary_expression: ($) =>
      prec(PREC.unary, seq(choice("-", "*", "!"), $._expression)),

    _expression_statement: ($) => seq($._expression, ";"),

    _expression: ($) =>
      choice(
        $.binary_expression,
        $.unary_expression,
        $.identifier,
        $.integer,
        $.string,
        $.character
      ),

    empty_expression: ($) => ";",

    integer: ($) => /(\d+_?)+/,

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: ($) => /b?"(\\.|[^"\\])*"/,

    character: ($) => /'(\\.|[^'\\])*'/,

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
    _type: ($) => choice(...numeric_types, ...primitve_types),
  },
});
