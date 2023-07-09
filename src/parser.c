#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 154
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
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
  anon_sym_POUND = 61,
  sym__punctuation = 62,
  sym_source_file = 63,
  sym__definition = 64,
  sym_let_declaration = 65,
  sym_binary_expression = 66,
  sym_unary_expression = 67,
  sym__expression_statement = 68,
  sym__expression = 69,
  sym_as_identifier = 70,
  sym_array = 71,
  sym_single_type = 72,
  sym_array_type = 73,
  sym__type = 74,
  sym_function_definition = 75,
  sym_parameter = 76,
  sym_body = 77,
  sym_return_type = 78,
  sym_module = 79,
  sym_import_identifier = 80,
  sym_import = 81,
  sym_macro = 82,
  sym__literal = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_array_repeat1 = 85,
  aux_sym_parameter_repeat1 = 86,
  aux_sym_body_repeat1 = 87,
  aux_sym_import_repeat1 = 88,
  aux_sym_macro_repeat1 = 89,
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
  [anon_sym_POUND] = "#",
  [sym__punctuation] = "_punctuation",
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
  [sym_macro] = "macro",
  [sym__literal] = "_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_macro_repeat1] = "macro_repeat1",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [sym__punctuation] = sym__punctuation,
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
  [sym_macro] = sym_macro,
  [sym__literal] = sym__literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
  [aux_sym_macro_repeat1] = aux_sym_macro_repeat1,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__punctuation] = {
    .visible = false,
    .named = true,
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
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
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
  [aux_sym_macro_repeat1] = {
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
  [47] = 45,
  [48] = 46,
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
  [64] = 5,
  [65] = 65,
  [66] = 7,
  [67] = 4,
  [68] = 6,
  [69] = 69,
  [70] = 30,
  [71] = 9,
  [72] = 26,
  [73] = 15,
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
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 16,
  [96] = 17,
  [97] = 25,
  [98] = 98,
  [99] = 99,
  [100] = 100,
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
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 69,
  [116] = 116,
  [117] = 107,
  [118] = 102,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 121,
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
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 143,
  [151] = 134,
  [152] = 149,
  [153] = 144,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(197);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(207);
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
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(23)
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
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(22);
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
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(98);
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
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '=') ADVANCE(78);
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
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(61);
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
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(207);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(197);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(155);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(24);
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
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 68:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
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
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(196);
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
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(139);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') SKIP(72)
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '{') ADVANCE(198);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= '_') ||
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
      if (lookahead == '*') ADVANCE(26);
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
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(21);
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
    case 206:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__punctuation);
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
  [4] = {.lex_state = 73},
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
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 73},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 73},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 73},
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
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 73},
  [58] = {.lex_state = 73},
  [59] = {.lex_state = 73},
  [60] = {.lex_state = 73},
  [61] = {.lex_state = 73},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
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
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 73},
  [102] = {.lex_state = 73},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 23},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 73},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 73},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 73},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 23},
  [117] = {.lex_state = 73},
  [118] = {.lex_state = 73},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 27},
  [121] = {.lex_state = 73},
  [122] = {.lex_state = 18},
  [123] = {.lex_state = 73},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 18},
  [126] = {.lex_state = 73},
  [127] = {.lex_state = 18},
  [128] = {.lex_state = 73},
  [129] = {.lex_state = 23},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 73},
  [133] = {.lex_state = 73},
  [134] = {.lex_state = 23},
  [135] = {.lex_state = 73},
  [136] = {.lex_state = 73},
  [137] = {.lex_state = 23},
  [138] = {.lex_state = 73},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 73},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 73},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 18},
  [147] = {.lex_state = 73},
  [148] = {.lex_state = 23},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 23},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 0},
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
    [anon_sym_POUND] = ACTIONS(1),
    [sym__punctuation] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(145),
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
    [sym_macro] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [anon_sym_POUND] = ACTIONS(29),
  },
  [2] = {
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
    [sym_macro] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(36),
    [anon_sym_STAR] = ACTIONS(36),
    [anon_sym_BANG] = ACTIONS(36),
    [sym_integer] = ACTIONS(39),
    [sym_identifier] = ACTIONS(42),
    [sym_string] = ACTIONS(39),
    [sym_character] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(45),
    [sym_comment] = ACTIONS(48),
    [sym_viewer] = ACTIONS(51),
    [anon_sym_u8] = ACTIONS(54),
    [anon_sym_i8] = ACTIONS(54),
    [anon_sym_u16] = ACTIONS(54),
    [anon_sym_i16] = ACTIONS(54),
    [anon_sym_u32] = ACTIONS(54),
    [anon_sym_i32] = ACTIONS(54),
    [anon_sym_u64] = ACTIONS(54),
    [anon_sym_i64] = ACTIONS(54),
    [anon_sym_u128] = ACTIONS(54),
    [anon_sym_i128] = ACTIONS(54),
    [anon_sym_isize] = ACTIONS(54),
    [anon_sym_usize] = ACTIONS(54),
    [anon_sym_f32] = ACTIONS(54),
    [anon_sym_f64] = ACTIONS(54),
    [anon_sym_Field] = ACTIONS(54),
    [anon_sym_bool] = ACTIONS(54),
    [anon_sym_String] = ACTIONS(54),
    [anon_sym_fn] = ACTIONS(57),
    [anon_sym_mod] = ACTIONS(60),
    [anon_sym_use] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(66),
  },
  [3] = {
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
    [sym_macro] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_comment] = ACTIONS(71),
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
    [anon_sym_POUND] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(77), 1,
      anon_sym_SEMI,
    ACTIONS(73), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(75), 23,
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
  [41] = 2,
    ACTIONS(79), 11,
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
      anon_sym_POUND,
    ACTIONS(81), 23,
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
  [80] = 2,
    ACTIONS(83), 11,
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
      anon_sym_POUND,
    ACTIONS(85), 23,
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
  [119] = 3,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(87), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(89), 23,
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
  [160] = 2,
    ACTIONS(93), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(95), 23,
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
  [198] = 2,
    ACTIONS(73), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(75), 23,
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
  [236] = 2,
    ACTIONS(97), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(99), 23,
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
    ACTIONS(101), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(103), 23,
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
  [312] = 2,
    ACTIONS(105), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(107), 23,
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
  [350] = 2,
    ACTIONS(109), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(111), 23,
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
  [388] = 2,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(115), 23,
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
  [426] = 2,
    ACTIONS(117), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(119), 23,
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
  [464] = 2,
    ACTIONS(121), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(123), 23,
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
  [502] = 2,
    ACTIONS(125), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(127), 23,
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
  [540] = 2,
    ACTIONS(129), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(131), 23,
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
  [578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_as,
    ACTIONS(139), 1,
      anon_sym_COLON_COLON,
    ACTIONS(135), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(133), 21,
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
  [622] = 2,
    ACTIONS(141), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(143), 23,
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
  [660] = 2,
    ACTIONS(145), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(147), 23,
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
  [698] = 2,
    ACTIONS(149), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(151), 23,
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
  [736] = 2,
    ACTIONS(153), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(155), 23,
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
  [774] = 2,
    ACTIONS(157), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(159), 23,
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
  [812] = 2,
    ACTIONS(161), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(163), 23,
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
  [850] = 2,
    ACTIONS(87), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(89), 23,
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
  [888] = 2,
    ACTIONS(165), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(167), 23,
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
  [926] = 2,
    ACTIONS(169), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(171), 23,
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
  [964] = 2,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(175), 23,
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
  [1002] = 2,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(179), 23,
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
  [1040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(181), 21,
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
  [1078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(183), 8,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(181), 19,
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
  [1120] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(183), 8,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(181), 17,
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
  [1164] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_AMP,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(183), 7,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(181), 14,
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
  [1214] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_AMP,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_AMP_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(209), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(211), 7,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1276] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_AMP,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(183), 7,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(181), 15,
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
  [1324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(213), 21,
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
  [1362] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(183), 8,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(181), 15,
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
  [1408] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_AMP,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(183), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(181), 14,
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
  [1460] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_AMP,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(205), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(181), 10,
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
  [1516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(217), 21,
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
  [1554] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_AMP,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(199), 1,
      anon_sym_AMP_AMP,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(205), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(181), 9,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(221), 21,
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
  [1650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(225), 21,
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
  [1688] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      sym_viewer,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      anon_sym_mod,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(231), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(35), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(49), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [1739] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      sym_viewer,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_mod,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(231), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(35), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(45), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [1790] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      sym_viewer,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_mod,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(231), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(35), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(49), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [1841] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      sym_viewer,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_mod,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(231), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(35), 4,
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
  [1892] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_STAR,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(269), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      sym_viewer,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      anon_sym_mod,
    ACTIONS(257), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(263), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(35), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(49), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [1943] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 1,
      sym_viewer,
    STATE(110), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(290), 17,
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
  [1977] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      sym_viewer,
    STATE(147), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(290), 17,
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
  [2011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    STATE(119), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(290), 17,
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
  [2042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    STATE(133), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(290), 17,
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
  [2073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    STATE(105), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(290), 17,
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
  [2104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    STATE(124), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(290), 17,
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
  [2135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    ACTIONS(294), 2,
      sym_integer,
      sym_string,
    ACTIONS(298), 17,
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
  [2165] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_AMP,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(199), 1,
      anon_sym_AMP_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      anon_sym_SEMI,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2212] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_AMP,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(199), 1,
      anon_sym_AMP_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2259] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_AMP,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(199), 1,
      anon_sym_AMP_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2306] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_AMP,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(199), 1,
      anon_sym_AMP_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2353] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_AMP,
    ACTIONS(193), 1,
      anon_sym_CARET,
    ACTIONS(199), 1,
      anon_sym_AMP_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    ACTIONS(185), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2400] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(209), 2,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(211), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(310), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(44), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 17,
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
  [2458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(79), 11,
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
  [2480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(316), 11,
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
  [2502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(89), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(87), 10,
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
  [2526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(75), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(73), 10,
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
  [2550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(83), 11,
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
  [2572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(324), 10,
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
  [2593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(177), 10,
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
  [2614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(73), 10,
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
  [2635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(87), 10,
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
  [2656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(117), 10,
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
  [2677] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(328), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(36), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2703] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(332), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(61), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2729] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(336), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(31), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2755] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(340), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(34), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2781] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(344), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(33), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2807] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(348), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(38), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2833] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(352), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(42), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2859] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(356), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(32), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2885] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(360), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(39), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2911] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(364), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(58), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2937] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(368), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(40), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2963] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(372), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(60), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2989] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(310), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(44), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3015] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(9), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(376), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(57), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    ACTIONS(380), 2,
      sym_integer,
      sym_string,
    ACTIONS(382), 2,
      sym_identifier,
      sym__punctuation,
    STATE(94), 2,
      sym__literal,
      aux_sym_macro_repeat1,
  [3060] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(90), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(140), 2,
      sym_as_identifier,
      sym_body,
  [3081] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(390), 1,
      anon_sym_STAR,
    ACTIONS(392), 1,
      sym_identifier,
    STATE(98), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(135), 2,
      sym_as_identifier,
      sym_body,
  [3102] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(98), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(140), 2,
      sym_as_identifier,
      sym_body,
  [3123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    ACTIONS(394), 2,
      sym_integer,
      sym_string,
    ACTIONS(396), 2,
      sym_identifier,
      sym__punctuation,
    STATE(88), 2,
      sym__literal,
      aux_sym_macro_repeat1,
  [3142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(400), 1,
      anon_sym_STAR,
    ACTIONS(402), 1,
      sym_identifier,
    STATE(91), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(136), 2,
      sym_as_identifier,
      sym_body,
  [3163] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    ACTIONS(404), 2,
      sym_integer,
      sym_string,
    ACTIONS(407), 2,
      sym_identifier,
      sym__punctuation,
    STATE(94), 2,
      sym__literal,
      aux_sym_macro_repeat1,
  [3182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [3194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [3206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 6,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [3218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(412), 2,
      anon_sym_STAR,
      anon_sym_LBRACE,
    STATE(98), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
  [3233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    ACTIONS(419), 1,
      anon_sym_DASH_GT,
    STATE(8), 1,
      sym_body,
    STATE(123), 1,
      sym_return_type,
  [3249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_parameter_repeat1,
  [3262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_array_repeat1,
  [3275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    ACTIONS(430), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      sym_body,
  [3288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      anon_sym_as,
    ACTIONS(436), 1,
      anon_sym_COLON_COLON,
  [3301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_as,
    ACTIONS(436), 1,
      anon_sym_COLON_COLON,
    ACTIONS(438), 1,
      anon_sym_SEMI,
  [3314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(440), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [3325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_EQ,
    ACTIONS(448), 1,
      anon_sym_SEMI,
  [3338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_body,
  [3351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_parameter_repeat1,
  [3364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_as,
    ACTIONS(436), 1,
      anon_sym_COLON_COLON,
    ACTIONS(452), 1,
      anon_sym_SEMI,
  [3377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(454), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [3388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym_array_repeat1,
  [3401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    ACTIONS(294), 2,
      sym_integer,
      sym_string,
  [3412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_array_repeat1,
  [3425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_COLON,
    ACTIONS(466), 1,
      anon_sym_EQ,
    ACTIONS(468), 1,
      anon_sym_SEMI,
  [3438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 3,
      anon_sym_STAR,
      sym_identifier,
      anon_sym_LBRACE,
  [3447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_parameter_repeat1,
  [3460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_SEMI,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_body,
  [3473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(475), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_body,
  [3486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      anon_sym_SEMI,
  [3496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(483), 1,
      sym_mutable,
  [3506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_SEMI,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
  [3516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_mod,
    ACTIONS(491), 1,
      anon_sym_use,
  [3526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_body,
  [3536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_SEMI,
  [3546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [3554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [3570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
  [3580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [3588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [3596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 2,
      sym_integer,
      sym_string,
  [3604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_parameter,
  [3614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
  [3621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_identifier,
  [3628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_SEMI,
  [3635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SEMI,
  [3642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_identifier,
  [3649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_COLON,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_identifier,
  [3663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
  [3670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_COLON_COLON,
  [3677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LBRACK,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
  [3691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym_integer,
  [3698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
  [3705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_mod,
  [3712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
  [3719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym_identifier,
  [3726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_identifier,
  [3733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
  [3740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym_identifier,
  [3747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_identifier,
  [3754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_integer,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 160,
  [SMALL_STATE(9)] = 198,
  [SMALL_STATE(10)] = 236,
  [SMALL_STATE(11)] = 274,
  [SMALL_STATE(12)] = 312,
  [SMALL_STATE(13)] = 350,
  [SMALL_STATE(14)] = 388,
  [SMALL_STATE(15)] = 426,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 502,
  [SMALL_STATE(18)] = 540,
  [SMALL_STATE(19)] = 578,
  [SMALL_STATE(20)] = 622,
  [SMALL_STATE(21)] = 660,
  [SMALL_STATE(22)] = 698,
  [SMALL_STATE(23)] = 736,
  [SMALL_STATE(24)] = 774,
  [SMALL_STATE(25)] = 812,
  [SMALL_STATE(26)] = 850,
  [SMALL_STATE(27)] = 888,
  [SMALL_STATE(28)] = 926,
  [SMALL_STATE(29)] = 964,
  [SMALL_STATE(30)] = 1002,
  [SMALL_STATE(31)] = 1040,
  [SMALL_STATE(32)] = 1078,
  [SMALL_STATE(33)] = 1120,
  [SMALL_STATE(34)] = 1164,
  [SMALL_STATE(35)] = 1214,
  [SMALL_STATE(36)] = 1276,
  [SMALL_STATE(37)] = 1324,
  [SMALL_STATE(38)] = 1362,
  [SMALL_STATE(39)] = 1408,
  [SMALL_STATE(40)] = 1460,
  [SMALL_STATE(41)] = 1516,
  [SMALL_STATE(42)] = 1554,
  [SMALL_STATE(43)] = 1612,
  [SMALL_STATE(44)] = 1650,
  [SMALL_STATE(45)] = 1688,
  [SMALL_STATE(46)] = 1739,
  [SMALL_STATE(47)] = 1790,
  [SMALL_STATE(48)] = 1841,
  [SMALL_STATE(49)] = 1892,
  [SMALL_STATE(50)] = 1943,
  [SMALL_STATE(51)] = 1977,
  [SMALL_STATE(52)] = 2011,
  [SMALL_STATE(53)] = 2042,
  [SMALL_STATE(54)] = 2073,
  [SMALL_STATE(55)] = 2104,
  [SMALL_STATE(56)] = 2135,
  [SMALL_STATE(57)] = 2165,
  [SMALL_STATE(58)] = 2212,
  [SMALL_STATE(59)] = 2259,
  [SMALL_STATE(60)] = 2306,
  [SMALL_STATE(61)] = 2353,
  [SMALL_STATE(62)] = 2400,
  [SMALL_STATE(63)] = 2435,
  [SMALL_STATE(64)] = 2458,
  [SMALL_STATE(65)] = 2480,
  [SMALL_STATE(66)] = 2502,
  [SMALL_STATE(67)] = 2526,
  [SMALL_STATE(68)] = 2550,
  [SMALL_STATE(69)] = 2572,
  [SMALL_STATE(70)] = 2593,
  [SMALL_STATE(71)] = 2614,
  [SMALL_STATE(72)] = 2635,
  [SMALL_STATE(73)] = 2656,
  [SMALL_STATE(74)] = 2677,
  [SMALL_STATE(75)] = 2703,
  [SMALL_STATE(76)] = 2729,
  [SMALL_STATE(77)] = 2755,
  [SMALL_STATE(78)] = 2781,
  [SMALL_STATE(79)] = 2807,
  [SMALL_STATE(80)] = 2833,
  [SMALL_STATE(81)] = 2859,
  [SMALL_STATE(82)] = 2885,
  [SMALL_STATE(83)] = 2911,
  [SMALL_STATE(84)] = 2937,
  [SMALL_STATE(85)] = 2963,
  [SMALL_STATE(86)] = 2989,
  [SMALL_STATE(87)] = 3015,
  [SMALL_STATE(88)] = 3041,
  [SMALL_STATE(89)] = 3060,
  [SMALL_STATE(90)] = 3081,
  [SMALL_STATE(91)] = 3102,
  [SMALL_STATE(92)] = 3123,
  [SMALL_STATE(93)] = 3142,
  [SMALL_STATE(94)] = 3163,
  [SMALL_STATE(95)] = 3182,
  [SMALL_STATE(96)] = 3194,
  [SMALL_STATE(97)] = 3206,
  [SMALL_STATE(98)] = 3218,
  [SMALL_STATE(99)] = 3233,
  [SMALL_STATE(100)] = 3249,
  [SMALL_STATE(101)] = 3262,
  [SMALL_STATE(102)] = 3275,
  [SMALL_STATE(103)] = 3288,
  [SMALL_STATE(104)] = 3301,
  [SMALL_STATE(105)] = 3314,
  [SMALL_STATE(106)] = 3325,
  [SMALL_STATE(107)] = 3338,
  [SMALL_STATE(108)] = 3351,
  [SMALL_STATE(109)] = 3364,
  [SMALL_STATE(110)] = 3377,
  [SMALL_STATE(111)] = 3388,
  [SMALL_STATE(112)] = 3401,
  [SMALL_STATE(113)] = 3412,
  [SMALL_STATE(114)] = 3425,
  [SMALL_STATE(115)] = 3438,
  [SMALL_STATE(116)] = 3447,
  [SMALL_STATE(117)] = 3460,
  [SMALL_STATE(118)] = 3473,
  [SMALL_STATE(119)] = 3486,
  [SMALL_STATE(120)] = 3496,
  [SMALL_STATE(121)] = 3506,
  [SMALL_STATE(122)] = 3516,
  [SMALL_STATE(123)] = 3526,
  [SMALL_STATE(124)] = 3536,
  [SMALL_STATE(125)] = 3546,
  [SMALL_STATE(126)] = 3554,
  [SMALL_STATE(127)] = 3562,
  [SMALL_STATE(128)] = 3570,
  [SMALL_STATE(129)] = 3580,
  [SMALL_STATE(130)] = 3588,
  [SMALL_STATE(131)] = 3596,
  [SMALL_STATE(132)] = 3604,
  [SMALL_STATE(133)] = 3614,
  [SMALL_STATE(134)] = 3621,
  [SMALL_STATE(135)] = 3628,
  [SMALL_STATE(136)] = 3635,
  [SMALL_STATE(137)] = 3642,
  [SMALL_STATE(138)] = 3649,
  [SMALL_STATE(139)] = 3656,
  [SMALL_STATE(140)] = 3663,
  [SMALL_STATE(141)] = 3670,
  [SMALL_STATE(142)] = 3677,
  [SMALL_STATE(143)] = 3684,
  [SMALL_STATE(144)] = 3691,
  [SMALL_STATE(145)] = 3698,
  [SMALL_STATE(146)] = 3705,
  [SMALL_STATE(147)] = 3712,
  [SMALL_STATE(148)] = 3719,
  [SMALL_STATE(149)] = 3726,
  [SMALL_STATE(150)] = 3733,
  [SMALL_STATE(151)] = 3740,
  [SMALL_STATE(152)] = 3747,
  [SMALL_STATE(153)] = 3754,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_type, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_type, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(86),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(62),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(35),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(19),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(112),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(49),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(146),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(46),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(151),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_identifier, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_identifier, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_identifier, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_identifier, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(94),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(94),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(141),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(131),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(138),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [527] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
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
