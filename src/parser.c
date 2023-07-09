#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_AMP_AMP = 1,
  anon_sym_PIPE_PIPE = 2,
  anon_sym_AMP = 3,
  anon_sym_PIPE = 4,
  anon_sym_CARET = 5,
  anon_sym_EQ_EQ = 6,
  anon_sym_BANG_EQ = 7,
  anon_sym_LT = 8,
  anon_sym_LT_EQ = 9,
  anon_sym_GT = 10,
  anon_sym_GT_EQ = 11,
  anon_sym_LT_LT = 12,
  anon_sym_GT_GT = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_STAR = 16,
  anon_sym_SLASH = 17,
  anon_sym_PERCENT = 18,
  anon_sym_BANG = 19,
  anon_sym_SEMI = 20,
  sym_integer = 21,
  sym_identifier = 22,
  anon_sym_as = 23,
  sym_string = 24,
  sym_character = 25,
  anon_sym_LBRACK = 26,
  anon_sym_COMMA = 27,
  anon_sym_RBRACK = 28,
  sym_comment = 29,
  sym_mutable = 30,
  sym_viewer = 31,
  anon_sym_u8 = 32,
  anon_sym_i8 = 33,
  anon_sym_u16 = 34,
  anon_sym_i16 = 35,
  anon_sym_u32 = 36,
  anon_sym_i32 = 37,
  anon_sym_u64 = 38,
  anon_sym_i64 = 39,
  anon_sym_u128 = 40,
  anon_sym_i128 = 41,
  anon_sym_isize = 42,
  anon_sym_usize = 43,
  anon_sym_f32 = 44,
  anon_sym_f64 = 45,
  anon_sym_Field = 46,
  anon_sym_bool = 47,
  anon_sym_String = 48,
  anon_sym_fn = 49,
  anon_sym_LPAREN = 50,
  anon_sym_COLON = 51,
  anon_sym_RPAREN = 52,
  anon_sym_LBRACE = 53,
  anon_sym_RBRACE = 54,
  anon_sym_DASH_GT = 55,
  anon_sym_mod = 56,
  anon_sym_COLON_COLON = 57,
  anon_sym_use = 58,
  anon_sym_POUND = 59,
  sym__punctuation = 60,
  anon_sym_struct = 61,
  anon_sym_let = 62,
  anon_sym_EQ = 63,
  sym_source_file = 64,
  sym__definition = 65,
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
  sym_function_call = 79,
  sym_module = 80,
  sym_import_identifier = 81,
  sym_import = 82,
  sym_macro = 83,
  sym__literal = 84,
  sym_struct = 85,
  sym__field = 86,
  sym_let_declaration = 87,
  aux_sym_source_file_repeat1 = 88,
  aux_sym_array_repeat1 = 89,
  aux_sym_parameter_repeat1 = 90,
  aux_sym_body_repeat1 = 91,
  aux_sym_import_repeat1 = 92,
  aux_sym_macro_repeat1 = 93,
  aux_sym_struct_repeat1 = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_SEMI] = ";",
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
  [anon_sym_COLON] = ":",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_mod] = "mod",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_use] = "use",
  [anon_sym_POUND] = "#",
  [sym__punctuation] = "_punctuation",
  [anon_sym_struct] = "struct",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
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
  [sym_function_call] = "function_call",
  [sym_module] = "module",
  [sym_import_identifier] = "import_identifier",
  [sym_import] = "import",
  [sym_macro] = "macro",
  [sym__literal] = "_literal",
  [sym_struct] = "struct",
  [sym__field] = "_field",
  [sym_let_declaration] = "let_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_macro_repeat1] = "macro_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym__punctuation] = sym__punctuation,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
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
  [sym_function_call] = sym_function_call,
  [sym_module] = sym_module,
  [sym_import_identifier] = sym_import_identifier,
  [sym_import] = sym_import,
  [sym_macro] = sym_macro,
  [sym__literal] = sym__literal,
  [sym_struct] = sym_struct,
  [sym__field] = sym__field,
  [sym_let_declaration] = sym_let_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_parameter_repeat1] = aux_sym_parameter_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
  [aux_sym_macro_repeat1] = aux_sym_macro_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_SEMI] = {
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
  [anon_sym_COLON] = {
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
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [sym_function_call] = {
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
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym__field] = {
    .visible = false,
    .named = true,
  },
  [sym_let_declaration] = {
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
  [aux_sym_macro_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_repeat1] = {
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
  [50] = 49,
  [51] = 51,
  [52] = 52,
  [53] = 51,
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 5,
  [75] = 7,
  [76] = 76,
  [77] = 6,
  [78] = 4,
  [79] = 28,
  [80] = 80,
  [81] = 25,
  [82] = 20,
  [83] = 22,
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
  [98] = 30,
  [99] = 99,
  [100] = 10,
  [101] = 101,
  [102] = 102,
  [103] = 26,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 106,
  [111] = 108,
  [112] = 112,
  [113] = 113,
  [114] = 109,
  [115] = 107,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 122,
  [124] = 124,
  [125] = 125,
  [126] = 125,
  [127] = 19,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 80,
  [133] = 23,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 17,
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
  [150] = 150,
  [151] = 149,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 161,
  [181] = 181,
  [182] = 168,
  [183] = 169,
  [184] = 181,
  [185] = 179,
  [186] = 166,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      if (lookahead == '!') ADVANCE(104);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == '&') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '.') ADVANCE(221);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(225);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == '\\') SKIP(79)
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(142);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '|') ADVANCE(87);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(104);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == '&') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '|') ADVANCE(87);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(104);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == '&') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '|') ADVANCE(87);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(103);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(103);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == 'F') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(71);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(221);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == 'b') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '=') ADVANCE(224);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '}') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(167);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 37:
      if (lookahead == '1') ADVANCE(40);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '6') ADVANCE(46);
      if (lookahead == '8') ADVANCE(175);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '6') ADVANCE(47);
      if (lookahead == '8') ADVANCE(173);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == '2') ADVANCE(197);
      END_STATE();
    case 40:
      if (lookahead == '2') ADVANCE(48);
      if (lookahead == '6') ADVANCE(179);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(183);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(181);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(49);
      if (lookahead == '6') ADVANCE(177);
      END_STATE();
    case 44:
      if (lookahead == '3') ADVANCE(39);
      if (lookahead == '6') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '4') ADVANCE(199);
      END_STATE();
    case 46:
      if (lookahead == '4') ADVANCE(187);
      END_STATE();
    case 47:
      if (lookahead == '4') ADVANCE(185);
      END_STATE();
    case 48:
      if (lookahead == '8') ADVANCE(191);
      END_STATE();
    case 49:
      if (lookahead == '8') ADVANCE(189);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == '>') ADVANCE(214);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 73:
      if (lookahead == 'z') ADVANCE(58);
      END_STATE();
    case 74:
      if (lookahead == 'z') ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(167);
      if (lookahead == '\r') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(168);
      END_STATE();
    case 76:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 78:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 79:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(78)
      END_STATE();
    case 80:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(82)
      END_STATE();
    case 81:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(82)
      if (lookahead == '\r') SKIP(80)
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      if (lookahead == '!') ADVANCE(104);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == '&') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '(') ADVANCE(208);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == ';') ADVANCE(105);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead == 'F') ADVANCE(137);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == '\\') SKIP(81)
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == '{') ADVANCE(212);
      if (lookahead == '|') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(84);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(214);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(167);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead == '3') ADVANCE(115);
      if (lookahead == '6') ADVANCE(121);
      if (lookahead == '8') ADVANCE(176);
      if (lookahead == 's') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == '3') ADVANCE(116);
      if (lookahead == '6') ADVANCE(122);
      if (lookahead == '8') ADVANCE(174);
      if (lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == '3') ADVANCE(116);
      if (lookahead == '6') ADVANCE(122);
      if (lookahead == '8') ADVANCE(174);
      if (lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(123);
      if (lookahead == '6') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(124);
      if (lookahead == '6') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(113);
      if (lookahead == '6') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(113);
      if (lookahead == '6') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(167);
      if (lookahead == '\r') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(75);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_viewer);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_viewer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_Field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__punctuation);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 82},
  [7] = {.lex_state = 82},
  [8] = {.lex_state = 82},
  [9] = {.lex_state = 82},
  [10] = {.lex_state = 82},
  [11] = {.lex_state = 82},
  [12] = {.lex_state = 82},
  [13] = {.lex_state = 82},
  [14] = {.lex_state = 82},
  [15] = {.lex_state = 82},
  [16] = {.lex_state = 82},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 82},
  [19] = {.lex_state = 82},
  [20] = {.lex_state = 82},
  [21] = {.lex_state = 82},
  [22] = {.lex_state = 82},
  [23] = {.lex_state = 82},
  [24] = {.lex_state = 82},
  [25] = {.lex_state = 82},
  [26] = {.lex_state = 82},
  [27] = {.lex_state = 82},
  [28] = {.lex_state = 82},
  [29] = {.lex_state = 82},
  [30] = {.lex_state = 82},
  [31] = {.lex_state = 82},
  [32] = {.lex_state = 82},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 82},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 82},
  [63] = {.lex_state = 82},
  [64] = {.lex_state = 82},
  [65] = {.lex_state = 82},
  [66] = {.lex_state = 82},
  [67] = {.lex_state = 82},
  [68] = {.lex_state = 26},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 22},
  [80] = {.lex_state = 22},
  [81] = {.lex_state = 22},
  [82] = {.lex_state = 22},
  [83] = {.lex_state = 22},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 28},
  [96] = {.lex_state = 31},
  [97] = {.lex_state = 28},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 28},
  [100] = {.lex_state = 31},
  [101] = {.lex_state = 31},
  [102] = {.lex_state = 31},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 31},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 31},
  [107] = {.lex_state = 31},
  [108] = {.lex_state = 31},
  [109] = {.lex_state = 31},
  [110] = {.lex_state = 31},
  [111] = {.lex_state = 31},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 25},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 31},
  [116] = {.lex_state = 31},
  [117] = {.lex_state = 31},
  [118] = {.lex_state = 25},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 31},
  [121] = {.lex_state = 82},
  [122] = {.lex_state = 82},
  [123] = {.lex_state = 82},
  [124] = {.lex_state = 31},
  [125] = {.lex_state = 82},
  [126] = {.lex_state = 82},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 25},
  [129] = {.lex_state = 31},
  [130] = {.lex_state = 26},
  [131] = {.lex_state = 31},
  [132] = {.lex_state = 31},
  [133] = {.lex_state = 25},
  [134] = {.lex_state = 82},
  [135] = {.lex_state = 36},
  [136] = {.lex_state = 25},
  [137] = {.lex_state = 82},
  [138] = {.lex_state = 25},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 26},
  [141] = {.lex_state = 25},
  [142] = {.lex_state = 25},
  [143] = {.lex_state = 31},
  [144] = {.lex_state = 31},
  [145] = {.lex_state = 31},
  [146] = {.lex_state = 82},
  [147] = {.lex_state = 26},
  [148] = {.lex_state = 82},
  [149] = {.lex_state = 82},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 82},
  [152] = {.lex_state = 82},
  [153] = {.lex_state = 25},
  [154] = {.lex_state = 31},
  [155] = {.lex_state = 31},
  [156] = {.lex_state = 31},
  [157] = {.lex_state = 25},
  [158] = {.lex_state = 82},
  [159] = {.lex_state = 82},
  [160] = {.lex_state = 82},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 82},
  [163] = {.lex_state = 82},
  [164] = {.lex_state = 26},
  [165] = {.lex_state = 82},
  [166] = {.lex_state = 31},
  [167] = {.lex_state = 31},
  [168] = {.lex_state = 31},
  [169] = {.lex_state = 31},
  [170] = {.lex_state = 82},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 82},
  [173] = {.lex_state = 82},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 31},
  [176] = {.lex_state = 82},
  [177] = {.lex_state = 82},
  [178] = {.lex_state = 82},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 82},
  [182] = {.lex_state = 31},
  [183] = {.lex_state = 31},
  [184] = {.lex_state = 82},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 31},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__punctuation] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(174),
    [sym__definition] = STATE(3),
    [sym_binary_expression] = STATE(65),
    [sym_unary_expression] = STATE(65),
    [sym__expression_statement] = STATE(3),
    [sym__expression] = STATE(65),
    [sym_array] = STATE(65),
    [sym_single_type] = STATE(3),
    [sym_array_type] = STATE(3),
    [sym__type] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module] = STATE(3),
    [sym_import] = STATE(3),
    [sym_macro] = STATE(3),
    [sym_struct] = STATE(3),
    [sym_let_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_string] = ACTIONS(9),
    [sym_character] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_viewer] = ACTIONS(17),
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
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_struct] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym_binary_expression] = STATE(65),
    [sym_unary_expression] = STATE(65),
    [sym__expression_statement] = STATE(2),
    [sym__expression] = STATE(65),
    [sym_array] = STATE(65),
    [sym_single_type] = STATE(2),
    [sym_array_type] = STATE(2),
    [sym__type] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_module] = STATE(2),
    [sym_import] = STATE(2),
    [sym_macro] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_let_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [sym_integer] = ACTIONS(38),
    [sym_identifier] = ACTIONS(41),
    [sym_string] = ACTIONS(38),
    [sym_character] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(44),
    [sym_comment] = ACTIONS(47),
    [sym_viewer] = ACTIONS(50),
    [anon_sym_u8] = ACTIONS(53),
    [anon_sym_i8] = ACTIONS(53),
    [anon_sym_u16] = ACTIONS(53),
    [anon_sym_i16] = ACTIONS(53),
    [anon_sym_u32] = ACTIONS(53),
    [anon_sym_i32] = ACTIONS(53),
    [anon_sym_u64] = ACTIONS(53),
    [anon_sym_i64] = ACTIONS(53),
    [anon_sym_u128] = ACTIONS(53),
    [anon_sym_i128] = ACTIONS(53),
    [anon_sym_isize] = ACTIONS(53),
    [anon_sym_usize] = ACTIONS(53),
    [anon_sym_f32] = ACTIONS(53),
    [anon_sym_f64] = ACTIONS(53),
    [anon_sym_Field] = ACTIONS(53),
    [anon_sym_bool] = ACTIONS(53),
    [anon_sym_String] = ACTIONS(53),
    [anon_sym_fn] = ACTIONS(56),
    [anon_sym_mod] = ACTIONS(59),
    [anon_sym_use] = ACTIONS(62),
    [anon_sym_POUND] = ACTIONS(65),
    [anon_sym_struct] = ACTIONS(68),
    [anon_sym_let] = ACTIONS(71),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym_binary_expression] = STATE(65),
    [sym_unary_expression] = STATE(65),
    [sym__expression_statement] = STATE(2),
    [sym__expression] = STATE(65),
    [sym_array] = STATE(65),
    [sym_single_type] = STATE(2),
    [sym_array_type] = STATE(2),
    [sym__type] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_module] = STATE(2),
    [sym_import] = STATE(2),
    [sym_macro] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_let_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_string] = ACTIONS(9),
    [sym_character] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_comment] = ACTIONS(76),
    [sym_viewer] = ACTIONS(17),
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
    [anon_sym_mod] = ACTIONS(23),
    [anon_sym_use] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_struct] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(78), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(80), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [40] = 3,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    ACTIONS(82), 10,
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
    ACTIONS(86), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [82] = 3,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(88), 10,
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
    ACTIONS(92), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [124] = 2,
    ACTIONS(94), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(96), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [164] = 2,
    ACTIONS(98), 10,
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
    ACTIONS(100), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [203] = 2,
    ACTIONS(102), 10,
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
    ACTIONS(104), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [242] = 2,
    ACTIONS(106), 10,
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
    ACTIONS(108), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [281] = 2,
    ACTIONS(110), 10,
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
    ACTIONS(112), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [320] = 2,
    ACTIONS(114), 10,
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
    ACTIONS(116), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [359] = 2,
    ACTIONS(118), 10,
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
    ACTIONS(120), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [398] = 2,
    ACTIONS(122), 10,
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
    ACTIONS(124), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [437] = 2,
    ACTIONS(126), 10,
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
    ACTIONS(128), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [476] = 2,
    ACTIONS(130), 10,
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
    ACTIONS(132), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [515] = 2,
    ACTIONS(134), 10,
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
    ACTIONS(136), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [554] = 2,
    ACTIONS(138), 10,
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
    ACTIONS(140), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [593] = 2,
    ACTIONS(142), 10,
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
    ACTIONS(144), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [632] = 2,
    ACTIONS(146), 10,
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
    ACTIONS(148), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [671] = 2,
    ACTIONS(150), 10,
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
    ACTIONS(152), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [710] = 2,
    ACTIONS(82), 10,
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
    ACTIONS(86), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [749] = 2,
    ACTIONS(154), 10,
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
    ACTIONS(156), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [788] = 2,
    ACTIONS(158), 10,
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
    ACTIONS(160), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [827] = 2,
    ACTIONS(162), 10,
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
    ACTIONS(164), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [866] = 2,
    ACTIONS(166), 10,
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
    ACTIONS(168), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [905] = 2,
    ACTIONS(170), 10,
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
    ACTIONS(172), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [944] = 2,
    ACTIONS(88), 10,
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
    ACTIONS(92), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [983] = 2,
    ACTIONS(174), 10,
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
    ACTIONS(176), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [1022] = 2,
    ACTIONS(178), 10,
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
    ACTIONS(180), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [1061] = 2,
    ACTIONS(182), 10,
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
    ACTIONS(184), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [1100] = 2,
    ACTIONS(186), 10,
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
    ACTIONS(188), 24,
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
      anon_sym_struct,
      anon_sym_let,
  [1139] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_as,
    ACTIONS(196), 1,
      anon_sym_COLON_COLON,
    ACTIONS(192), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(190), 21,
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
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(200), 8,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(198), 19,
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
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1225] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(200), 7,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(198), 15,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1273] = 3,
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
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1311] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_CARET,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(200), 7,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(198), 14,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1361] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_CARET,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(200), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(198), 14,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(220), 21,
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
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1451] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(200), 8,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(198), 17,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(198), 21,
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
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1533] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_CARET,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(198), 10,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(228), 21,
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
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1627] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_CARET,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      anon_sym_AMP_AMP,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(200), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(198), 9,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 9,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(234), 21,
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
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1723] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(200), 8,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(198), 15,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1769] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_CARET,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      anon_sym_AMP_AMP,
    ACTIONS(238), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(242), 1,
      anon_sym_SEMI,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(240), 4,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(244), 7,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1831] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 2,
      sym_integer,
      sym_string,
    STATE(124), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(252), 17,
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
  [1869] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      sym_viewer,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      anon_sym_mod,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(256), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(47), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(52), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [1920] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      sym_viewer,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_mod,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(256), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(47), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(52), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [1971] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      sym_viewer,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_mod,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(256), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(47), 4,
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
  [2022] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      sym_viewer,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 1,
      anon_sym_mod,
    ACTIONS(278), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(284), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(47), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(52), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [2073] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      sym_viewer,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_mod,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(256), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(47), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
    STATE(50), 6,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      aux_sym_body_repeat1,
  [2124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      sym_viewer,
    STATE(170), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(313), 17,
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
  [2158] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_parameter,
    ACTIONS(192), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(190), 14,
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
      anon_sym_SEMI,
  [2194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      sym_viewer,
    STATE(143), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(313), 17,
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
  [2228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    STATE(144), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(313), 17,
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
  [2259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    STATE(153), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(313), 17,
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
  [2290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    STATE(157), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(313), 17,
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
  [2321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    STATE(163), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(313), 17,
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
  [2352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(321), 2,
      sym_integer,
      sym_string,
    ACTIONS(325), 17,
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
  [2382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(190), 14,
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
      anon_sym_SEMI,
  [2412] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_CARET,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      anon_sym_AMP_AMP,
    ACTIONS(238), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2459] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_CARET,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      anon_sym_AMP_AMP,
    ACTIONS(238), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2506] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_CARET,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      anon_sym_AMP_AMP,
    ACTIONS(238), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2553] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_CARET,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      anon_sym_AMP_AMP,
    ACTIONS(238), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2600] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_CARET,
    ACTIONS(218), 1,
      anon_sym_PIPE,
    ACTIONS(232), 1,
      anon_sym_AMP_AMP,
    ACTIONS(238), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(208), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(210), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(226), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(224), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 17,
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
  [2670] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(240), 2,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(244), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(341), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(45), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2705] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 1,
      sym_identifier,
    ACTIONS(349), 1,
      anon_sym_struct,
    STATE(162), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(345), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(63), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2738] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 1,
      sym_identifier,
    ACTIONS(349), 1,
      anon_sym_struct,
    STATE(178), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(351), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(66), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2771] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 1,
      sym_identifier,
    ACTIONS(349), 1,
      anon_sym_struct,
    STATE(173), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(353), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(67), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2804] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 1,
      sym_identifier,
    ACTIONS(349), 1,
      anon_sym_struct,
    STATE(177), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(355), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(64), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [2837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    ACTIONS(86), 3,
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
  [2861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(94), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(359), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    ACTIONS(92), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(88), 10,
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
  [2929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(78), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(88), 10,
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
  [2972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(365), 10,
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
  [2993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(162), 10,
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
  [3014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 3,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
    ACTIONS(146), 10,
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
  [3035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 3,
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
  [3056] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(369), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(46), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3082] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(375), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(373), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(41), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3108] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(341), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(45), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3134] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(377), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(38), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3160] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(381), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(35), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3186] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(387), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(385), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(37), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3212] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(389), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(44), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3238] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(393), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(34), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(397), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(40), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3290] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(401), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(42), 4,
      sym_binary_expression,
      sym_unary_expression,
      sym__expression,
      sym_array,
  [3316] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(405), 1,
      anon_sym_STAR,
    ACTIONS(407), 1,
      sym_identifier,
    STATE(101), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(172), 2,
      sym_as_identifier,
      sym_body,
  [3337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
    ACTIONS(409), 2,
      sym_integer,
      sym_string,
    ACTIONS(411), 2,
      sym_identifier,
      sym__punctuation,
    STATE(97), 2,
      sym__literal,
      aux_sym_macro_repeat1,
  [3356] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(405), 1,
      anon_sym_STAR,
    ACTIONS(407), 1,
      sym_identifier,
    STATE(104), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(172), 2,
      sym_as_identifier,
      sym_body,
  [3377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RBRACK,
    ACTIONS(415), 2,
      sym_integer,
      sym_string,
    ACTIONS(418), 2,
      sym_identifier,
      sym__punctuation,
    STATE(97), 2,
      sym__literal,
      aux_sym_macro_repeat1,
  [3396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 7,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [3409] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    ACTIONS(423), 2,
      sym_integer,
      sym_string,
    ACTIONS(425), 2,
      sym_identifier,
      sym__punctuation,
    STATE(95), 2,
      sym__literal,
      aux_sym_macro_repeat1,
  [3428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 7,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [3441] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      anon_sym_STAR,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(104), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(160), 2,
      sym_as_identifier,
      sym_body,
  [3462] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(433), 1,
      anon_sym_STAR,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(96), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(176), 2,
      sym_as_identifier,
      sym_body,
  [3483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 7,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [3496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_LBRACE,
    STATE(104), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
  [3511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_struct,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(444), 1,
      sym_mutable,
    STATE(142), 1,
      sym_struct,
  [3527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    STATE(115), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [3541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(116), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [3555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(109), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [3569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(116), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [3583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(107), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [3597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(114), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [3611] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_EQ,
  [3627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    ACTIONS(466), 1,
      anon_sym_DASH_GT,
    STATE(31), 1,
      sym_body,
    STATE(152), 1,
      sym_return_type,
  [3643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(116), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [3657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(116), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [3671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    STATE(116), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [3685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_COLON,
    ACTIONS(475), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [3699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(481), 1,
      anon_sym_SEMI,
    ACTIONS(483), 1,
      anon_sym_COLON,
    ACTIONS(485), 1,
      anon_sym_EQ,
  [3715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_SEMI,
    ACTIONS(489), 1,
      anon_sym_as,
    ACTIONS(491), 1,
      anon_sym_COLON_COLON,
  [3728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_identifier,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_parameter_repeat1,
  [3741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      aux_sym_array_repeat1,
  [3754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_body,
  [3767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_body,
  [3780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(501), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [3791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(505), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_body,
  [3804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_body,
  [3817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [3826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [3835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_identifier,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_parameter_repeat1,
  [3848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_as,
    ACTIONS(491), 1,
      anon_sym_COLON_COLON,
    ACTIONS(516), 1,
      anon_sym_SEMI,
  [3861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_identifier,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_parameter_repeat1,
  [3874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_STAR,
      sym_identifier,
      anon_sym_LBRACE,
  [3883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [3892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_array_repeat1,
  [3905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_struct,
    ACTIONS(522), 1,
      sym_identifier,
    STATE(136), 1,
      sym_struct,
  [3918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_SEMI,
    ACTIONS(483), 1,
      anon_sym_COLON,
    ACTIONS(485), 1,
      anon_sym_EQ,
  [3931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      aux_sym_array_repeat1,
  [3944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [3953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(321), 2,
      sym_integer,
      sym_string,
  [3964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_as,
    ACTIONS(491), 1,
      anon_sym_COLON_COLON,
    ACTIONS(529), 1,
      anon_sym_SEMI,
  [3977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [3986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_COLON,
    ACTIONS(462), 1,
      anon_sym_EQ,
  [3999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(533), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [4010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    ACTIONS(537), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [4021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [4029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_mod,
    ACTIONS(543), 1,
      anon_sym_use,
  [4047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_parameter,
  [4057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_SEMI,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 2,
      sym_integer,
      sym_string,
  [4075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_SEMI,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
  [4085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_body,
  [4095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_SEMI,
    ACTIONS(557), 1,
      anon_sym_EQ,
  [4105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [4113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 2,
      sym_identifier,
      anon_sym_RPAREN,
  [4121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [4129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SEMI,
    ACTIONS(567), 1,
      anon_sym_EQ,
  [4139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_LBRACK,
  [4146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COLON,
  [4153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_SEMI,
  [4160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
  [4167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_SEMI,
  [4174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LBRACE,
  [4181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_mod,
  [4188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SEMI,
  [4195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym_identifier,
  [4209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym_identifier,
  [4216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym_identifier,
  [4223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
  [4230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_COLON_COLON,
  [4237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_SEMI,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [4251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
  [4258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_identifier,
  [4265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_SEMI,
  [4272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_SEMI,
  [4279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_SEMI,
  [4286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_integer,
  [4293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
  [4300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
  [4307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      sym_identifier,
  [4314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_identifier,
  [4321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
  [4328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_integer,
  [4335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 124,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 281,
  [SMALL_STATE(12)] = 320,
  [SMALL_STATE(13)] = 359,
  [SMALL_STATE(14)] = 398,
  [SMALL_STATE(15)] = 437,
  [SMALL_STATE(16)] = 476,
  [SMALL_STATE(17)] = 515,
  [SMALL_STATE(18)] = 554,
  [SMALL_STATE(19)] = 593,
  [SMALL_STATE(20)] = 632,
  [SMALL_STATE(21)] = 671,
  [SMALL_STATE(22)] = 710,
  [SMALL_STATE(23)] = 749,
  [SMALL_STATE(24)] = 788,
  [SMALL_STATE(25)] = 827,
  [SMALL_STATE(26)] = 866,
  [SMALL_STATE(27)] = 905,
  [SMALL_STATE(28)] = 944,
  [SMALL_STATE(29)] = 983,
  [SMALL_STATE(30)] = 1022,
  [SMALL_STATE(31)] = 1061,
  [SMALL_STATE(32)] = 1100,
  [SMALL_STATE(33)] = 1139,
  [SMALL_STATE(34)] = 1183,
  [SMALL_STATE(35)] = 1225,
  [SMALL_STATE(36)] = 1273,
  [SMALL_STATE(37)] = 1311,
  [SMALL_STATE(38)] = 1361,
  [SMALL_STATE(39)] = 1413,
  [SMALL_STATE(40)] = 1451,
  [SMALL_STATE(41)] = 1495,
  [SMALL_STATE(42)] = 1533,
  [SMALL_STATE(43)] = 1589,
  [SMALL_STATE(44)] = 1627,
  [SMALL_STATE(45)] = 1685,
  [SMALL_STATE(46)] = 1723,
  [SMALL_STATE(47)] = 1769,
  [SMALL_STATE(48)] = 1831,
  [SMALL_STATE(49)] = 1869,
  [SMALL_STATE(50)] = 1920,
  [SMALL_STATE(51)] = 1971,
  [SMALL_STATE(52)] = 2022,
  [SMALL_STATE(53)] = 2073,
  [SMALL_STATE(54)] = 2124,
  [SMALL_STATE(55)] = 2158,
  [SMALL_STATE(56)] = 2194,
  [SMALL_STATE(57)] = 2228,
  [SMALL_STATE(58)] = 2259,
  [SMALL_STATE(59)] = 2290,
  [SMALL_STATE(60)] = 2321,
  [SMALL_STATE(61)] = 2352,
  [SMALL_STATE(62)] = 2382,
  [SMALL_STATE(63)] = 2412,
  [SMALL_STATE(64)] = 2459,
  [SMALL_STATE(65)] = 2506,
  [SMALL_STATE(66)] = 2553,
  [SMALL_STATE(67)] = 2600,
  [SMALL_STATE(68)] = 2647,
  [SMALL_STATE(69)] = 2670,
  [SMALL_STATE(70)] = 2705,
  [SMALL_STATE(71)] = 2738,
  [SMALL_STATE(72)] = 2771,
  [SMALL_STATE(73)] = 2804,
  [SMALL_STATE(74)] = 2837,
  [SMALL_STATE(75)] = 2861,
  [SMALL_STATE(76)] = 2883,
  [SMALL_STATE(77)] = 2905,
  [SMALL_STATE(78)] = 2929,
  [SMALL_STATE(79)] = 2951,
  [SMALL_STATE(80)] = 2972,
  [SMALL_STATE(81)] = 2993,
  [SMALL_STATE(82)] = 3014,
  [SMALL_STATE(83)] = 3035,
  [SMALL_STATE(84)] = 3056,
  [SMALL_STATE(85)] = 3082,
  [SMALL_STATE(86)] = 3108,
  [SMALL_STATE(87)] = 3134,
  [SMALL_STATE(88)] = 3160,
  [SMALL_STATE(89)] = 3186,
  [SMALL_STATE(90)] = 3212,
  [SMALL_STATE(91)] = 3238,
  [SMALL_STATE(92)] = 3264,
  [SMALL_STATE(93)] = 3290,
  [SMALL_STATE(94)] = 3316,
  [SMALL_STATE(95)] = 3337,
  [SMALL_STATE(96)] = 3356,
  [SMALL_STATE(97)] = 3377,
  [SMALL_STATE(98)] = 3396,
  [SMALL_STATE(99)] = 3409,
  [SMALL_STATE(100)] = 3428,
  [SMALL_STATE(101)] = 3441,
  [SMALL_STATE(102)] = 3462,
  [SMALL_STATE(103)] = 3483,
  [SMALL_STATE(104)] = 3496,
  [SMALL_STATE(105)] = 3511,
  [SMALL_STATE(106)] = 3527,
  [SMALL_STATE(107)] = 3541,
  [SMALL_STATE(108)] = 3555,
  [SMALL_STATE(109)] = 3569,
  [SMALL_STATE(110)] = 3583,
  [SMALL_STATE(111)] = 3597,
  [SMALL_STATE(112)] = 3611,
  [SMALL_STATE(113)] = 3627,
  [SMALL_STATE(114)] = 3643,
  [SMALL_STATE(115)] = 3657,
  [SMALL_STATE(116)] = 3671,
  [SMALL_STATE(117)] = 3685,
  [SMALL_STATE(118)] = 3699,
  [SMALL_STATE(119)] = 3715,
  [SMALL_STATE(120)] = 3728,
  [SMALL_STATE(121)] = 3741,
  [SMALL_STATE(122)] = 3754,
  [SMALL_STATE(123)] = 3767,
  [SMALL_STATE(124)] = 3780,
  [SMALL_STATE(125)] = 3791,
  [SMALL_STATE(126)] = 3804,
  [SMALL_STATE(127)] = 3817,
  [SMALL_STATE(128)] = 3826,
  [SMALL_STATE(129)] = 3835,
  [SMALL_STATE(130)] = 3848,
  [SMALL_STATE(131)] = 3861,
  [SMALL_STATE(132)] = 3874,
  [SMALL_STATE(133)] = 3883,
  [SMALL_STATE(134)] = 3892,
  [SMALL_STATE(135)] = 3905,
  [SMALL_STATE(136)] = 3918,
  [SMALL_STATE(137)] = 3931,
  [SMALL_STATE(138)] = 3944,
  [SMALL_STATE(139)] = 3953,
  [SMALL_STATE(140)] = 3964,
  [SMALL_STATE(141)] = 3977,
  [SMALL_STATE(142)] = 3986,
  [SMALL_STATE(143)] = 3999,
  [SMALL_STATE(144)] = 4010,
  [SMALL_STATE(145)] = 4021,
  [SMALL_STATE(146)] = 4029,
  [SMALL_STATE(147)] = 4037,
  [SMALL_STATE(148)] = 4047,
  [SMALL_STATE(149)] = 4057,
  [SMALL_STATE(150)] = 4067,
  [SMALL_STATE(151)] = 4075,
  [SMALL_STATE(152)] = 4085,
  [SMALL_STATE(153)] = 4095,
  [SMALL_STATE(154)] = 4105,
  [SMALL_STATE(155)] = 4113,
  [SMALL_STATE(156)] = 4121,
  [SMALL_STATE(157)] = 4129,
  [SMALL_STATE(158)] = 4139,
  [SMALL_STATE(159)] = 4146,
  [SMALL_STATE(160)] = 4153,
  [SMALL_STATE(161)] = 4160,
  [SMALL_STATE(162)] = 4167,
  [SMALL_STATE(163)] = 4174,
  [SMALL_STATE(164)] = 4181,
  [SMALL_STATE(165)] = 4188,
  [SMALL_STATE(166)] = 4195,
  [SMALL_STATE(167)] = 4202,
  [SMALL_STATE(168)] = 4209,
  [SMALL_STATE(169)] = 4216,
  [SMALL_STATE(170)] = 4223,
  [SMALL_STATE(171)] = 4230,
  [SMALL_STATE(172)] = 4237,
  [SMALL_STATE(173)] = 4244,
  [SMALL_STATE(174)] = 4251,
  [SMALL_STATE(175)] = 4258,
  [SMALL_STATE(176)] = 4265,
  [SMALL_STATE(177)] = 4272,
  [SMALL_STATE(178)] = 4279,
  [SMALL_STATE(179)] = 4286,
  [SMALL_STATE(180)] = 4293,
  [SMALL_STATE(181)] = 4300,
  [SMALL_STATE(182)] = 4307,
  [SMALL_STATE(183)] = 4314,
  [SMALL_STATE(184)] = 4321,
  [SMALL_STATE(185)] = 4328,
  [SMALL_STATE(186)] = 4335,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_type, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_type, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(86),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(69),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(47),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(33),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(139),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(52),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(164),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(53),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(182),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_identifier, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_identifier, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_identifier, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_identifier, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(97),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(97),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(171),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(117),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(159),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(150),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 5),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [591] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
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
