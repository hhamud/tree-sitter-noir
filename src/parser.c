#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
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
  sym_comment = 28,
  sym_mutable = 29,
  sym_viewer = 30,
  anon_sym_u8 = 31,
  anon_sym_i8 = 32,
  anon_sym_u16 = 33,
  anon_sym_i16 = 34,
  anon_sym_u32 = 35,
  anon_sym_i32 = 36,
  anon_sym_u64 = 37,
  anon_sym_i64 = 38,
  anon_sym_u128 = 39,
  anon_sym_i128 = 40,
  anon_sym_isize = 41,
  anon_sym_usize = 42,
  anon_sym_f32 = 43,
  anon_sym_f64 = 44,
  sym_source_file = 45,
  sym__definition = 46,
  sym_let_declaration = 47,
  sym_binary_expression = 48,
  sym_unary_expression = 49,
  sym__expression_statement = 50,
  sym__expression = 51,
  sym__type = 52,
  aux_sym_source_file_repeat1 = 53,
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
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_let_declaration] = "let_declaration",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym__type] = "_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_let_declaration] = sym_let_declaration,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym__expression_statement] = sym__expression_statement,
  [sym__expression] = sym__expression,
  [sym__type] = sym__type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '&') ADVANCE(52);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == '8') ADVANCE(109);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(107);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(131);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(26);
      if (lookahead == '6') ADVANCE(113);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(117);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(115);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(27);
      if (lookahead == '6') ADVANCE(111);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(133);
      END_STATE();
    case 24:
      if (lookahead == '4') ADVANCE(121);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 26:
      if (lookahead == '8') ADVANCE(125);
      END_STATE();
    case 27:
      if (lookahead == '8') ADVANCE(123);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'z') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'z') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(103);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 39:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 40:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(39)
      END_STATE();
    case 41:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 42:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(50);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == '3') ADVANCE(77);
      if (lookahead == '6') ADVANCE(82);
      if (lookahead == '8') ADVANCE(110);
      if (lookahead == 's') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '3') ADVANCE(78);
      if (lookahead == '6') ADVANCE(83);
      if (lookahead == '8') ADVANCE(108);
      if (lookahead == 's') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead == '6') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(85);
      if (lookahead == '6') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(75);
      if (lookahead == '6') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(36);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_viewer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
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
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 43},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 7},
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
    [sym_identifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym__definition] = STATE(17),
    [sym_let_declaration] = STATE(17),
    [sym_binary_expression] = STATE(5),
    [sym_unary_expression] = STATE(5),
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [sym_comment] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(17), 14,
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
  [27] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_AMP_AMP,
    ACTIONS(25), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [74] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_AMP_AMP,
    ACTIONS(25), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [121] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_AMP_AMP,
    ACTIONS(25), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [168] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_AMP_AMP,
    ACTIONS(25), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(51), 14,
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
  [242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(19), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 12,
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
  [273] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_AMP_AMP,
    ACTIONS(25), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(19), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 10,
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
  [353] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(17), 7,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [394] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(19), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 8,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [431] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(19), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 7,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [470] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(19), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 8,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [505] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_AMP_AMP,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(17), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(33), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [550] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(43), 1,
      anon_sym_SLASH,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(17), 3,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(33), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [593] = 8,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(11), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
    STATE(18), 4,
      sym__definition,
      sym_let_declaration,
      sym__expression_statement,
      aux_sym_source_file_repeat1,
  [627] = 8,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_let,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(66), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(69), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
    STATE(18), 4,
      sym__definition,
      sym_let_declaration,
      sym__expression_statement,
      aux_sym_source_file_repeat1,
  [661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(46), 1,
      sym__type,
    ACTIONS(78), 14,
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
  [684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 1,
      sym__type,
    ACTIONS(80), 14,
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
  [707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(82), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(15), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(86), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(14), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [751] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(90), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(6), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [773] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(94), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(9), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(98), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(2), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [817] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(102), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(7), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [839] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(106), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(8), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [861] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(110), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(10), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [883] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(114), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(11), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(118), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(12), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(122), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(13), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [949] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(126), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(3), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(130), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(16), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [993] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(134), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(4), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
  [1015] = 2,
    ACTIONS(140), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      sym_comment,
  [1030] = 2,
    ACTIONS(144), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      sym_comment,
  [1045] = 2,
    ACTIONS(148), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(146), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      sym_comment,
  [1060] = 2,
    ACTIONS(152), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      sym_comment,
  [1075] = 2,
    ACTIONS(156), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(154), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      sym_comment,
  [1090] = 2,
    ACTIONS(160), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      sym_comment,
  [1105] = 2,
    ACTIONS(164), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      sym_comment,
  [1120] = 2,
    ACTIONS(168), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      sym_comment,
  [1135] = 2,
    ACTIONS(172), 2,
      anon_sym_let,
      sym_identifier,
    ACTIONS(170), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      sym_comment,
  [1150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_COLON,
    ACTIONS(176), 1,
      anon_sym_EQ,
    ACTIONS(178), 1,
      anon_sym_SEMI,
  [1163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(184), 1,
      anon_sym_SEMI,
  [1176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      anon_sym_SEMI,
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_EQ,
    ACTIONS(192), 1,
      anon_sym_SEMI,
  [1196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(196), 1,
      sym_mutable,
  [1206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [1213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 215,
  [SMALL_STATE(8)] = 242,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 320,
  [SMALL_STATE(11)] = 353,
  [SMALL_STATE(12)] = 394,
  [SMALL_STATE(13)] = 431,
  [SMALL_STATE(14)] = 470,
  [SMALL_STATE(15)] = 505,
  [SMALL_STATE(16)] = 550,
  [SMALL_STATE(17)] = 593,
  [SMALL_STATE(18)] = 627,
  [SMALL_STATE(19)] = 661,
  [SMALL_STATE(20)] = 684,
  [SMALL_STATE(21)] = 707,
  [SMALL_STATE(22)] = 729,
  [SMALL_STATE(23)] = 751,
  [SMALL_STATE(24)] = 773,
  [SMALL_STATE(25)] = 795,
  [SMALL_STATE(26)] = 817,
  [SMALL_STATE(27)] = 839,
  [SMALL_STATE(28)] = 861,
  [SMALL_STATE(29)] = 883,
  [SMALL_STATE(30)] = 905,
  [SMALL_STATE(31)] = 927,
  [SMALL_STATE(32)] = 949,
  [SMALL_STATE(33)] = 971,
  [SMALL_STATE(34)] = 993,
  [SMALL_STATE(35)] = 1015,
  [SMALL_STATE(36)] = 1030,
  [SMALL_STATE(37)] = 1045,
  [SMALL_STATE(38)] = 1060,
  [SMALL_STATE(39)] = 1075,
  [SMALL_STATE(40)] = 1090,
  [SMALL_STATE(41)] = 1105,
  [SMALL_STATE(42)] = 1120,
  [SMALL_STATE(43)] = 1135,
  [SMALL_STATE(44)] = 1150,
  [SMALL_STATE(45)] = 1163,
  [SMALL_STATE(46)] = 1176,
  [SMALL_STATE(47)] = 1186,
  [SMALL_STATE(48)] = 1196,
  [SMALL_STATE(49)] = 1206,
  [SMALL_STATE(50)] = 1213,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
