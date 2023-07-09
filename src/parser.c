#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
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
  anon_sym_as = 26,
  sym_string = 27,
  sym_character = 28,
  anon_sym_LBRACK = 29,
  anon_sym_COMMA = 30,
  anon_sym_RBRACK = 31,
  sym_comment = 32,
  sym_mutable = 33,
  sym_viewer = 34,
  anon_sym_u8 = 35,
  anon_sym_i8 = 36,
  anon_sym_u16 = 37,
  anon_sym_i16 = 38,
  anon_sym_u32 = 39,
  anon_sym_i32 = 40,
  anon_sym_u64 = 41,
  anon_sym_i64 = 42,
  anon_sym_u128 = 43,
  anon_sym_i128 = 44,
  anon_sym_isize = 45,
  anon_sym_usize = 46,
  anon_sym_f32 = 47,
  anon_sym_f64 = 48,
  anon_sym_Field = 49,
  anon_sym_bool = 50,
  anon_sym_String = 51,
  anon_sym_fn = 52,
  anon_sym_LPAREN = 53,
  anon_sym_RPAREN = 54,
  anon_sym_LBRACE = 55,
  anon_sym_RBRACE = 56,
  anon_sym_DASH_GT = 57,
  anon_sym_mod = 58,
  anon_sym_COLON_COLON = 59,
  anon_sym_use = 60,
  sym_source_file = 61,
  sym__definition = 62,
  sym_let_declaration = 63,
  sym_binary_expression = 64,
  sym_unary_expression = 65,
  sym__expression_statement = 66,
  sym__expression = 67,
  sym_as_identifier = 68,
  sym_array = 69,
  sym_single_type = 70,
  sym_array_type = 71,
  sym__type = 72,
  sym_function_definition = 73,
  sym_parameter = 74,
  sym_body = 75,
  sym_return_type = 76,
  sym_module = 77,
  sym_import_identifier = 78,
  sym_import = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_array_repeat1 = 81,
  aux_sym_parameter_repeat1 = 82,
  aux_sym_body_repeat1 = 83,
  aux_sym_import_repeat1 = 84,
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
  [anon_sym_as] = "as",
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
  [anon_sym_mod] = "mod",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_use] = "use",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_let_declaration] = "let_declaration",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym_as_identifier] = "as_identifier",
  [sym_array] = "array",
  [sym_single_type] = "single_type",
  [sym_array_type] = "array_type",
  [sym__type] = "_type",
  [sym_function_definition] = "function_definition",
  [sym_parameter] = "parameter",
  [sym_body] = "body",
  [sym_return_type] = "return_type",
  [sym_module] = "module",
  [sym_import_identifier] = "import_identifier",
  [sym_import] = "import",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_import_repeat1] = "import_repeat1",
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
  [anon_sym_as] = anon_sym_as,
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
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_use] = anon_sym_use,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_let_declaration] = sym_let_declaration,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym__expression_statement] = sym__expression_statement,
  [sym__expression] = sym__expression,
  [sym_as_identifier] = sym_as_identifier,
  [sym_array] = sym_array,
  [sym_single_type] = sym_single_type,
  [sym_array_type] = sym_array_type,
  [sym__type] = sym__type,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter] = sym_parameter,
  [sym_body] = sym_body,
  [sym_return_type] = sym_return_type,
  [sym_module] = sym_module,
  [sym_import_identifier] = sym_import_identifier,
  [sym_import] = sym_import,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
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
  [anon_sym_as] = {
    .visible = true,
    .named = false,
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
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
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
  [sym_as_identifier] = {
    .visible = true,
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
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_import_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
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
  [aux_sym_import_repeat1] = {
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
  [45] = 43,
  [46] = 46,
  [47] = 44,
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
  [63] = 6,
  [64] = 8,
  [65] = 7,
  [66] = 5,
  [67] = 16,
  [68] = 22,
  [69] = 28,
  [70] = 9,
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
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 20,
  [91] = 12,
  [92] = 14,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 95,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 103,
  [113] = 71,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 115,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 137,
  [145] = 136,
  [146] = 128,
  [147] = 129,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(197);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(139);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') SKIP(70)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(100);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(197);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(155);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 28:
      if (lookahead == '1') ADVANCE(31);
      if (lookahead == '3') ADVANCE(32);
      if (lookahead == '6') ADVANCE(37);
      if (lookahead == '8') ADVANCE(163);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(33);
      if (lookahead == '6') ADVANCE(38);
      if (lookahead == '8') ADVANCE(161);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(185);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == '6') ADVANCE(167);
      END_STATE();
    case 32:
      if (lookahead == '2') ADVANCE(171);
      END_STATE();
    case 33:
      if (lookahead == '2') ADVANCE(169);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(40);
      if (lookahead == '6') ADVANCE(165);
      END_STATE();
    case 35:
      if (lookahead == '3') ADVANCE(30);
      if (lookahead == '6') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '4') ADVANCE(187);
      END_STATE();
    case 37:
      if (lookahead == '4') ADVANCE(175);
      END_STATE();
    case 38:
      if (lookahead == '4') ADVANCE(173);
      END_STATE();
    case 39:
      if (lookahead == '8') ADVANCE(179);
      END_STATE();
    case 40:
      if (lookahead == '8') ADVANCE(177);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(203);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(200);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 64:
      if (lookahead == 'z') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'z') ADVANCE(50);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(155);
      if (lookahead == '\r') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(156);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 69:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 70:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(69)
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(71)
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(139);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') SKIP(72)
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(203);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(82);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(200);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(155);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(109);
      if (lookahead == '3') ADVANCE(110);
      if (lookahead == '6') ADVANCE(115);
      if (lookahead == '8') ADVANCE(164);
      if (lookahead == 's') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '3') ADVANCE(111);
      if (lookahead == '6') ADVANCE(116);
      if (lookahead == '8') ADVANCE(162);
      if (lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == '6') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == '6') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(108);
      if (lookahead == '6') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(155);
      if (lookahead == '\r') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(66);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_viewer);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_viewer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_Field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 73},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 73},
  [8] = {.lex_state = 73},
  [9] = {.lex_state = 73},
  [10] = {.lex_state = 73},
  [11] = {.lex_state = 73},
  [12] = {.lex_state = 73},
  [13] = {.lex_state = 73},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 73},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 73},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 73},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 73},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 73},
  [56] = {.lex_state = 73},
  [57] = {.lex_state = 73},
  [58] = {.lex_state = 73},
  [59] = {.lex_state = 73},
  [60] = {.lex_state = 18},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 17},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 22},
  [87] = {.lex_state = 22},
  [88] = {.lex_state = 22},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 22},
  [93] = {.lex_state = 22},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 22},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 22},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 26},
  [109] = {.lex_state = 22},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 22},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 18},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 18},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 27},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 22},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 73},
  [131] = {.lex_state = 16},
  [132] = {.lex_state = 22},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 18},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 22},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 22},
  [146] = {.lex_state = 22},
  [147] = {.lex_state = 0},
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
    [anon_sym_as] = ACTIONS(1),
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
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(134),
    [sym__definition] = STATE(2),
    [sym_let_declaration] = STATE(2),
    [sym_binary_expression] = STATE(59),
    [sym_unary_expression] = STATE(59),
    [sym__expression_statement] = STATE(2),
    [sym__expression] = STATE(59),
    [sym_array] = STATE(59),
    [sym_single_type] = STATE(2),
    [sym_array_type] = STATE(2),
    [sym__type] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_module] = STATE(2),
    [sym_import] = STATE(2),
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
    [sym_viewer] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(21),
    [anon_sym_i8] = ACTIONS(21),
    [anon_sym_u16] = ACTIONS(21),
    [anon_sym_i16] = ACTIONS(21),
    [anon_sym_u32] = ACTIONS(21),
    [anon_sym_i32] = ACTIONS(21),
    [anon_sym_u64] = ACTIONS(21),
    [anon_sym_i64] = ACTIONS(21),
    [anon_sym_u128] = ACTIONS(21),
    [anon_sym_i128] = ACTIONS(21),
    [anon_sym_isize] = ACTIONS(21),
    [anon_sym_usize] = ACTIONS(21),
    [anon_sym_f32] = ACTIONS(21),
    [anon_sym_f64] = ACTIONS(21),
    [anon_sym_Field] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(21),
    [anon_sym_String] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(27),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_let_declaration] = STATE(3),
    [sym_binary_expression] = STATE(59),
    [sym_unary_expression] = STATE(59),
    [sym__expression_statement] = STATE(3),
    [sym__expression] = STATE(59),
    [sym_array] = STATE(59),
    [sym_single_type] = STATE(3),
    [sym_array_type] = STATE(3),
    [sym__type] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module] = STATE(3),
    [sym_import] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_comment] = ACTIONS(31),
    [sym_viewer] = ACTIONS(19),
    [anon_sym_u8] = ACTIONS(21),
    [anon_sym_i8] = ACTIONS(21),
    [anon_sym_u16] = ACTIONS(21),
    [anon_sym_i16] = ACTIONS(21),
    [anon_sym_u32] = ACTIONS(21),
    [anon_sym_i32] = ACTIONS(21),
    [anon_sym_u64] = ACTIONS(21),
    [anon_sym_i64] = ACTIONS(21),
    [anon_sym_u128] = ACTIONS(21),
    [anon_sym_i128] = ACTIONS(21),
    [anon_sym_isize] = ACTIONS(21),
    [anon_sym_usize] = ACTIONS(21),
    [anon_sym_f32] = ACTIONS(21),
    [anon_sym_f64] = ACTIONS(21),
    [anon_sym_Field] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(21),
    [anon_sym_String] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_use] = ACTIONS(27),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_let_declaration] = STATE(3),
    [sym_binary_expression] = STATE(59),
    [sym_unary_expression] = STATE(59),
    [sym__expression_statement] = STATE(3),
    [sym__expression] = STATE(59),
    [sym_array] = STATE(59),
    [sym_single_type] = STATE(3),
    [sym_array_type] = STATE(3),
    [sym__type] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module] = STATE(3),
    [sym_import] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_let] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(38),
    [anon_sym_STAR] = ACTIONS(38),
    [anon_sym_BANG] = ACTIONS(38),
    [sym_integer] = ACTIONS(41),
    [sym_identifier] = ACTIONS(44),
    [sym_string] = ACTIONS(41),
    [sym_character] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_comment] = ACTIONS(50),
    [sym_viewer] = ACTIONS(53),
    [anon_sym_u8] = ACTIONS(56),
    [anon_sym_i8] = ACTIONS(56),
    [anon_sym_u16] = ACTIONS(56),
    [anon_sym_i16] = ACTIONS(56),
    [anon_sym_u32] = ACTIONS(56),
    [anon_sym_i32] = ACTIONS(56),
    [anon_sym_u64] = ACTIONS(56),
    [anon_sym_i64] = ACTIONS(56),
    [anon_sym_u128] = ACTIONS(56),
    [anon_sym_i128] = ACTIONS(56),
    [anon_sym_isize] = ACTIONS(56),
    [anon_sym_usize] = ACTIONS(56),
    [anon_sym_f32] = ACTIONS(56),
    [anon_sym_f64] = ACTIONS(56),
    [anon_sym_Field] = ACTIONS(56),
    [anon_sym_bool] = ACTIONS(56),
    [anon_sym_String] = ACTIONS(56),
    [anon_sym_fn] = ACTIONS(59),
    [anon_sym_mod] = ACTIONS(62),
    [anon_sym_use] = ACTIONS(65),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_as,
    ACTIONS(74), 1,
      anon_sym_COLON_COLON,
    ACTIONS(70), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(68), 21,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [44] = 3,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    ACTIONS(76), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(78), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [84] = 3,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(82), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(84), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [124] = 2,
    ACTIONS(88), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(90), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [162] = 2,
    ACTIONS(92), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(94), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [200] = 2,
    ACTIONS(76), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(78), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [237] = 2,
    ACTIONS(96), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(98), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [274] = 2,
    ACTIONS(100), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(102), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [311] = 2,
    ACTIONS(104), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(106), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [348] = 2,
    ACTIONS(108), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(110), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [385] = 2,
    ACTIONS(112), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(114), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [422] = 2,
    ACTIONS(116), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(118), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [459] = 2,
    ACTIONS(82), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(84), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [496] = 2,
    ACTIONS(120), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(122), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [533] = 2,
    ACTIONS(124), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(126), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [570] = 2,
    ACTIONS(128), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(130), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [607] = 2,
    ACTIONS(132), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(134), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [644] = 2,
    ACTIONS(136), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(138), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [681] = 2,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(142), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [718] = 2,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(146), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [755] = 2,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(150), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [792] = 2,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(154), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [829] = 2,
    ACTIONS(156), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(158), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [866] = 2,
    ACTIONS(160), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(162), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [903] = 2,
    ACTIONS(164), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(166), 23,
      anon_sym_let,
      sym_identifier,
      sym_viewer,
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
      anon_sym_mod,
      anon_sym_use,
  [940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(168), 21,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(174), 8,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(172), 17,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1022] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(174), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(172), 14,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(172), 21,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1112] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      anon_sym_AMP_AMP,
    ACTIONS(194), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(202), 7,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(204), 21,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(174), 8,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(172), 19,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1254] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(174), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(196), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(172), 10,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(208), 21,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1348] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(192), 1,
      anon_sym_AMP_AMP,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(174), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(196), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(172), 9,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1406] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(174), 8,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(172), 15,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1452] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(174), 7,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(172), 14,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1502] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(174), 7,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(172), 15,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(212), 21,
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
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1588] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_STAR,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      sym_viewer,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 1,
      anon_sym_mod,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(218), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(33), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(44), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [1639] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_STAR,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      sym_viewer,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      anon_sym_mod,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(218), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(33), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(46), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [1690] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_STAR,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      sym_viewer,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      anon_sym_mod,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(218), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(33), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(47), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [1741] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_STAR,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      sym_viewer,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 1,
      anon_sym_mod,
    ACTIONS(242), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(248), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(33), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(46), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [1792] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_STAR,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(226), 1,
      sym_viewer,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      anon_sym_mod,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(218), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(33), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(46), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [1843] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      sym_viewer,
    STATE(99), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(277), 17,
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
  [1877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      sym_viewer,
    STATE(143), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(277), 17,
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
  [1911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    STATE(97), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(277), 17,
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
  [1942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    STATE(116), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(277), 17,
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
  [1973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    STATE(139), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(277), 17,
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
  [2004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    STATE(119), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(277), 17,
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
  [2035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(281), 2,
      sym_integer,
      sym_string,
    ACTIONS(285), 17,
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
  [2065] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(192), 1,
      anon_sym_AMP_AMP,
    ACTIONS(194), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2112] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(192), 1,
      anon_sym_AMP_AMP,
    ACTIONS(194), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2159] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(192), 1,
      anon_sym_AMP_AMP,
    ACTIONS(194), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2206] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(192), 1,
      anon_sym_AMP_AMP,
    ACTIONS(194), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2253] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SLASH,
    ACTIONS(182), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    ACTIONS(186), 1,
      anon_sym_CARET,
    ACTIONS(192), 1,
      anon_sym_AMP_AMP,
    ACTIONS(194), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(188), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 17,
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
  [2323] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(200), 2,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(202), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(299), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(37), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(303), 11,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(84), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(82), 10,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(92), 11,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(88), 11,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(78), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(76), 10,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(82), 10,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(140), 10,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(164), 10,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(76), 10,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(311), 10,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2577] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(315), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(35), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(319), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(39), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2629] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(323), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(58), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2655] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(299), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(37), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2681] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(327), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(55), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2707] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(331), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(57), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2733] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(335), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(36), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2759] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(339), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(56), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2785] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(343), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(32), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2811] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(349), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(347), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(30), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2837] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(351), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(38), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2863] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(355), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(31), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2889] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(359), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(41), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACK,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(363), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(40), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2941] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(367), 1,
      anon_sym_STAR,
    ACTIONS(369), 1,
      sym_identifier,
    STATE(93), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(133), 2,
      sym_as_identifier,
      sym_body,
  [2962] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(371), 1,
      anon_sym_STAR,
    ACTIONS(373), 1,
      sym_identifier,
    STATE(89), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(141), 2,
      sym_as_identifier,
      sym_body,
  [2983] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      anon_sym_STAR,
    ACTIONS(377), 1,
      sym_identifier,
    STATE(86), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(135), 2,
      sym_as_identifier,
      sym_body,
  [3004] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      anon_sym_STAR,
    ACTIONS(377), 1,
      sym_identifier,
    STATE(93), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(135), 2,
      sym_as_identifier,
      sym_body,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [3037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [3049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [3061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym_identifier,
    ACTIONS(379), 2,
      anon_sym_STAR,
      anon_sym_LBRACE,
    STATE(93), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
  [3076] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      anon_sym_DASH_GT,
    STATE(18), 1,
      sym_body,
    STATE(127), 1,
      sym_return_type,
  [3092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_body,
  [3105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_array_repeat1,
  [3118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(392), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [3129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COLON,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(400), 1,
      anon_sym_SEMI,
  [3142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(402), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [3153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_body,
  [3166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    ACTIONS(408), 1,
      anon_sym_as,
    ACTIONS(410), 1,
      anon_sym_COLON_COLON,
  [3179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_parameter_repeat1,
  [3192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_body,
  [3205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_array_repeat1,
  [3218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_as,
    ACTIONS(410), 1,
      anon_sym_COLON_COLON,
    ACTIONS(420), 1,
      anon_sym_SEMI,
  [3231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(281), 2,
      sym_integer,
      sym_string,
  [3242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_COLON,
    ACTIONS(424), 1,
      anon_sym_EQ,
    ACTIONS(426), 1,
      anon_sym_SEMI,
  [3255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_as,
    ACTIONS(410), 1,
      anon_sym_COLON_COLON,
    ACTIONS(428), 1,
      anon_sym_SEMI,
  [3268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_identifier,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_parameter_repeat1,
  [3281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_array_repeat1,
  [3294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_parameter_repeat1,
  [3307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_body,
  [3320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_STAR,
      sym_identifier,
      anon_sym_LBRACE,
  [3329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [3337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_SEMI,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
  [3347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_EQ,
    ACTIONS(452), 1,
      anon_sym_SEMI,
  [3357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_mod,
    ACTIONS(456), 1,
      anon_sym_use,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_EQ,
    ACTIONS(460), 1,
      anon_sym_SEMI,
  [3385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [3393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_parameter,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(468), 1,
      sym_mutable,
  [3413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      sym_integer,
      sym_string,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [3429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_SEMI,
    ACTIONS(474), 1,
      anon_sym_RBRACK,
  [3439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [3447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_body,
  [3457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_identifier,
  [3464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_integer,
  [3471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_COLON_COLON,
  [3478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COLON,
  [3485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_identifier,
  [3492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SEMI,
  [3499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
  [3506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_SEMI,
  [3513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_identifier,
  [3520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
  [3527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_identifier,
  [3534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
  [3541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_mod,
  [3548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_SEMI,
  [3555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
  [3562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
  [3569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
  [3576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_identifier,
  [3583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_identifier,
  [3590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_integer,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 124,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 200,
  [SMALL_STATE(10)] = 237,
  [SMALL_STATE(11)] = 274,
  [SMALL_STATE(12)] = 311,
  [SMALL_STATE(13)] = 348,
  [SMALL_STATE(14)] = 385,
  [SMALL_STATE(15)] = 422,
  [SMALL_STATE(16)] = 459,
  [SMALL_STATE(17)] = 496,
  [SMALL_STATE(18)] = 533,
  [SMALL_STATE(19)] = 570,
  [SMALL_STATE(20)] = 607,
  [SMALL_STATE(21)] = 644,
  [SMALL_STATE(22)] = 681,
  [SMALL_STATE(23)] = 718,
  [SMALL_STATE(24)] = 755,
  [SMALL_STATE(25)] = 792,
  [SMALL_STATE(26)] = 829,
  [SMALL_STATE(27)] = 866,
  [SMALL_STATE(28)] = 903,
  [SMALL_STATE(29)] = 940,
  [SMALL_STATE(30)] = 978,
  [SMALL_STATE(31)] = 1022,
  [SMALL_STATE(32)] = 1074,
  [SMALL_STATE(33)] = 1112,
  [SMALL_STATE(34)] = 1174,
  [SMALL_STATE(35)] = 1212,
  [SMALL_STATE(36)] = 1254,
  [SMALL_STATE(37)] = 1310,
  [SMALL_STATE(38)] = 1348,
  [SMALL_STATE(39)] = 1406,
  [SMALL_STATE(40)] = 1452,
  [SMALL_STATE(41)] = 1502,
  [SMALL_STATE(42)] = 1550,
  [SMALL_STATE(43)] = 1588,
  [SMALL_STATE(44)] = 1639,
  [SMALL_STATE(45)] = 1690,
  [SMALL_STATE(46)] = 1741,
  [SMALL_STATE(47)] = 1792,
  [SMALL_STATE(48)] = 1843,
  [SMALL_STATE(49)] = 1877,
  [SMALL_STATE(50)] = 1911,
  [SMALL_STATE(51)] = 1942,
  [SMALL_STATE(52)] = 1973,
  [SMALL_STATE(53)] = 2004,
  [SMALL_STATE(54)] = 2035,
  [SMALL_STATE(55)] = 2065,
  [SMALL_STATE(56)] = 2112,
  [SMALL_STATE(57)] = 2159,
  [SMALL_STATE(58)] = 2206,
  [SMALL_STATE(59)] = 2253,
  [SMALL_STATE(60)] = 2300,
  [SMALL_STATE(61)] = 2323,
  [SMALL_STATE(62)] = 2358,
  [SMALL_STATE(63)] = 2380,
  [SMALL_STATE(64)] = 2404,
  [SMALL_STATE(65)] = 2426,
  [SMALL_STATE(66)] = 2448,
  [SMALL_STATE(67)] = 2472,
  [SMALL_STATE(68)] = 2493,
  [SMALL_STATE(69)] = 2514,
  [SMALL_STATE(70)] = 2535,
  [SMALL_STATE(71)] = 2556,
  [SMALL_STATE(72)] = 2577,
  [SMALL_STATE(73)] = 2603,
  [SMALL_STATE(74)] = 2629,
  [SMALL_STATE(75)] = 2655,
  [SMALL_STATE(76)] = 2681,
  [SMALL_STATE(77)] = 2707,
  [SMALL_STATE(78)] = 2733,
  [SMALL_STATE(79)] = 2759,
  [SMALL_STATE(80)] = 2785,
  [SMALL_STATE(81)] = 2811,
  [SMALL_STATE(82)] = 2837,
  [SMALL_STATE(83)] = 2863,
  [SMALL_STATE(84)] = 2889,
  [SMALL_STATE(85)] = 2915,
  [SMALL_STATE(86)] = 2941,
  [SMALL_STATE(87)] = 2962,
  [SMALL_STATE(88)] = 2983,
  [SMALL_STATE(89)] = 3004,
  [SMALL_STATE(90)] = 3025,
  [SMALL_STATE(91)] = 3037,
  [SMALL_STATE(92)] = 3049,
  [SMALL_STATE(93)] = 3061,
  [SMALL_STATE(94)] = 3076,
  [SMALL_STATE(95)] = 3092,
  [SMALL_STATE(96)] = 3105,
  [SMALL_STATE(97)] = 3118,
  [SMALL_STATE(98)] = 3129,
  [SMALL_STATE(99)] = 3142,
  [SMALL_STATE(100)] = 3153,
  [SMALL_STATE(101)] = 3166,
  [SMALL_STATE(102)] = 3179,
  [SMALL_STATE(103)] = 3192,
  [SMALL_STATE(104)] = 3205,
  [SMALL_STATE(105)] = 3218,
  [SMALL_STATE(106)] = 3231,
  [SMALL_STATE(107)] = 3242,
  [SMALL_STATE(108)] = 3255,
  [SMALL_STATE(109)] = 3268,
  [SMALL_STATE(110)] = 3281,
  [SMALL_STATE(111)] = 3294,
  [SMALL_STATE(112)] = 3307,
  [SMALL_STATE(113)] = 3320,
  [SMALL_STATE(114)] = 3329,
  [SMALL_STATE(115)] = 3337,
  [SMALL_STATE(116)] = 3347,
  [SMALL_STATE(117)] = 3357,
  [SMALL_STATE(118)] = 3367,
  [SMALL_STATE(119)] = 3375,
  [SMALL_STATE(120)] = 3385,
  [SMALL_STATE(121)] = 3393,
  [SMALL_STATE(122)] = 3403,
  [SMALL_STATE(123)] = 3413,
  [SMALL_STATE(124)] = 3421,
  [SMALL_STATE(125)] = 3429,
  [SMALL_STATE(126)] = 3439,
  [SMALL_STATE(127)] = 3447,
  [SMALL_STATE(128)] = 3457,
  [SMALL_STATE(129)] = 3464,
  [SMALL_STATE(130)] = 3471,
  [SMALL_STATE(131)] = 3478,
  [SMALL_STATE(132)] = 3485,
  [SMALL_STATE(133)] = 3492,
  [SMALL_STATE(134)] = 3499,
  [SMALL_STATE(135)] = 3506,
  [SMALL_STATE(136)] = 3513,
  [SMALL_STATE(137)] = 3520,
  [SMALL_STATE(138)] = 3527,
  [SMALL_STATE(139)] = 3534,
  [SMALL_STATE(140)] = 3541,
  [SMALL_STATE(141)] = 3548,
  [SMALL_STATE(142)] = 3555,
  [SMALL_STATE(143)] = 3562,
  [SMALL_STATE(144)] = 3569,
  [SMALL_STATE(145)] = 3576,
  [SMALL_STATE(146)] = 3583,
  [SMALL_STATE(147)] = 3590,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_type, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_type, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(75),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(61),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(33),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(4),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(106),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(46),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(140),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(43),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(145),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_identifier, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_identifier, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_identifier, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_identifier, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(130),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(131),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(123),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 5),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [486] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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
