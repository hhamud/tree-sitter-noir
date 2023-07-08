#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_let = 1,
  anon_sym_COLON = 2,
  anon_sym_EQ = 3,
  anon_sym_SEMI = 4,
  anon_sym_AMP_AMP = 5,
  anon_sym_PIPE_PIPE = 6,
  anon_sym_AMP = 7,
  anon_sym_PIPE = 8,
  anon_sym_CARET = 9,
  anon_sym_EQ_EQ = 10,
  anon_sym_BANG_EQ = 11,
  anon_sym_LT = 12,
  anon_sym_LT_EQ = 13,
  anon_sym_GT = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_LT_LT = 16,
  anon_sym_GT_GT = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_PERCENT = 22,
  anon_sym_BANG = 23,
  sym_integer = 24,
  sym_identifier = 25,
  sym_string = 26,
  sym_character = 27,
  anon_sym_LBRACK = 28,
  anon_sym_COMMA = 29,
  anon_sym_RBRACK = 30,
  sym_comment = 31,
  sym_mutable = 32,
  sym_viewer = 33,
  anon_sym_u8 = 34,
  anon_sym_i8 = 35,
  anon_sym_u16 = 36,
  anon_sym_i16 = 37,
  anon_sym_u32 = 38,
  anon_sym_i32 = 39,
  anon_sym_u64 = 40,
  anon_sym_i64 = 41,
  anon_sym_u128 = 42,
  anon_sym_i128 = 43,
  anon_sym_isize = 44,
  anon_sym_usize = 45,
  anon_sym_f32 = 46,
  anon_sym_f64 = 47,
  anon_sym_Field = 48,
  anon_sym_bool = 49,
  anon_sym_String = 50,
  anon_sym_fn = 51,
  anon_sym_LPAREN = 52,
  anon_sym_RPAREN = 53,
  anon_sym_LBRACE = 54,
  anon_sym_RBRACE = 55,
  anon_sym_DASH_GT = 56,
  sym_source_file = 57,
  sym__definition = 58,
  sym_let_declaration = 59,
  sym_binary_expression = 60,
  sym_unary_expression = 61,
  sym__expression_statement = 62,
  sym__expression = 63,
  sym_array = 64,
  sym_single_type = 65,
  sym_array_type = 66,
  sym__type = 67,
  sym_function_definition = 68,
  sym_parameter = 69,
  sym_body = 70,
  sym_return_type = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_array_repeat1 = 73,
  aux_sym_parameter_repeat1 = 74,
  aux_sym_body_repeat1 = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_BANG] = "!",
  [sym_integer] = "integer",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_character] = "character",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_mutable] = "mutable",
  [sym_viewer] = "viewer",
  [anon_sym_u8] = "u8",
  [anon_sym_i8] = "i8",
  [anon_sym_u16] = "u16",
  [anon_sym_i16] = "i16",
  [anon_sym_u32] = "u32",
  [anon_sym_i32] = "i32",
  [anon_sym_u64] = "u64",
  [anon_sym_i64] = "i64",
  [anon_sym_u128] = "u128",
  [anon_sym_i128] = "i128",
  [anon_sym_isize] = "isize",
  [anon_sym_usize] = "usize",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_Field] = "Field",
  [anon_sym_bool] = "bool",
  [anon_sym_String] = "String",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_let_declaration] = "let_declaration",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym_array] = "array",
  [sym_single_type] = "single_type",
  [sym_array_type] = "array_type",
  [sym__type] = "_type",
  [sym_function_definition] = "function_definition",
  [sym_parameter] = "parameter",
  [sym_body] = "body",
  [sym_return_type] = "return_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_integer] = sym_integer,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_character] = sym_character,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_mutable] = sym_mutable,
  [sym_viewer] = sym_viewer,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u128] = anon_sym_u128,
  [anon_sym_i128] = anon_sym_i128,
  [anon_sym_isize] = anon_sym_isize,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_Field] = anon_sym_Field,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_let_declaration] = sym_let_declaration,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym__expression_statement] = sym__expression_statement,
  [sym__expression] = sym__expression,
  [sym_array] = sym_array,
  [sym_single_type] = sym_single_type,
  [sym_array_type] = sym_array_type,
  [sym__type] = sym__type,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter] = sym_parameter,
  [sym_body] = sym_body,
  [sym_return_type] = sym_return_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_mutable] = {
    .visible = true,
    .named = true,
  },
  [sym_viewer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_single_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
  field_type = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 1},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [3] =
    {field_type, 3},
  [4] =
    {field_value, 3},
  [5] =
    {field_type, 4},
  [6] =
    {field_value, 4},
  [7] =
    {field_type, 3},
    {field_value, 5},
  [9] =
    {field_type, 4},
    {field_value, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 18,
  [65] = 6,
  [66] = 9,
  [67] = 4,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 81,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 100,
  [102] = 97,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(88);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '&') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(82);
      if (lookahead == ',') ADVANCE(131);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == 'F') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(47);
      if (lookahead == '[') ADVANCE(130);
      if (lookahead == '\\') SKIP(58)
      if (lookahead == ']') ADVANCE(132);
      if (lookahead == '^') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(88);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '&') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(82);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '[') ADVANCE(130);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == ',') ADVANCE(131);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(142);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(22);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(26);
      if (lookahead == '8') ADVANCE(140);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(164);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(27);
      if (lookahead == '6') ADVANCE(146);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(150);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(148);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(28);
      if (lookahead == '6') ADVANCE(144);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 24:
      if (lookahead == '4') ADVANCE(166);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(154);
      END_STATE();
    case 26:
      if (lookahead == '4') ADVANCE(152);
      END_STATE();
    case 27:
      if (lookahead == '8') ADVANCE(158);
      END_STATE();
    case 28:
      if (lookahead == '8') ADVANCE(156);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'z') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'z') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(135);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 56:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 57:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 58:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(57)
      END_STATE();
    case 59:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') SKIP(61)
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') SKIP(61)
      if (lookahead == '\r') SKIP(59)
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(88);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '&') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(82);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == 'F') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(121);
      if (lookahead == '[') ADVANCE(130);
      if (lookahead == '\\') SKIP(60)
      if (lookahead == '^') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(96);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == '6') ADVANCE(102);
      if (lookahead == '8') ADVANCE(143);
      if (lookahead == 's') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(99);
      if (lookahead == '3') ADVANCE(98);
      if (lookahead == '6') ADVANCE(103);
      if (lookahead == '8') ADVANCE(141);
      if (lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(104);
      if (lookahead == '6') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(105);
      if (lookahead == '6') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(95);
      if (lookahead == '6') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(54);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_mutable);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_viewer);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_Field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 61},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 61},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 15},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_mutable] = ACTIONS(1),
    [sym_viewer] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_i128] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_Field] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(96),
    [sym__definition] = STATE(2),
    [sym_let_declaration] = STATE(2),
    [sym_binary_expression] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym__expression_statement] = STATE(2),
    [sym__expression] = STATE(44),
    [sym_array] = STATE(44),
    [sym_single_type] = STATE(2),
    [sym_array_type] = STATE(2),
    [sym__type] = STATE(2),
    [sym_function_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_Field] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_String] = ACTIONS(19),
    [anon_sym_fn] = ACTIONS(21),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_let_declaration] = STATE(3),
    [sym_binary_expression] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym__expression_statement] = STATE(3),
    [sym__expression] = STATE(44),
    [sym_array] = STATE(44),
    [sym_single_type] = STATE(3),
    [sym_array_type] = STATE(3),
    [sym__type] = STATE(3),
    [sym_function_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_comment] = ACTIONS(25),
    [anon_sym_u8] = ACTIONS(19),
    [anon_sym_i8] = ACTIONS(19),
    [anon_sym_u16] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(19),
    [anon_sym_u32] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(19),
    [anon_sym_i64] = ACTIONS(19),
    [anon_sym_u128] = ACTIONS(19),
    [anon_sym_i128] = ACTIONS(19),
    [anon_sym_isize] = ACTIONS(19),
    [anon_sym_usize] = ACTIONS(19),
    [anon_sym_f32] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(19),
    [anon_sym_Field] = ACTIONS(19),
    [anon_sym_bool] = ACTIONS(19),
    [anon_sym_String] = ACTIONS(19),
    [anon_sym_fn] = ACTIONS(21),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_let_declaration] = STATE(3),
    [sym_binary_expression] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym__expression_statement] = STATE(3),
    [sym__expression] = STATE(44),
    [sym_array] = STATE(44),
    [sym_single_type] = STATE(3),
    [sym_array_type] = STATE(3),
    [sym__type] = STATE(3),
    [sym_function_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(32),
    [anon_sym_STAR] = ACTIONS(32),
    [anon_sym_BANG] = ACTIONS(32),
    [sym_integer] = ACTIONS(35),
    [sym_identifier] = ACTIONS(38),
    [sym_string] = ACTIONS(35),
    [sym_character] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_comment] = ACTIONS(44),
    [anon_sym_u8] = ACTIONS(47),
    [anon_sym_i8] = ACTIONS(47),
    [anon_sym_u16] = ACTIONS(47),
    [anon_sym_i16] = ACTIONS(47),
    [anon_sym_u32] = ACTIONS(47),
    [anon_sym_i32] = ACTIONS(47),
    [anon_sym_u64] = ACTIONS(47),
    [anon_sym_i64] = ACTIONS(47),
    [anon_sym_u128] = ACTIONS(47),
    [anon_sym_i128] = ACTIONS(47),
    [anon_sym_isize] = ACTIONS(47),
    [anon_sym_usize] = ACTIONS(47),
    [anon_sym_f32] = ACTIONS(47),
    [anon_sym_f64] = ACTIONS(47),
    [anon_sym_Field] = ACTIONS(47),
    [anon_sym_bool] = ACTIONS(47),
    [anon_sym_String] = ACTIONS(47),
    [anon_sym_fn] = ACTIONS(50),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(53), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(55), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [34] = 2,
    ACTIONS(57), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(59), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [68] = 2,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(63), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [102] = 2,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(67), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [136] = 2,
    ACTIONS(69), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(71), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [170] = 2,
    ACTIONS(73), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(75), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [204] = 2,
    ACTIONS(77), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(79), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [238] = 2,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(83), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [272] = 2,
    ACTIONS(85), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(87), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [306] = 2,
    ACTIONS(89), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(91), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [340] = 2,
    ACTIONS(93), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(95), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [374] = 2,
    ACTIONS(97), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(99), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [408] = 2,
    ACTIONS(101), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(103), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [442] = 2,
    ACTIONS(105), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(107), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [476] = 2,
    ACTIONS(109), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(111), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [510] = 2,
    ACTIONS(113), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(115), 20,
      anon_sym_let,
      sym_identifier,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_fn,
  [544] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(125), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(117), 12,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [592] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(125), 6,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(117), 15,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [632] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(125), 5,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(117), 13,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 7,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(135), 19,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 7,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(139), 19,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 7,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(143), 19,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [778] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(125), 5,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(117), 12,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 7,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(147), 19,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [858] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 2,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(163), 5,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 7,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(117), 19,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [950] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(125), 6,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(117), 17,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [988] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(125), 2,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(117), 8,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [1040] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(125), 2,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(117), 7,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [1094] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(125), 6,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
    ACTIONS(117), 13,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [1136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(167), 1,
      sym_viewer,
    STATE(70), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(169), 17,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
  [1170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      sym_viewer,
    STATE(95), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(169), 17,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
  [1204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(98), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(169), 17,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
  [1235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(73), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(169), 17,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
  [1266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(84), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(169), 17,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
  [1297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(89), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(169), 17,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
  [1328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    ACTIONS(173), 2,
      sym_integer,
      sym_string,
    ACTIONS(177), 17,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
  [1358] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1405] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1452] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1499] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1546] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(127), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 17,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_Field,
      anon_sym_bool,
      anon_sym_String,
  [1616] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(49), 2,
      sym__expression_statement,
      aux_sym_body_repeat1,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(191), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(28), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1649] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(48), 2,
      sym__expression_statement,
      aux_sym_body_repeat1,
    ACTIONS(199), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(202), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(28), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1682] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(48), 2,
      sym__expression_statement,
      aux_sym_body_repeat1,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(191), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(28), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1715] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(215), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(25), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1741] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(219), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(32), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1767] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(223), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(45), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1793] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(227), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(42), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1819] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(231), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(31), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1845] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(235), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(30), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(239), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(20), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1897] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(243), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(26), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(247), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(43), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1949] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(251), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(29), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [1975] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(255), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(22), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2001] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(259), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(41), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2027] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(263), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(33), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2053] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(267), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(21), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(109), 8,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
  [2096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [2108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [2120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [2132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      anon_sym_DASH_GT,
    STATE(10), 1,
      sym_body,
    STATE(83), 1,
      sym_return_type,
  [2148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_parameter_repeat1,
  [2161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(279), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [2172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_parameter_repeat1,
  [2185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_array_repeat1,
  [2198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(289), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [2209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_parameter_repeat1,
  [2222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COLON,
    ACTIONS(300), 1,
      anon_sym_EQ,
    ACTIONS(302), 1,
      anon_sym_SEMI,
  [2235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    ACTIONS(173), 2,
      sym_integer,
      sym_string,
  [2246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_array_repeat1,
  [2259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_array_repeat1,
  [2272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(313), 1,
      anon_sym_EQ,
    ACTIONS(315), 1,
      anon_sym_SEMI,
  [2285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      sym_integer,
      sym_string,
  [2293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
  [2303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
  [2313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_body,
  [2323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_EQ,
    ACTIONS(329), 1,
      anon_sym_SEMI,
  [2333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_parameter,
  [2343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [2351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym_mutable,
  [2361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_SEMI,
  [2379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [2387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [2395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [2403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_identifier,
  [2410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_identifier,
  [2417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
  [2424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
  [2431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_integer,
  [2438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
  [2445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COLON,
  [2452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
  [2459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
  [2466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_integer,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 170,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 238,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 340,
  [SMALL_STATE(15)] = 374,
  [SMALL_STATE(16)] = 408,
  [SMALL_STATE(17)] = 442,
  [SMALL_STATE(18)] = 476,
  [SMALL_STATE(19)] = 510,
  [SMALL_STATE(20)] = 544,
  [SMALL_STATE(21)] = 592,
  [SMALL_STATE(22)] = 632,
  [SMALL_STATE(23)] = 676,
  [SMALL_STATE(24)] = 710,
  [SMALL_STATE(25)] = 744,
  [SMALL_STATE(26)] = 778,
  [SMALL_STATE(27)] = 824,
  [SMALL_STATE(28)] = 858,
  [SMALL_STATE(29)] = 916,
  [SMALL_STATE(30)] = 950,
  [SMALL_STATE(31)] = 988,
  [SMALL_STATE(32)] = 1040,
  [SMALL_STATE(33)] = 1094,
  [SMALL_STATE(34)] = 1136,
  [SMALL_STATE(35)] = 1170,
  [SMALL_STATE(36)] = 1204,
  [SMALL_STATE(37)] = 1235,
  [SMALL_STATE(38)] = 1266,
  [SMALL_STATE(39)] = 1297,
  [SMALL_STATE(40)] = 1328,
  [SMALL_STATE(41)] = 1358,
  [SMALL_STATE(42)] = 1405,
  [SMALL_STATE(43)] = 1452,
  [SMALL_STATE(44)] = 1499,
  [SMALL_STATE(45)] = 1546,
  [SMALL_STATE(46)] = 1593,
  [SMALL_STATE(47)] = 1616,
  [SMALL_STATE(48)] = 1649,
  [SMALL_STATE(49)] = 1682,
  [SMALL_STATE(50)] = 1715,
  [SMALL_STATE(51)] = 1741,
  [SMALL_STATE(52)] = 1767,
  [SMALL_STATE(53)] = 1793,
  [SMALL_STATE(54)] = 1819,
  [SMALL_STATE(55)] = 1845,
  [SMALL_STATE(56)] = 1871,
  [SMALL_STATE(57)] = 1897,
  [SMALL_STATE(58)] = 1923,
  [SMALL_STATE(59)] = 1949,
  [SMALL_STATE(60)] = 1975,
  [SMALL_STATE(61)] = 2001,
  [SMALL_STATE(62)] = 2027,
  [SMALL_STATE(63)] = 2053,
  [SMALL_STATE(64)] = 2079,
  [SMALL_STATE(65)] = 2096,
  [SMALL_STATE(66)] = 2108,
  [SMALL_STATE(67)] = 2120,
  [SMALL_STATE(68)] = 2132,
  [SMALL_STATE(69)] = 2148,
  [SMALL_STATE(70)] = 2161,
  [SMALL_STATE(71)] = 2172,
  [SMALL_STATE(72)] = 2185,
  [SMALL_STATE(73)] = 2198,
  [SMALL_STATE(74)] = 2209,
  [SMALL_STATE(75)] = 2222,
  [SMALL_STATE(76)] = 2235,
  [SMALL_STATE(77)] = 2246,
  [SMALL_STATE(78)] = 2259,
  [SMALL_STATE(79)] = 2272,
  [SMALL_STATE(80)] = 2285,
  [SMALL_STATE(81)] = 2293,
  [SMALL_STATE(82)] = 2303,
  [SMALL_STATE(83)] = 2313,
  [SMALL_STATE(84)] = 2323,
  [SMALL_STATE(85)] = 2333,
  [SMALL_STATE(86)] = 2343,
  [SMALL_STATE(87)] = 2351,
  [SMALL_STATE(88)] = 2361,
  [SMALL_STATE(89)] = 2369,
  [SMALL_STATE(90)] = 2379,
  [SMALL_STATE(91)] = 2387,
  [SMALL_STATE(92)] = 2395,
  [SMALL_STATE(93)] = 2403,
  [SMALL_STATE(94)] = 2410,
  [SMALL_STATE(95)] = 2417,
  [SMALL_STATE(96)] = 2424,
  [SMALL_STATE(97)] = 2431,
  [SMALL_STATE(98)] = 2438,
  [SMALL_STATE(99)] = 2445,
  [SMALL_STATE(100)] = 2452,
  [SMALL_STATE(101)] = 2459,
  [SMALL_STATE(102)] = 2466,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_type, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_type, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(50),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(28),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(28),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(76),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(99),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(80),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 5),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [353] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_noir(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
