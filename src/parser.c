#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 228
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
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
  anon_sym_EQ = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  sym_integer = 24,
  sym_identifier = 25,
  anon_sym_as = 26,
  sym_string = 27,
  sym_character = 28,
  anon_sym_DOT_DOT = 29,
  anon_sym_LBRACK = 30,
  anon_sym_COMMA = 31,
  anon_sym_RBRACK = 32,
  sym_comment = 33,
  sym_mutable = 34,
  sym_viewer = 35,
  anon_sym_u8 = 36,
  anon_sym_i8 = 37,
  anon_sym_u16 = 38,
  anon_sym_i16 = 39,
  anon_sym_u32 = 40,
  anon_sym_i32 = 41,
  anon_sym_u64 = 42,
  anon_sym_i64 = 43,
  anon_sym_u128 = 44,
  anon_sym_i128 = 45,
  anon_sym_isize = 46,
  anon_sym_usize = 47,
  anon_sym_f32 = 48,
  anon_sym_f64 = 49,
  anon_sym_Field = 50,
  anon_sym_bool = 51,
  anon_sym_String = 52,
  anon_sym_fn = 53,
  anon_sym_COLON = 54,
  anon_sym_LBRACE = 55,
  anon_sym_RBRACE = 56,
  anon_sym_DASH_GT = 57,
  anon_sym_mod = 58,
  anon_sym_COLON_COLON = 59,
  anon_sym_use = 60,
  anon_sym_POUND = 61,
  sym__punctuation = 62,
  anon_sym_struct = 63,
  anon_sym_impl = 64,
  anon_sym_for = 65,
  anon_sym_in = 66,
  anon_sym_if = 67,
  anon_sym_else = 68,
  anon_sym_let = 69,
  sym_source_file = 70,
  sym__definition = 71,
  sym_binary_expression = 72,
  sym_unary_expression = 73,
  sym__expression_statement = 74,
  sym_re_assignment = 75,
  sym_grouped_expression = 76,
  sym__expression = 77,
  sym_as_identifier = 78,
  sym_range = 79,
  sym_array = 80,
  sym_single_type = 81,
  sym_array_type = 82,
  sym__type = 83,
  sym_function_definition = 84,
  sym_parameter = 85,
  sym_body = 86,
  sym_return_type = 87,
  sym_function_call = 88,
  sym_module = 89,
  sym_import_identifier = 90,
  sym_import = 91,
  sym_macro = 92,
  sym__literal = 93,
  sym_struct = 94,
  sym__field = 95,
  sym_for_loop = 96,
  sym_if_exp = 97,
  sym_else_exp = 98,
  sym__if_else_exp = 99,
  sym_let_declaration = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_array_repeat1 = 102,
  aux_sym_parameter_repeat1 = 103,
  aux_sym_body_repeat1 = 104,
  aux_sym_import_repeat1 = 105,
  aux_sym_macro_repeat1 = 106,
  aux_sym_struct_repeat1 = 107,
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
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_integer] = "integer",
  [sym_identifier] = "identifier",
  [anon_sym_as] = "as",
  [sym_string] = "string",
  [sym_character] = "character",
  [anon_sym_DOT_DOT] = "..",
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
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_mod] = "mod",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_use] = "use",
  [anon_sym_POUND] = "#",
  [sym__punctuation] = "_punctuation",
  [anon_sym_struct] = "struct",
  [anon_sym_impl] = "impl",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_let] = "let",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym__expression_statement] = "_expression_statement",
  [sym_re_assignment] = "re_assignment",
  [sym_grouped_expression] = "grouped_expression",
  [sym__expression] = "_expression",
  [sym_as_identifier] = "as_identifier",
  [sym_range] = "range",
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
  [sym_for_loop] = "for_loop",
  [sym_if_exp] = "if_exp",
  [sym_else_exp] = "else_exp",
  [sym__if_else_exp] = "_if_else_exp",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_integer] = sym_integer,
  [sym_identifier] = sym_identifier,
  [anon_sym_as] = anon_sym_as,
  [sym_string] = sym_string,
  [sym_character] = sym_character,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym__punctuation] = sym__punctuation,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_impl] = anon_sym_impl,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_let] = anon_sym_let,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym__expression_statement] = sym__expression_statement,
  [sym_re_assignment] = sym_re_assignment,
  [sym_grouped_expression] = sym_grouped_expression,
  [sym__expression] = sym__expression,
  [sym_as_identifier] = sym_as_identifier,
  [sym_range] = sym_range,
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
  [sym_for_loop] = sym_for_loop,
  [sym_if_exp] = sym_if_exp,
  [sym_else_exp] = sym_else_exp,
  [sym__if_else_exp] = sym__if_else_exp,
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
  [anon_sym_EQ] = {
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
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
  [anon_sym_COLON] = {
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
  [anon_sym_impl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
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
  [sym_re_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_grouped_expression] = {
    .visible = true,
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
  [sym_range] = {
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
  [sym_for_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_if_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_else_exp] = {
    .visible = true,
    .named = true,
  },
  [sym__if_else_exp] = {
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
    {field_value, 3},
  [4] =
    {field_type, 3},
  [5] =
    {field_value, 4},
  [6] =
    {field_type, 4},
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
  [7] = 5,
  [8] = 6,
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
  [60] = 58,
  [61] = 59,
  [62] = 59,
  [63] = 58,
  [64] = 64,
  [65] = 59,
  [66] = 58,
  [67] = 67,
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
  [79] = 78,
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
  [90] = 4,
  [91] = 5,
  [92] = 11,
  [93] = 5,
  [94] = 6,
  [95] = 95,
  [96] = 96,
  [97] = 6,
  [98] = 9,
  [99] = 10,
  [100] = 30,
  [101] = 15,
  [102] = 40,
  [103] = 39,
  [104] = 104,
  [105] = 29,
  [106] = 27,
  [107] = 19,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 115,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 21,
  [127] = 127,
  [128] = 128,
  [129] = 36,
  [130] = 20,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 132,
  [136] = 136,
  [137] = 133,
  [138] = 138,
  [139] = 139,
  [140] = 134,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 138,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 104,
  [154] = 154,
  [155] = 155,
  [156] = 28,
  [157] = 152,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 16,
  [162] = 13,
  [163] = 163,
  [164] = 164,
  [165] = 154,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 163,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 177,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 180,
  [190] = 183,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 199,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 202,
  [220] = 220,
  [221] = 208,
  [222] = 206,
  [223] = 210,
  [224] = 224,
  [225] = 214,
  [226] = 205,
  [227] = 216,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      if (lookahead == '!') ADVANCE(124);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '&') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ':') ADVANCE(242);
      if (lookahead == ';') ADVANCE(125);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') SKIP(96)
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == '^') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(28)
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
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(30)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(124);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '&') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ';') ADVANCE(125);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '^') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(124);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '&') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(125);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(123);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(123);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(123);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(125);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'S') ADVANCE(178);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(252);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(241);
      if (lookahead == ';') ADVANCE(125);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(193);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ';') ADVANCE(125);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(44);
      if (lookahead == '3') ADVANCE(45);
      if (lookahead == '6') ADVANCE(50);
      if (lookahead == '8') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '3') ADVANCE(46);
      if (lookahead == '6') ADVANCE(51);
      if (lookahead == '8') ADVANCE(205);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == '2') ADVANCE(229);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(52);
      if (lookahead == '6') ADVANCE(211);
      END_STATE();
    case 45:
      if (lookahead == '2') ADVANCE(215);
      END_STATE();
    case 46:
      if (lookahead == '2') ADVANCE(213);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(53);
      if (lookahead == '6') ADVANCE(209);
      END_STATE();
    case 48:
      if (lookahead == '3') ADVANCE(43);
      if (lookahead == '6') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == '4') ADVANCE(231);
      END_STATE();
    case 50:
      if (lookahead == '4') ADVANCE(219);
      END_STATE();
    case 51:
      if (lookahead == '4') ADVANCE(217);
      END_STATE();
    case 52:
      if (lookahead == '8') ADVANCE(223);
      END_STATE();
    case 53:
      if (lookahead == '8') ADVANCE(221);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(248);
      END_STATE();
    case 55:
      if (lookahead == '>') ADVANCE(245);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 90:
      if (lookahead == 'z') ADVANCE(62);
      END_STATE();
    case 91:
      if (lookahead == 'z') ADVANCE(63);
      END_STATE();
    case 92:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(199);
      END_STATE();
    case 93:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 95:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 96:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(95)
      END_STATE();
    case 97:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(101)
      END_STATE();
    case 98:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(101)
      if (lookahead == '\r') SKIP(97)
      END_STATE();
    case 99:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(102)
      END_STATE();
    case 100:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(102)
      if (lookahead == '\r') SKIP(99)
      END_STATE();
    case 101:
      if (eof) ADVANCE(103);
      if (lookahead == '!') ADVANCE(124);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '&') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(129);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == ':') ADVANCE(241);
      if (lookahead == ';') ADVANCE(125);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'S') ADVANCE(178);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') SKIP(98)
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == '^') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      if (lookahead == '!') ADVANCE(123);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(164);
      if (lookahead == 'S') ADVANCE(178);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') SKIP(100)
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(183);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(104);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(105);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(245);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(139);
      if (lookahead == '3') ADVANCE(140);
      if (lookahead == '6') ADVANCE(146);
      if (lookahead == '8') ADVANCE(208);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(139);
      if (lookahead == '3') ADVANCE(140);
      if (lookahead == '6') ADVANCE(146);
      if (lookahead == '8') ADVANCE(208);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(142);
      if (lookahead == '3') ADVANCE(141);
      if (lookahead == '6') ADVANCE(147);
      if (lookahead == '8') ADVANCE(206);
      if (lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(142);
      if (lookahead == '3') ADVANCE(141);
      if (lookahead == '6') ADVANCE(147);
      if (lookahead == '8') ADVANCE(206);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(148);
      if (lookahead == '6') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(149);
      if (lookahead == '6') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(138);
      if (lookahead == '6') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(138);
      if (lookahead == '6') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(198);
      if (lookahead == '\r') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(92);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_mutable);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_viewer);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_viewer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_Field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(248);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__punctuation);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_impl);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 101},
  [2] = {.lex_state = 101},
  [3] = {.lex_state = 101},
  [4] = {.lex_state = 102},
  [5] = {.lex_state = 102},
  [6] = {.lex_state = 102},
  [7] = {.lex_state = 101},
  [8] = {.lex_state = 101},
  [9] = {.lex_state = 102},
  [10] = {.lex_state = 101},
  [11] = {.lex_state = 101},
  [12] = {.lex_state = 101},
  [13] = {.lex_state = 101},
  [14] = {.lex_state = 101},
  [15] = {.lex_state = 101},
  [16] = {.lex_state = 101},
  [17] = {.lex_state = 101},
  [18] = {.lex_state = 101},
  [19] = {.lex_state = 101},
  [20] = {.lex_state = 101},
  [21] = {.lex_state = 101},
  [22] = {.lex_state = 101},
  [23] = {.lex_state = 101},
  [24] = {.lex_state = 101},
  [25] = {.lex_state = 101},
  [26] = {.lex_state = 101},
  [27] = {.lex_state = 101},
  [28] = {.lex_state = 101},
  [29] = {.lex_state = 101},
  [30] = {.lex_state = 101},
  [31] = {.lex_state = 101},
  [32] = {.lex_state = 101},
  [33] = {.lex_state = 101},
  [34] = {.lex_state = 101},
  [35] = {.lex_state = 101},
  [36] = {.lex_state = 101},
  [37] = {.lex_state = 101},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 101},
  [40] = {.lex_state = 101},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 23},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 23},
  [60] = {.lex_state = 23},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 23},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 101},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 101},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 101},
  [79] = {.lex_state = 101},
  [80] = {.lex_state = 101},
  [81] = {.lex_state = 101},
  [82] = {.lex_state = 101},
  [83] = {.lex_state = 101},
  [84] = {.lex_state = 101},
  [85] = {.lex_state = 101},
  [86] = {.lex_state = 26},
  [87] = {.lex_state = 26},
  [88] = {.lex_state = 26},
  [89] = {.lex_state = 26},
  [90] = {.lex_state = 25},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 23},
  [105] = {.lex_state = 23},
  [106] = {.lex_state = 23},
  [107] = {.lex_state = 23},
  [108] = {.lex_state = 27},
  [109] = {.lex_state = 27},
  [110] = {.lex_state = 27},
  [111] = {.lex_state = 27},
  [112] = {.lex_state = 27},
  [113] = {.lex_state = 27},
  [114] = {.lex_state = 27},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 27},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 27},
  [120] = {.lex_state = 27},
  [121] = {.lex_state = 33},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 30},
  [124] = {.lex_state = 30},
  [125] = {.lex_state = 33},
  [126] = {.lex_state = 33},
  [127] = {.lex_state = 33},
  [128] = {.lex_state = 30},
  [129] = {.lex_state = 33},
  [130] = {.lex_state = 33},
  [131] = {.lex_state = 33},
  [132] = {.lex_state = 33},
  [133] = {.lex_state = 33},
  [134] = {.lex_state = 33},
  [135] = {.lex_state = 33},
  [136] = {.lex_state = 101},
  [137] = {.lex_state = 33},
  [138] = {.lex_state = 33},
  [139] = {.lex_state = 33},
  [140] = {.lex_state = 33},
  [141] = {.lex_state = 28},
  [142] = {.lex_state = 101},
  [143] = {.lex_state = 39},
  [144] = {.lex_state = 33},
  [145] = {.lex_state = 33},
  [146] = {.lex_state = 33},
  [147] = {.lex_state = 33},
  [148] = {.lex_state = 101},
  [149] = {.lex_state = 28},
  [150] = {.lex_state = 28},
  [151] = {.lex_state = 33},
  [152] = {.lex_state = 33},
  [153] = {.lex_state = 33},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 38},
  [156] = {.lex_state = 101},
  [157] = {.lex_state = 33},
  [158] = {.lex_state = 33},
  [159] = {.lex_state = 101},
  [160] = {.lex_state = 101},
  [161] = {.lex_state = 101},
  [162] = {.lex_state = 101},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 38},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 33},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 101},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 40},
  [171] = {.lex_state = 33},
  [172] = {.lex_state = 38},
  [173] = {.lex_state = 101},
  [174] = {.lex_state = 33},
  [175] = {.lex_state = 101},
  [176] = {.lex_state = 33},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 101},
  [182] = {.lex_state = 33},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 33},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 101},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 102},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 33},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 33},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 33},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 33},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 33},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 33},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 33},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 33},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 33},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 33},
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__punctuation] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_impl] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(224),
    [sym__definition] = STATE(3),
    [sym_binary_expression] = STATE(84),
    [sym_unary_expression] = STATE(84),
    [sym__expression_statement] = STATE(3),
    [sym_re_assignment] = STATE(84),
    [sym_grouped_expression] = STATE(84),
    [sym__expression] = STATE(84),
    [sym_array] = STATE(84),
    [sym_single_type] = STATE(3),
    [sym_array_type] = STATE(3),
    [sym__type] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module] = STATE(3),
    [sym_import] = STATE(3),
    [sym_macro] = STATE(3),
    [sym_struct] = STATE(3),
    [sym_for_loop] = STATE(3),
    [sym_if_exp] = STATE(4),
    [sym__if_else_exp] = STATE(3),
    [sym_let_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
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
    [anon_sym_struct] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_let] = ACTIONS(37),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym_binary_expression] = STATE(84),
    [sym_unary_expression] = STATE(84),
    [sym__expression_statement] = STATE(2),
    [sym_re_assignment] = STATE(84),
    [sym_grouped_expression] = STATE(84),
    [sym__expression] = STATE(84),
    [sym_array] = STATE(84),
    [sym_single_type] = STATE(2),
    [sym_array_type] = STATE(2),
    [sym__type] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_module] = STATE(2),
    [sym_import] = STATE(2),
    [sym_macro] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_for_loop] = STATE(2),
    [sym_if_exp] = STATE(4),
    [sym__if_else_exp] = STATE(2),
    [sym_let_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(44),
    [sym_integer] = ACTIONS(47),
    [sym_identifier] = ACTIONS(50),
    [sym_string] = ACTIONS(47),
    [sym_character] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(53),
    [sym_comment] = ACTIONS(56),
    [sym_viewer] = ACTIONS(59),
    [anon_sym_u8] = ACTIONS(62),
    [anon_sym_i8] = ACTIONS(62),
    [anon_sym_u16] = ACTIONS(62),
    [anon_sym_i16] = ACTIONS(62),
    [anon_sym_u32] = ACTIONS(62),
    [anon_sym_i32] = ACTIONS(62),
    [anon_sym_u64] = ACTIONS(62),
    [anon_sym_i64] = ACTIONS(62),
    [anon_sym_u128] = ACTIONS(62),
    [anon_sym_i128] = ACTIONS(62),
    [anon_sym_isize] = ACTIONS(62),
    [anon_sym_usize] = ACTIONS(62),
    [anon_sym_f32] = ACTIONS(62),
    [anon_sym_f64] = ACTIONS(62),
    [anon_sym_Field] = ACTIONS(62),
    [anon_sym_bool] = ACTIONS(62),
    [anon_sym_String] = ACTIONS(62),
    [anon_sym_fn] = ACTIONS(65),
    [anon_sym_mod] = ACTIONS(68),
    [anon_sym_use] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(74),
    [anon_sym_struct] = ACTIONS(77),
    [anon_sym_for] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(86),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym_binary_expression] = STATE(84),
    [sym_unary_expression] = STATE(84),
    [sym__expression_statement] = STATE(2),
    [sym_re_assignment] = STATE(84),
    [sym_grouped_expression] = STATE(84),
    [sym__expression] = STATE(84),
    [sym_array] = STATE(84),
    [sym_single_type] = STATE(2),
    [sym_array_type] = STATE(2),
    [sym__type] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_module] = STATE(2),
    [sym_import] = STATE(2),
    [sym_macro] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_for_loop] = STATE(2),
    [sym_if_exp] = STATE(4),
    [sym__if_else_exp] = STATE(2),
    [sym_let_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_comment] = ACTIONS(91),
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
    [anon_sym_struct] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_let] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(97), 1,
      anon_sym_else,
    STATE(30), 1,
      sym_else_exp,
    ACTIONS(93), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(95), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [48] = 2,
    ACTIONS(99), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(101), 27,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
      anon_sym_let,
  [91] = 2,
    ACTIONS(103), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(105), 27,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
      anon_sym_let,
  [134] = 2,
    ACTIONS(99), 12,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(101), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [177] = 2,
    ACTIONS(103), 12,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(105), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [220] = 2,
    ACTIONS(107), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(109), 27,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
      anon_sym_let,
  [263] = 3,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(111), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(115), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [308] = 3,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    ACTIONS(117), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(121), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [353] = 2,
    ACTIONS(123), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(125), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [395] = 2,
    ACTIONS(127), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(129), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [437] = 2,
    ACTIONS(131), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(133), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [479] = 2,
    ACTIONS(135), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(137), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [521] = 2,
    ACTIONS(139), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(141), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [563] = 2,
    ACTIONS(143), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(145), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [605] = 2,
    ACTIONS(147), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(149), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [647] = 2,
    ACTIONS(151), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(153), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [689] = 2,
    ACTIONS(155), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(157), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [731] = 2,
    ACTIONS(159), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(161), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [773] = 2,
    ACTIONS(163), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(165), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [815] = 2,
    ACTIONS(167), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(169), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [857] = 2,
    ACTIONS(171), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(173), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [899] = 2,
    ACTIONS(175), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(177), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [941] = 2,
    ACTIONS(179), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(181), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [983] = 2,
    ACTIONS(117), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(121), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1025] = 2,
    ACTIONS(183), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(185), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1067] = 2,
    ACTIONS(187), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(189), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1109] = 2,
    ACTIONS(191), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(193), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1151] = 2,
    ACTIONS(195), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(197), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1193] = 2,
    ACTIONS(199), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(201), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1235] = 2,
    ACTIONS(203), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(205), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1277] = 2,
    ACTIONS(207), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(209), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1319] = 2,
    ACTIONS(211), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(213), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1361] = 2,
    ACTIONS(215), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(217), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1403] = 2,
    ACTIONS(219), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(221), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1445] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_EQ,
    ACTIONS(229), 1,
      anon_sym_as,
    ACTIONS(231), 1,
      anon_sym_COLON_COLON,
    ACTIONS(225), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(223), 22,
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
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1495] = 2,
    ACTIONS(111), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(115), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1537] = 2,
    ACTIONS(233), 11,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(235), 26,
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
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_EQ,
    ACTIONS(225), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(223), 23,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(237), 23,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(241), 23,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1708] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(249), 9,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(245), 17,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1760] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(249), 9,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(245), 16,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1814] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(249), 10,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(245), 17,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1864] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(261), 1,
      anon_sym_AMP_AMP,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(249), 6,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(245), 11,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1926] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(249), 6,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(245), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(269), 23,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(273), 23,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2070] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(249), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(245), 16,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(245), 23,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(249), 10,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(245), 21,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2214] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(249), 10,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(245), 19,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(277), 23,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(281), 23,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2346] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(261), 1,
      anon_sym_AMP_AMP,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(289), 1,
      anon_sym_SEMI,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(287), 6,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(291), 8,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2411] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_viewer,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      anon_sym_mod,
    ACTIONS(311), 1,
      anon_sym_for,
    ACTIONS(313), 1,
      anon_sym_if,
    STATE(90), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(295), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(57), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(64), 8,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [2478] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_viewer,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_mod,
    ACTIONS(311), 1,
      anon_sym_for,
    ACTIONS(313), 1,
      anon_sym_if,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(295), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(57), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(66), 8,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [2545] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_viewer,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_mod,
    ACTIONS(311), 1,
      anon_sym_for,
    ACTIONS(313), 1,
      anon_sym_if,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(295), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(57), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(64), 8,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [2612] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_viewer,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_mod,
    ACTIONS(311), 1,
      anon_sym_for,
    ACTIONS(313), 1,
      anon_sym_if,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(295), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(57), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(60), 8,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [2679] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_viewer,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_mod,
    ACTIONS(311), 1,
      anon_sym_for,
    ACTIONS(313), 1,
      anon_sym_if,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(295), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(57), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(58), 8,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [2746] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_viewer,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_mod,
    ACTIONS(311), 1,
      anon_sym_for,
    ACTIONS(313), 1,
      anon_sym_if,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(295), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(57), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(64), 8,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [2813] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_STAR,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      sym_viewer,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
    ACTIONS(360), 1,
      anon_sym_mod,
    ACTIONS(363), 1,
      anon_sym_for,
    ACTIONS(366), 1,
      anon_sym_if,
    STATE(90), 1,
      sym_if_exp,
    ACTIONS(331), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(340), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(57), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(64), 8,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [2880] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_viewer,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_mod,
    ACTIONS(311), 1,
      anon_sym_for,
    ACTIONS(313), 1,
      anon_sym_if,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(295), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(57), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(63), 8,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [2947] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_STAR,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_viewer,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_mod,
    ACTIONS(311), 1,
      anon_sym_for,
    ACTIONS(313), 1,
      anon_sym_if,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(295), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(57), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(64), 8,
      sym__expression_statement,
      sym_as_identifier,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [3014] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(375), 2,
      sym_integer,
      sym_string,
    STATE(166), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(381), 17,
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
  [3052] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_EQ,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
    STATE(218), 1,
      sym_parameter,
    ACTIONS(225), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(223), 14,
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
  [3091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(387), 1,
      sym_viewer,
    STATE(146), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(389), 17,
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
  [3125] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      sym_viewer,
    STATE(195), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(389), 17,
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
  [3159] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(291), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(393), 3,
      sym_integer,
      sym_string,
      sym_character,
    ACTIONS(287), 4,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [3201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    STATE(171), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(389), 17,
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
  [3232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    STATE(178), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(389), 17,
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
  [3263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    STATE(209), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(389), 17,
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
  [3294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    STATE(186), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(389), 17,
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
  [3325] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_EQ,
    ACTIONS(397), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(223), 14,
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
  [3358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    ACTIONS(399), 2,
      sym_integer,
      sym_string,
    ACTIONS(403), 17,
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
  [3388] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(261), 1,
      anon_sym_AMP_AMP,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_body,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3438] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(261), 1,
      anon_sym_AMP_AMP,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_body,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3488] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(261), 1,
      anon_sym_AMP_AMP,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3535] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(261), 1,
      anon_sym_AMP_AMP,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3582] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(261), 1,
      anon_sym_AMP_AMP,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3629] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(261), 1,
      anon_sym_AMP_AMP,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(415), 1,
      anon_sym_SEMI,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3676] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(261), 1,
      anon_sym_AMP_AMP,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3723] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(257), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_CARET,
    ACTIONS(261), 1,
      anon_sym_AMP_AMP,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(419), 1,
      anon_sym_SEMI,
    ACTIONS(251), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(253), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3770] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_struct,
    STATE(213), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(421), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(83), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [3808] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_struct,
    STATE(198), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(427), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(85), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [3846] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_struct,
    STATE(192), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(429), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(82), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [3884] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_struct,
    STATE(201), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(431), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(81), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [3922] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_else,
    STATE(100), 1,
      sym_else_exp,
    ACTIONS(95), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(93), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 6,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(99), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    ACTIONS(121), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(117), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(99), 12,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(103), 12,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(437), 12,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 17,
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
  [4102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 6,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(103), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 6,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(107), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SEMI,
    ACTIONS(115), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(111), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(191), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(135), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(233), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(111), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(445), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(187), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(117), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 5,
      sym_identifier,
      sym_viewer,
      anon_sym_mod,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(151), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4371] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(449), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(44), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4402] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(451), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(45), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4433] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(453), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(52), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4464] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(455), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(53), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4495] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
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
    STATE(55), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4526] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(457), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(54), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4557] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(459), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(51), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4588] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(461), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(79), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4619] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(463), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(46), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4650] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(465), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(80), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4681] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(467), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(78), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4712] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(469), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(47), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4743] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(471), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(48), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4774] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(473), 1,
      anon_sym_STAR,
    ACTIONS(475), 1,
      sym_identifier,
    STATE(125), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(217), 2,
      sym_as_identifier,
      sym_body,
  [4795] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(477), 1,
      anon_sym_STAR,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(127), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(203), 2,
      sym_as_identifier,
      sym_body,
  [4816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    STATE(128), 2,
      sym__literal,
      aux_sym_macro_repeat1,
    ACTIONS(481), 3,
      sym_integer,
      sym_string,
      sym__punctuation,
  [4835] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
    STATE(123), 2,
      sym__literal,
      aux_sym_macro_repeat1,
    ACTIONS(487), 3,
      sym_integer,
      sym_string,
      sym__punctuation,
  [4854] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(477), 1,
      anon_sym_STAR,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(131), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(203), 2,
      sym_as_identifier,
      sym_body,
  [4875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(493), 1,
      anon_sym_STAR,
    ACTIONS(495), 1,
      sym_identifier,
    STATE(131), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(194), 2,
      sym_as_identifier,
      sym_body,
  [4909] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    STATE(128), 2,
      sym__literal,
      aux_sym_macro_repeat1,
    ACTIONS(497), 3,
      sym_integer,
      sym_string,
      sym__punctuation,
  [4928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(505), 2,
      anon_sym_STAR,
      anon_sym_LBRACE,
    STATE(131), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
  [4969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    STATE(139), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [4983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    STATE(144), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [4997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(135), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [5011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(139), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [5025] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
    ACTIONS(520), 1,
      anon_sym_SEMI,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(524), 1,
      anon_sym_COLON,
  [5041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(138), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [5055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(139), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [5069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    STATE(139), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [5083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(132), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [5097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    ACTIONS(537), 1,
      anon_sym_DASH_GT,
    STATE(24), 1,
      sym_body,
    STATE(188), 1,
      sym_return_type,
  [5113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
    ACTIONS(539), 1,
      anon_sym_SEMI,
    ACTIONS(541), 1,
      anon_sym_EQ,
    ACTIONS(543), 1,
      anon_sym_COLON,
  [5129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_struct,
    ACTIONS(545), 1,
      sym_identifier,
    ACTIONS(547), 1,
      sym_mutable,
    STATE(168), 1,
      sym_struct,
  [5145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(139), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [5159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_COLON,
    ACTIONS(549), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [5173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(555), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [5184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(561), 1,
      sym_identifier,
    STATE(158), 1,
      aux_sym_parameter_repeat1,
  [5197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      aux_sym_array_repeat1,
  [5210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [5219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [5228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(573), 1,
      sym_identifier,
    STATE(151), 1,
      aux_sym_parameter_repeat1,
  [5241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_integer,
    ACTIONS(578), 1,
      sym_identifier,
    STATE(190), 1,
      sym_range,
  [5254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_STAR,
      sym_identifier,
      anon_sym_LBRACE,
  [5263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    STATE(10), 1,
      sym_body,
  [5276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_SEMI,
    ACTIONS(584), 1,
      anon_sym_as,
    ACTIONS(586), 1,
      anon_sym_COLON_COLON,
  [5289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
  [5298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_integer,
    ACTIONS(588), 1,
      sym_identifier,
    STATE(183), 1,
      sym_range,
  [5311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym_identifier,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_parameter_repeat1,
  [5324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SEMI,
    ACTIONS(541), 1,
      anon_sym_EQ,
    ACTIONS(543), 1,
      anon_sym_COLON,
  [5337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      aux_sym_array_repeat1,
  [5350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
  [5359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COLON,
  [5368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(443), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_body,
  [5381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_as,
    ACTIONS(586), 1,
      anon_sym_COLON_COLON,
    ACTIONS(594), 1,
      anon_sym_SEMI,
  [5394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    ACTIONS(596), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_body,
  [5407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(598), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [5418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    ACTIONS(399), 2,
      sym_integer,
      sym_string,
  [5429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_SEMI,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(524), 1,
      anon_sym_COLON,
  [5442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_body,
  [5455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_struct,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(159), 1,
      sym_struct,
  [5468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(604), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [5479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_as,
    ACTIONS(586), 1,
      anon_sym_COLON_COLON,
    ACTIONS(608), 1,
      anon_sym_SEMI,
  [5492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      aux_sym_array_repeat1,
  [5505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [5513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [5529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
  [5539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SEMI,
    ACTIONS(623), 1,
      anon_sym_EQ,
  [5549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SEMI,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
  [5559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_body,
  [5569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_parameter,
  [5579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [5587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_body,
  [5597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [5605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 2,
      sym_integer,
      sym_string,
  [5613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    ACTIONS(637), 1,
      anon_sym_EQ,
  [5623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_mod,
    ACTIONS(641), 1,
      anon_sym_use,
  [5633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_body,
  [5643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_body,
  [5653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_body,
  [5663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 2,
      sym_integer,
      sym_string,
  [5671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_SEMI,
  [5678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_COLON,
  [5685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_SEMI,
  [5692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_LBRACE,
  [5699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_COLON_COLON,
  [5706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_DOT_DOT,
  [5713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_SEMI,
  [5720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RBRACK,
  [5727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_identifier,
  [5734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SEMI,
  [5741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_identifier,
  [5748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_SEMI,
  [5755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
  [5762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_in,
  [5769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACE,
  [5776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_LBRACE,
  [5783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_identifier,
  [5790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
  [5797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym_integer,
  [5804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym_identifier,
  [5811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACK,
  [5818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SEMI,
  [5825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym_identifier,
  [5832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_mod,
  [5839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym_identifier,
  [5846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_SEMI,
  [5853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_SEMI,
  [5860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_identifier,
  [5867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym_integer,
  [5874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      sym_identifier,
  [5881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_LBRACE,
  [5888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      sym_integer,
  [5895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      ts_builtin_sym_end,
  [5902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym_identifier,
  [5909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_in,
  [5916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 263,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 353,
  [SMALL_STATE(13)] = 395,
  [SMALL_STATE(14)] = 437,
  [SMALL_STATE(15)] = 479,
  [SMALL_STATE(16)] = 521,
  [SMALL_STATE(17)] = 563,
  [SMALL_STATE(18)] = 605,
  [SMALL_STATE(19)] = 647,
  [SMALL_STATE(20)] = 689,
  [SMALL_STATE(21)] = 731,
  [SMALL_STATE(22)] = 773,
  [SMALL_STATE(23)] = 815,
  [SMALL_STATE(24)] = 857,
  [SMALL_STATE(25)] = 899,
  [SMALL_STATE(26)] = 941,
  [SMALL_STATE(27)] = 983,
  [SMALL_STATE(28)] = 1025,
  [SMALL_STATE(29)] = 1067,
  [SMALL_STATE(30)] = 1109,
  [SMALL_STATE(31)] = 1151,
  [SMALL_STATE(32)] = 1193,
  [SMALL_STATE(33)] = 1235,
  [SMALL_STATE(34)] = 1277,
  [SMALL_STATE(35)] = 1319,
  [SMALL_STATE(36)] = 1361,
  [SMALL_STATE(37)] = 1403,
  [SMALL_STATE(38)] = 1445,
  [SMALL_STATE(39)] = 1495,
  [SMALL_STATE(40)] = 1537,
  [SMALL_STATE(41)] = 1579,
  [SMALL_STATE(42)] = 1624,
  [SMALL_STATE(43)] = 1666,
  [SMALL_STATE(44)] = 1708,
  [SMALL_STATE(45)] = 1760,
  [SMALL_STATE(46)] = 1814,
  [SMALL_STATE(47)] = 1864,
  [SMALL_STATE(48)] = 1926,
  [SMALL_STATE(49)] = 1986,
  [SMALL_STATE(50)] = 2028,
  [SMALL_STATE(51)] = 2070,
  [SMALL_STATE(52)] = 2126,
  [SMALL_STATE(53)] = 2168,
  [SMALL_STATE(54)] = 2214,
  [SMALL_STATE(55)] = 2262,
  [SMALL_STATE(56)] = 2304,
  [SMALL_STATE(57)] = 2346,
  [SMALL_STATE(58)] = 2411,
  [SMALL_STATE(59)] = 2478,
  [SMALL_STATE(60)] = 2545,
  [SMALL_STATE(61)] = 2612,
  [SMALL_STATE(62)] = 2679,
  [SMALL_STATE(63)] = 2746,
  [SMALL_STATE(64)] = 2813,
  [SMALL_STATE(65)] = 2880,
  [SMALL_STATE(66)] = 2947,
  [SMALL_STATE(67)] = 3014,
  [SMALL_STATE(68)] = 3052,
  [SMALL_STATE(69)] = 3091,
  [SMALL_STATE(70)] = 3125,
  [SMALL_STATE(71)] = 3159,
  [SMALL_STATE(72)] = 3201,
  [SMALL_STATE(73)] = 3232,
  [SMALL_STATE(74)] = 3263,
  [SMALL_STATE(75)] = 3294,
  [SMALL_STATE(76)] = 3325,
  [SMALL_STATE(77)] = 3358,
  [SMALL_STATE(78)] = 3388,
  [SMALL_STATE(79)] = 3438,
  [SMALL_STATE(80)] = 3488,
  [SMALL_STATE(81)] = 3535,
  [SMALL_STATE(82)] = 3582,
  [SMALL_STATE(83)] = 3629,
  [SMALL_STATE(84)] = 3676,
  [SMALL_STATE(85)] = 3723,
  [SMALL_STATE(86)] = 3770,
  [SMALL_STATE(87)] = 3808,
  [SMALL_STATE(88)] = 3846,
  [SMALL_STATE(89)] = 3884,
  [SMALL_STATE(90)] = 3922,
  [SMALL_STATE(91)] = 3952,
  [SMALL_STATE(92)] = 3977,
  [SMALL_STATE(93)] = 4004,
  [SMALL_STATE(94)] = 4029,
  [SMALL_STATE(95)] = 4054,
  [SMALL_STATE(96)] = 4079,
  [SMALL_STATE(97)] = 4102,
  [SMALL_STATE(98)] = 4127,
  [SMALL_STATE(99)] = 4152,
  [SMALL_STATE(100)] = 4179,
  [SMALL_STATE(101)] = 4203,
  [SMALL_STATE(102)] = 4227,
  [SMALL_STATE(103)] = 4251,
  [SMALL_STATE(104)] = 4275,
  [SMALL_STATE(105)] = 4299,
  [SMALL_STATE(106)] = 4323,
  [SMALL_STATE(107)] = 4347,
  [SMALL_STATE(108)] = 4371,
  [SMALL_STATE(109)] = 4402,
  [SMALL_STATE(110)] = 4433,
  [SMALL_STATE(111)] = 4464,
  [SMALL_STATE(112)] = 4495,
  [SMALL_STATE(113)] = 4526,
  [SMALL_STATE(114)] = 4557,
  [SMALL_STATE(115)] = 4588,
  [SMALL_STATE(116)] = 4619,
  [SMALL_STATE(117)] = 4650,
  [SMALL_STATE(118)] = 4681,
  [SMALL_STATE(119)] = 4712,
  [SMALL_STATE(120)] = 4743,
  [SMALL_STATE(121)] = 4774,
  [SMALL_STATE(122)] = 4795,
  [SMALL_STATE(123)] = 4816,
  [SMALL_STATE(124)] = 4835,
  [SMALL_STATE(125)] = 4854,
  [SMALL_STATE(126)] = 4875,
  [SMALL_STATE(127)] = 4888,
  [SMALL_STATE(128)] = 4909,
  [SMALL_STATE(129)] = 4928,
  [SMALL_STATE(130)] = 4941,
  [SMALL_STATE(131)] = 4954,
  [SMALL_STATE(132)] = 4969,
  [SMALL_STATE(133)] = 4983,
  [SMALL_STATE(134)] = 4997,
  [SMALL_STATE(135)] = 5011,
  [SMALL_STATE(136)] = 5025,
  [SMALL_STATE(137)] = 5041,
  [SMALL_STATE(138)] = 5055,
  [SMALL_STATE(139)] = 5069,
  [SMALL_STATE(140)] = 5083,
  [SMALL_STATE(141)] = 5097,
  [SMALL_STATE(142)] = 5113,
  [SMALL_STATE(143)] = 5129,
  [SMALL_STATE(144)] = 5145,
  [SMALL_STATE(145)] = 5159,
  [SMALL_STATE(146)] = 5173,
  [SMALL_STATE(147)] = 5184,
  [SMALL_STATE(148)] = 5197,
  [SMALL_STATE(149)] = 5210,
  [SMALL_STATE(150)] = 5219,
  [SMALL_STATE(151)] = 5228,
  [SMALL_STATE(152)] = 5241,
  [SMALL_STATE(153)] = 5254,
  [SMALL_STATE(154)] = 5263,
  [SMALL_STATE(155)] = 5276,
  [SMALL_STATE(156)] = 5289,
  [SMALL_STATE(157)] = 5298,
  [SMALL_STATE(158)] = 5311,
  [SMALL_STATE(159)] = 5324,
  [SMALL_STATE(160)] = 5337,
  [SMALL_STATE(161)] = 5350,
  [SMALL_STATE(162)] = 5359,
  [SMALL_STATE(163)] = 5368,
  [SMALL_STATE(164)] = 5381,
  [SMALL_STATE(165)] = 5394,
  [SMALL_STATE(166)] = 5407,
  [SMALL_STATE(167)] = 5418,
  [SMALL_STATE(168)] = 5429,
  [SMALL_STATE(169)] = 5442,
  [SMALL_STATE(170)] = 5455,
  [SMALL_STATE(171)] = 5468,
  [SMALL_STATE(172)] = 5479,
  [SMALL_STATE(173)] = 5492,
  [SMALL_STATE(174)] = 5505,
  [SMALL_STATE(175)] = 5513,
  [SMALL_STATE(176)] = 5521,
  [SMALL_STATE(177)] = 5529,
  [SMALL_STATE(178)] = 5539,
  [SMALL_STATE(179)] = 5549,
  [SMALL_STATE(180)] = 5559,
  [SMALL_STATE(181)] = 5569,
  [SMALL_STATE(182)] = 5579,
  [SMALL_STATE(183)] = 5587,
  [SMALL_STATE(184)] = 5597,
  [SMALL_STATE(185)] = 5605,
  [SMALL_STATE(186)] = 5613,
  [SMALL_STATE(187)] = 5623,
  [SMALL_STATE(188)] = 5633,
  [SMALL_STATE(189)] = 5643,
  [SMALL_STATE(190)] = 5653,
  [SMALL_STATE(191)] = 5663,
  [SMALL_STATE(192)] = 5671,
  [SMALL_STATE(193)] = 5678,
  [SMALL_STATE(194)] = 5685,
  [SMALL_STATE(195)] = 5692,
  [SMALL_STATE(196)] = 5699,
  [SMALL_STATE(197)] = 5706,
  [SMALL_STATE(198)] = 5713,
  [SMALL_STATE(199)] = 5720,
  [SMALL_STATE(200)] = 5727,
  [SMALL_STATE(201)] = 5734,
  [SMALL_STATE(202)] = 5741,
  [SMALL_STATE(203)] = 5748,
  [SMALL_STATE(204)] = 5755,
  [SMALL_STATE(205)] = 5762,
  [SMALL_STATE(206)] = 5769,
  [SMALL_STATE(207)] = 5776,
  [SMALL_STATE(208)] = 5783,
  [SMALL_STATE(209)] = 5790,
  [SMALL_STATE(210)] = 5797,
  [SMALL_STATE(211)] = 5804,
  [SMALL_STATE(212)] = 5811,
  [SMALL_STATE(213)] = 5818,
  [SMALL_STATE(214)] = 5825,
  [SMALL_STATE(215)] = 5832,
  [SMALL_STATE(216)] = 5839,
  [SMALL_STATE(217)] = 5846,
  [SMALL_STATE(218)] = 5853,
  [SMALL_STATE(219)] = 5860,
  [SMALL_STATE(220)] = 5867,
  [SMALL_STATE(221)] = 5874,
  [SMALL_STATE(222)] = 5881,
  [SMALL_STATE(223)] = 5888,
  [SMALL_STATE(224)] = 5895,
  [SMALL_STATE(225)] = 5902,
  [SMALL_STATE(226)] = 5909,
  [SMALL_STATE(227)] = 5916,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_exp, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_exp, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exp, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exp, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_exp, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_exp, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_exp, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_exp, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_type, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_type, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouped_expression, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouped_expression, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_re_assignment, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_re_assignment, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(112),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(71),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(117),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(57),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(38),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(167),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(64),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(215),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(62),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(219),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(227),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(118),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_identifier, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_identifier, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_identifier, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_identifier, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(128),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(128),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(196),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(145),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(193),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 4),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(191),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 5),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [693] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
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
