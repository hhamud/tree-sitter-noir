#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 268
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
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
  anon_sym_PLUS_EQ = 16,
  anon_sym_DASH_EQ = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_PERCENT = 20,
  anon_sym_BANG = 21,
  anon_sym_SEMI = 22,
  anon_sym_EQ = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  sym_integer = 26,
  sym_identifier = 27,
  anon_sym_as = 28,
  sym_string = 29,
  sym_character = 30,
  anon_sym_DOT_DOT = 31,
  anon_sym_LBRACK = 32,
  anon_sym_COMMA = 33,
  anon_sym_RBRACK = 34,
  sym_comment = 35,
  sym_mutable = 36,
  sym_viewer = 37,
  anon_sym_u8 = 38,
  anon_sym_i8 = 39,
  anon_sym_u16 = 40,
  anon_sym_i16 = 41,
  anon_sym_u32 = 42,
  anon_sym_i32 = 43,
  anon_sym_u64 = 44,
  anon_sym_i64 = 45,
  anon_sym_u128 = 46,
  anon_sym_i128 = 47,
  anon_sym_isize = 48,
  anon_sym_usize = 49,
  anon_sym_f32 = 50,
  anon_sym_f64 = 51,
  anon_sym_Field = 52,
  anon_sym_bool = 53,
  anon_sym_String = 54,
  anon_sym_comptime = 55,
  anon_sym_Self = 56,
  anon_sym_fn = 57,
  anon_sym_self = 58,
  anon_sym_COLON = 59,
  anon_sym_LBRACE = 60,
  anon_sym_RBRACE = 61,
  anon_sym_DASH_GT = 62,
  anon_sym_mod = 63,
  anon_sym_COLON_COLON = 64,
  anon_sym_use = 65,
  anon_sym_POUND = 66,
  sym__punctuation = 67,
  anon_sym_struct = 68,
  anon_sym_impl = 69,
  anon_sym_for = 70,
  anon_sym_in = 71,
  anon_sym_if = 72,
  anon_sym_else = 73,
  anon_sym_let = 74,
  sym_source_file = 75,
  sym__definition = 76,
  sym_binary_expression = 77,
  sym_unary_expression = 78,
  sym__expression_statement = 79,
  sym_re_assignment = 80,
  sym_grouped_expression = 81,
  sym__expression = 82,
  sym_as_identifier = 83,
  sym_range = 84,
  sym_array = 85,
  sym_single_type = 86,
  sym_array_type = 87,
  sym__type = 88,
  sym_function_definition = 89,
  sym_parameter = 90,
  sym_body = 91,
  sym_return_type = 92,
  sym_function_call = 93,
  sym_module = 94,
  sym_import_identifier = 95,
  sym_import = 96,
  sym_import_body = 97,
  sym_macro = 98,
  sym__literal = 99,
  sym_struct = 100,
  sym__field = 101,
  sym_struct_method = 102,
  sym_for_loop = 103,
  sym_if_exp = 104,
  sym_else_exp = 105,
  sym__if_else_exp = 106,
  sym_let_declaration = 107,
  aux_sym_source_file_repeat1 = 108,
  aux_sym_array_repeat1 = 109,
  aux_sym_parameter_repeat1 = 110,
  aux_sym_body_repeat1 = 111,
  aux_sym_import_repeat1 = 112,
  aux_sym_import_body_repeat1 = 113,
  aux_sym_macro_repeat1 = 114,
  aux_sym_struct_repeat1 = 115,
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
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
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
  [anon_sym_comptime] = "comptime",
  [anon_sym_Self] = "Self",
  [anon_sym_fn] = "fn",
  [anon_sym_self] = "self",
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
  [sym_import_body] = "body",
  [sym_macro] = "macro",
  [sym__literal] = "_literal",
  [sym_struct] = "struct",
  [sym__field] = "_field",
  [sym_struct_method] = "struct_method",
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
  [aux_sym_import_body_repeat1] = "import_body_repeat1",
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
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
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
  [anon_sym_comptime] = anon_sym_comptime,
  [anon_sym_Self] = anon_sym_Self,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_self] = anon_sym_self,
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
  [sym_import_body] = sym_body,
  [sym_macro] = sym_macro,
  [sym__literal] = sym__literal,
  [sym_struct] = sym_struct,
  [sym__field] = sym__field,
  [sym_struct_method] = sym_struct_method,
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
  [aux_sym_import_body_repeat1] = aux_sym_import_body_repeat1,
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
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
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
  [anon_sym_comptime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
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
  [sym_import_body] = {
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
  [sym_struct_method] = {
    .visible = true,
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
  [aux_sym_import_body_repeat1] = {
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 12,
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
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 60,
  [65] = 62,
  [66] = 60,
  [67] = 62,
  [68] = 62,
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
  [82] = 82,
  [83] = 42,
  [84] = 41,
  [85] = 82,
  [86] = 48,
  [87] = 5,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 8,
  [95] = 9,
  [96] = 12,
  [97] = 9,
  [98] = 12,
  [99] = 6,
  [100] = 7,
  [101] = 24,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 57,
  [110] = 51,
  [111] = 46,
  [112] = 38,
  [113] = 16,
  [114] = 40,
  [115] = 32,
  [116] = 29,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 123,
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
  [141] = 17,
  [142] = 142,
  [143] = 30,
  [144] = 31,
  [145] = 145,
  [146] = 146,
  [147] = 103,
  [148] = 148,
  [149] = 117,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 152,
  [159] = 151,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 163,
  [165] = 154,
  [166] = 155,
  [167] = 167,
  [168] = 31,
  [169] = 30,
  [170] = 170,
  [171] = 17,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 180,
  [191] = 191,
  [192] = 192,
  [193] = 181,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 197,
  [200] = 189,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 205,
  [208] = 208,
  [209] = 209,
  [210] = 204,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 213,
  [217] = 217,
  [218] = 211,
  [219] = 219,
  [220] = 209,
  [221] = 209,
  [222] = 222,
  [223] = 206,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 231,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 231,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 255,
  [257] = 228,
  [258] = 241,
  [259] = 238,
  [260] = 236,
  [261] = 261,
  [262] = 262,
  [263] = 236,
  [264] = 262,
  [265] = 265,
  [266] = 242,
  [267] = 250,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(150);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '%') ADVANCE(148);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') SKIP(119)
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '^') ADVANCE(131);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(32)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(32)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(33)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(33)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(43)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(38)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(44)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(41)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(21)
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(50)
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\r') SKIP(23)
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(25)
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(49)
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 30:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(150);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '%') ADVANCE(148);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '^') ADVANCE(131);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(150);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '%') ADVANCE(148);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(131);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == 'F') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'b') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',') ADVANCE(299);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == 'b') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 42:
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\\') SKIP(22)
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == '}') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '/') ADVANCE(239);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(234);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == '\\') SKIP(24)
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == '\\') SKIP(26)
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 53:
      if (lookahead == '1') ADVANCE(56);
      if (lookahead == '3') ADVANCE(57);
      if (lookahead == '6') ADVANCE(62);
      if (lookahead == '8') ADVANCE(248);
      if (lookahead == 'f') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 54:
      if (lookahead == '1') ADVANCE(59);
      if (lookahead == '3') ADVANCE(58);
      if (lookahead == '6') ADVANCE(63);
      if (lookahead == '8') ADVANCE(246);
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == '2') ADVANCE(270);
      END_STATE();
    case 56:
      if (lookahead == '2') ADVANCE(64);
      if (lookahead == '6') ADVANCE(252);
      END_STATE();
    case 57:
      if (lookahead == '2') ADVANCE(256);
      END_STATE();
    case 58:
      if (lookahead == '2') ADVANCE(254);
      END_STATE();
    case 59:
      if (lookahead == '2') ADVANCE(65);
      if (lookahead == '6') ADVANCE(250);
      END_STATE();
    case 60:
      if (lookahead == '3') ADVANCE(55);
      if (lookahead == '6') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 61:
      if (lookahead == '4') ADVANCE(272);
      END_STATE();
    case 62:
      if (lookahead == '4') ADVANCE(260);
      END_STATE();
    case 63:
      if (lookahead == '4') ADVANCE(258);
      END_STATE();
    case 64:
      if (lookahead == '8') ADVANCE(264);
      END_STATE();
    case 65:
      if (lookahead == '8') ADVANCE(262);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(295);
      END_STATE();
    case 67:
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 'f') ADVANCE(282);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(286);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 113:
      if (lookahead == 'z') ADVANCE(75);
      END_STATE();
    case 114:
      if (lookahead == 'z') ADVANCE(76);
      END_STATE();
    case 115:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(240);
      END_STATE();
    case 116:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 117:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 118:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 119:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(118)
      END_STATE();
    case 120:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(124)
      END_STATE();
    case 121:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(124)
      if (lookahead == '\r') SKIP(120)
      END_STATE();
    case 122:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(125)
      END_STATE();
    case 123:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(125)
      if (lookahead == '\r') SKIP(122)
      END_STATE();
    case 124:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(150);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '%') ADVANCE(148);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '+') ADVANCE(140);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == ';') ADVANCE(151);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') SKIP(121)
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '^') ADVANCE(131);
      if (lookahead == 'b') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 125:
      if (eof) ADVANCE(126);
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == 'F') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '\\') SKIP(123)
      if (lookahead == 'b') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(127);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(138);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '/') ADVANCE(239);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '3') ADVANCE(166);
      if (lookahead == '6') ADVANCE(172);
      if (lookahead == '8') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '3') ADVANCE(166);
      if (lookahead == '6') ADVANCE(172);
      if (lookahead == '8') ADVANCE(249);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(168);
      if (lookahead == '3') ADVANCE(167);
      if (lookahead == '6') ADVANCE(173);
      if (lookahead == '8') ADVANCE(247);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(168);
      if (lookahead == '3') ADVANCE(167);
      if (lookahead == '6') ADVANCE(173);
      if (lookahead == '8') ADVANCE(247);
      if (lookahead == 's') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(174);
      if (lookahead == '6') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(175);
      if (lookahead == '6') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(164);
      if (lookahead == '6') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(164);
      if (lookahead == '6') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(115);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_mutable);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_viewer);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_viewer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_u128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_i128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Field);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_comptime);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_comptime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_Self);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(295);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__punctuation);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_impl);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_impl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 124},
  [2] = {.lex_state = 124},
  [3] = {.lex_state = 124},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 125},
  [6] = {.lex_state = 124},
  [7] = {.lex_state = 125},
  [8] = {.lex_state = 124},
  [9] = {.lex_state = 124},
  [10] = {.lex_state = 124},
  [11] = {.lex_state = 125},
  [12] = {.lex_state = 125},
  [13] = {.lex_state = 124},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 124},
  [17] = {.lex_state = 124},
  [18] = {.lex_state = 124},
  [19] = {.lex_state = 124},
  [20] = {.lex_state = 124},
  [21] = {.lex_state = 124},
  [22] = {.lex_state = 124},
  [23] = {.lex_state = 124},
  [24] = {.lex_state = 124},
  [25] = {.lex_state = 124},
  [26] = {.lex_state = 124},
  [27] = {.lex_state = 124},
  [28] = {.lex_state = 31},
  [29] = {.lex_state = 124},
  [30] = {.lex_state = 124},
  [31] = {.lex_state = 124},
  [32] = {.lex_state = 124},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 124},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 124},
  [39] = {.lex_state = 124},
  [40] = {.lex_state = 124},
  [41] = {.lex_state = 124},
  [42] = {.lex_state = 124},
  [43] = {.lex_state = 124},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 124},
  [47] = {.lex_state = 124},
  [48] = {.lex_state = 124},
  [49] = {.lex_state = 31},
  [50] = {.lex_state = 124},
  [51] = {.lex_state = 124},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 124},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 31},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 31},
  [68] = {.lex_state = 31},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 31},
  [71] = {.lex_state = 124},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 124},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 124},
  [83] = {.lex_state = 31},
  [84] = {.lex_state = 31},
  [85] = {.lex_state = 124},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 124},
  [89] = {.lex_state = 124},
  [90] = {.lex_state = 124},
  [91] = {.lex_state = 124},
  [92] = {.lex_state = 124},
  [93] = {.lex_state = 124},
  [94] = {.lex_state = 31},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 31},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 31},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 31},
  [102] = {.lex_state = 34},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 34},
  [107] = {.lex_state = 34},
  [108] = {.lex_state = 34},
  [109] = {.lex_state = 31},
  [110] = {.lex_state = 31},
  [111] = {.lex_state = 31},
  [112] = {.lex_state = 31},
  [113] = {.lex_state = 31},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 31},
  [116] = {.lex_state = 31},
  [117] = {.lex_state = 31},
  [118] = {.lex_state = 35},
  [119] = {.lex_state = 35},
  [120] = {.lex_state = 35},
  [121] = {.lex_state = 35},
  [122] = {.lex_state = 35},
  [123] = {.lex_state = 35},
  [124] = {.lex_state = 35},
  [125] = {.lex_state = 35},
  [126] = {.lex_state = 35},
  [127] = {.lex_state = 35},
  [128] = {.lex_state = 35},
  [129] = {.lex_state = 35},
  [130] = {.lex_state = 35},
  [131] = {.lex_state = 43},
  [132] = {.lex_state = 43},
  [133] = {.lex_state = 43},
  [134] = {.lex_state = 38},
  [135] = {.lex_state = 43},
  [136] = {.lex_state = 43},
  [137] = {.lex_state = 38},
  [138] = {.lex_state = 43},
  [139] = {.lex_state = 43},
  [140] = {.lex_state = 38},
  [141] = {.lex_state = 43},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 43},
  [144] = {.lex_state = 43},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 42},
  [147] = {.lex_state = 43},
  [148] = {.lex_state = 50},
  [149] = {.lex_state = 43},
  [150] = {.lex_state = 43},
  [151] = {.lex_state = 43},
  [152] = {.lex_state = 43},
  [153] = {.lex_state = 41},
  [154] = {.lex_state = 36},
  [155] = {.lex_state = 43},
  [156] = {.lex_state = 41},
  [157] = {.lex_state = 41},
  [158] = {.lex_state = 43},
  [159] = {.lex_state = 43},
  [160] = {.lex_state = 41},
  [161] = {.lex_state = 41},
  [162] = {.lex_state = 41},
  [163] = {.lex_state = 43},
  [164] = {.lex_state = 43},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 43},
  [167] = {.lex_state = 43},
  [168] = {.lex_state = 41},
  [169] = {.lex_state = 41},
  [170] = {.lex_state = 41},
  [171] = {.lex_state = 41},
  [172] = {.lex_state = 41},
  [173] = {.lex_state = 43},
  [174] = {.lex_state = 124},
  [175] = {.lex_state = 51},
  [176] = {.lex_state = 124},
  [177] = {.lex_state = 36},
  [178] = {.lex_state = 124},
  [179] = {.lex_state = 49},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 36},
  [183] = {.lex_state = 124},
  [184] = {.lex_state = 124},
  [185] = {.lex_state = 124},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 49},
  [188] = {.lex_state = 36},
  [189] = {.lex_state = 43},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 49},
  [192] = {.lex_state = 41},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 36},
  [195] = {.lex_state = 124},
  [196] = {.lex_state = 43},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 41},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 43},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 124},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 52},
  [206] = {.lex_state = 124},
  [207] = {.lex_state = 52},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 43},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 43},
  [223] = {.lex_state = 124},
  [224] = {.lex_state = 43},
  [225] = {.lex_state = 124},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 43},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 124},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 43},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 43},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 43},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 43},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 43},
  [256] = {.lex_state = 43},
  [257] = {.lex_state = 43},
  [258] = {.lex_state = 43},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 32},
  [262] = {.lex_state = 43},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 43},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 43},
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
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
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
    [anon_sym_comptime] = ACTIONS(1),
    [anon_sym_Self] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
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
    [sym_source_file] = STATE(240),
    [sym__definition] = STATE(3),
    [sym_binary_expression] = STATE(90),
    [sym_unary_expression] = STATE(90),
    [sym__expression_statement] = STATE(3),
    [sym_re_assignment] = STATE(90),
    [sym_grouped_expression] = STATE(90),
    [sym__expression] = STATE(90),
    [sym_array] = STATE(90),
    [sym_single_type] = STATE(3),
    [sym_array_type] = STATE(3),
    [sym__type] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_module] = STATE(3),
    [sym_import] = STATE(3),
    [sym_macro] = STATE(3),
    [sym_struct] = STATE(3),
    [sym_struct_method] = STATE(3),
    [sym_for_loop] = STATE(3),
    [sym_if_exp] = STATE(5),
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
    [anon_sym_comptime] = ACTIONS(21),
    [anon_sym_Self] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_impl] = ACTIONS(35),
    [anon_sym_for] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_let] = ACTIONS(41),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym_binary_expression] = STATE(90),
    [sym_unary_expression] = STATE(90),
    [sym__expression_statement] = STATE(2),
    [sym_re_assignment] = STATE(90),
    [sym_grouped_expression] = STATE(90),
    [sym__expression] = STATE(90),
    [sym_array] = STATE(90),
    [sym_single_type] = STATE(2),
    [sym_array_type] = STATE(2),
    [sym__type] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_module] = STATE(2),
    [sym_import] = STATE(2),
    [sym_macro] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_struct_method] = STATE(2),
    [sym_for_loop] = STATE(2),
    [sym_if_exp] = STATE(5),
    [sym__if_else_exp] = STATE(2),
    [sym_let_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(48),
    [sym_integer] = ACTIONS(51),
    [sym_identifier] = ACTIONS(54),
    [sym_string] = ACTIONS(51),
    [sym_character] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_comment] = ACTIONS(60),
    [sym_viewer] = ACTIONS(63),
    [anon_sym_u8] = ACTIONS(66),
    [anon_sym_i8] = ACTIONS(66),
    [anon_sym_u16] = ACTIONS(66),
    [anon_sym_i16] = ACTIONS(66),
    [anon_sym_u32] = ACTIONS(66),
    [anon_sym_i32] = ACTIONS(66),
    [anon_sym_u64] = ACTIONS(66),
    [anon_sym_i64] = ACTIONS(66),
    [anon_sym_u128] = ACTIONS(66),
    [anon_sym_i128] = ACTIONS(66),
    [anon_sym_isize] = ACTIONS(66),
    [anon_sym_usize] = ACTIONS(66),
    [anon_sym_f32] = ACTIONS(66),
    [anon_sym_f64] = ACTIONS(66),
    [anon_sym_Field] = ACTIONS(66),
    [anon_sym_bool] = ACTIONS(66),
    [anon_sym_String] = ACTIONS(66),
    [anon_sym_comptime] = ACTIONS(66),
    [anon_sym_Self] = ACTIONS(69),
    [anon_sym_fn] = ACTIONS(72),
    [anon_sym_mod] = ACTIONS(75),
    [anon_sym_use] = ACTIONS(78),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_struct] = ACTIONS(84),
    [anon_sym_impl] = ACTIONS(87),
    [anon_sym_for] = ACTIONS(90),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_let] = ACTIONS(96),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym_binary_expression] = STATE(90),
    [sym_unary_expression] = STATE(90),
    [sym__expression_statement] = STATE(2),
    [sym_re_assignment] = STATE(90),
    [sym_grouped_expression] = STATE(90),
    [sym__expression] = STATE(90),
    [sym_array] = STATE(90),
    [sym_single_type] = STATE(2),
    [sym_array_type] = STATE(2),
    [sym__type] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_module] = STATE(2),
    [sym_import] = STATE(2),
    [sym_macro] = STATE(2),
    [sym_struct] = STATE(2),
    [sym_struct_method] = STATE(2),
    [sym_for_loop] = STATE(2),
    [sym_if_exp] = STATE(5),
    [sym__if_else_exp] = STATE(2),
    [sym_let_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_string] = ACTIONS(11),
    [sym_character] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_comment] = ACTIONS(101),
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
    [anon_sym_comptime] = ACTIONS(21),
    [anon_sym_Self] = ACTIONS(23),
    [anon_sym_fn] = ACTIONS(25),
    [anon_sym_mod] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_struct] = ACTIONS(33),
    [anon_sym_impl] = ACTIONS(35),
    [anon_sym_for] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_let] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_as,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    ACTIONS(105), 16,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(103), 21,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [57] = 4,
    ACTIONS(119), 1,
      anon_sym_else,
    STATE(51), 1,
      sym_else_exp,
    ACTIONS(115), 11,
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
    ACTIONS(117), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [108] = 3,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(121), 11,
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
    ACTIONS(125), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [156] = 2,
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
    ACTIONS(129), 30,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
      anon_sym_let,
  [202] = 3,
    ACTIONS(133), 1,
      anon_sym_SEMI,
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
    ACTIONS(135), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [250] = 2,
    ACTIONS(137), 12,
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
    ACTIONS(139), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [296] = 3,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 11,
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
    ACTIONS(143), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [344] = 2,
    ACTIONS(137), 11,
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
    ACTIONS(139), 30,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
      anon_sym_let,
  [390] = 2,
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
    ACTIONS(149), 30,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
      anon_sym_let,
  [436] = 2,
    ACTIONS(147), 12,
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
    ACTIONS(149), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(105), 16,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(103), 23,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
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
  [532] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(153), 13,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(151), 17,
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
  [589] = 2,
    ACTIONS(165), 11,
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
    ACTIONS(167), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [634] = 2,
    ACTIONS(141), 11,
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
    ACTIONS(143), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [679] = 2,
    ACTIONS(169), 11,
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
    ACTIONS(171), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [724] = 2,
    ACTIONS(173), 11,
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
    ACTIONS(175), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [769] = 2,
    ACTIONS(177), 11,
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
    ACTIONS(179), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [814] = 2,
    ACTIONS(181), 11,
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
    ACTIONS(183), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [859] = 2,
    ACTIONS(185), 11,
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
    ACTIONS(187), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [904] = 2,
    ACTIONS(189), 11,
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
    ACTIONS(191), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [949] = 2,
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
    ACTIONS(135), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [994] = 2,
    ACTIONS(193), 11,
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
    ACTIONS(195), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1039] = 2,
    ACTIONS(197), 11,
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
    ACTIONS(199), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1084] = 2,
    ACTIONS(201), 11,
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
    ACTIONS(203), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 16,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(205), 23,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
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
  [1176] = 2,
    ACTIONS(209), 11,
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
    ACTIONS(211), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1221] = 2,
    ACTIONS(213), 11,
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
    ACTIONS(215), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1266] = 2,
    ACTIONS(217), 11,
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
    ACTIONS(219), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1311] = 2,
    ACTIONS(221), 11,
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
    ACTIONS(223), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 16,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(225), 23,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
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
  [1403] = 2,
    ACTIONS(229), 11,
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
    ACTIONS(231), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1448] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 9,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(151), 12,
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
  [1515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 16,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(243), 23,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
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
  [1562] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(247), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 9,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(151), 11,
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
  [1631] = 2,
    ACTIONS(249), 11,
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
    ACTIONS(251), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1676] = 2,
    ACTIONS(253), 11,
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
    ACTIONS(255), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1721] = 2,
    ACTIONS(121), 11,
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
    ACTIONS(125), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1766] = 2,
    ACTIONS(257), 11,
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
    ACTIONS(259), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1811] = 2,
    ACTIONS(261), 11,
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
    ACTIONS(263), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1856] = 2,
    ACTIONS(265), 11,
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
    ACTIONS(267), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [1901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 16,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
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
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
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
  [1948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 16,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
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
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
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
  [1995] = 2,
    ACTIONS(277), 11,
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
    ACTIONS(279), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [2040] = 2,
    ACTIONS(281), 11,
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
    ACTIONS(283), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [2085] = 2,
    ACTIONS(285), 11,
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
    ACTIONS(287), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [2130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 16,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(289), 23,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
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
  [2177] = 2,
    ACTIONS(293), 11,
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
    ACTIONS(295), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [2222] = 2,
    ACTIONS(297), 11,
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
    ACTIONS(299), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [2267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 16,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(151), 23,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
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
  [2314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(153), 15,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(151), 21,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
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
  [2365] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(153), 13,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(151), 19,
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
  [2420] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(153), 11,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(151), 16,
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
  [2483] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(153), 12,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(151), 17,
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
  [2542] = 2,
    ACTIONS(301), 11,
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
    ACTIONS(303), 29,
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
      anon_sym_comptime,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_impl,
      anon_sym_for,
      anon_sym_if,
      anon_sym_let,
  [2587] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(153), 12,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(151), 16,
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
  [2648] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(247), 1,
      anon_sym_AMP_AMP,
    ACTIONS(305), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(311), 8,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(307), 9,
      anon_sym_BANG,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
  [2720] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      sym_viewer,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(327), 1,
      anon_sym_fn,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 1,
      anon_sym_mod,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(337), 1,
      anon_sym_for,
    ACTIONS(339), 1,
      anon_sym_if,
    STATE(87), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(315), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(59), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(63), 10,
      sym__expression_statement,
      sym_as_identifier,
      sym_function_definition,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_struct,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [2798] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      sym_viewer,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(327), 1,
      anon_sym_fn,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_mod,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(337), 1,
      anon_sym_for,
    ACTIONS(339), 1,
      anon_sym_if,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(315), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(59), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(63), 10,
      sym__expression_statement,
      sym_as_identifier,
      sym_function_definition,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_struct,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [2876] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      sym_viewer,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(327), 1,
      anon_sym_fn,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_mod,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(337), 1,
      anon_sym_for,
    ACTIONS(339), 1,
      anon_sym_if,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(315), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(59), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(61), 10,
      sym__expression_statement,
      sym_as_identifier,
      sym_function_definition,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_struct,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [2954] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_STAR,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(362), 1,
      anon_sym_LBRACK,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      sym_viewer,
    ACTIONS(371), 1,
      anon_sym_Self,
    ACTIONS(374), 1,
      anon_sym_fn,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_mod,
    ACTIONS(385), 1,
      anon_sym_struct,
    ACTIONS(388), 1,
      anon_sym_for,
    ACTIONS(391), 1,
      anon_sym_if,
    STATE(87), 1,
      sym_if_exp,
    ACTIONS(347), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(356), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(59), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(63), 10,
      sym__expression_statement,
      sym_as_identifier,
      sym_function_definition,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_struct,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [3032] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      sym_viewer,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(327), 1,
      anon_sym_fn,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_mod,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(337), 1,
      anon_sym_for,
    ACTIONS(339), 1,
      anon_sym_if,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(315), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(59), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(63), 10,
      sym__expression_statement,
      sym_as_identifier,
      sym_function_definition,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_struct,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [3110] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      sym_viewer,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(327), 1,
      anon_sym_fn,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_mod,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(337), 1,
      anon_sym_for,
    ACTIONS(339), 1,
      anon_sym_if,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(315), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(59), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(64), 10,
      sym__expression_statement,
      sym_as_identifier,
      sym_function_definition,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_struct,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [3188] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      sym_viewer,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(327), 1,
      anon_sym_fn,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_mod,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(337), 1,
      anon_sym_for,
    ACTIONS(339), 1,
      anon_sym_if,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(315), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(59), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(63), 10,
      sym__expression_statement,
      sym_as_identifier,
      sym_function_definition,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_struct,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [3266] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      sym_viewer,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(327), 1,
      anon_sym_fn,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_mod,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(337), 1,
      anon_sym_for,
    ACTIONS(339), 1,
      anon_sym_if,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(315), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(59), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(60), 10,
      sym__expression_statement,
      sym_as_identifier,
      sym_function_definition,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_struct,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [3344] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_STAR,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(323), 1,
      sym_viewer,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(327), 1,
      anon_sym_fn,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_mod,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(337), 1,
      anon_sym_for,
    ACTIONS(339), 1,
      anon_sym_if,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_if_exp,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(315), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(59), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    STATE(66), 10,
      sym__expression_statement,
      sym_as_identifier,
      sym_function_definition,
      sym_body,
      sym_module,
      sym_import_identifier,
      sym_struct,
      sym_for_loop,
      sym__if_else_exp,
      aux_sym_body_repeat1,
  [3422] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(414), 1,
      anon_sym_LBRACK,
    ACTIONS(410), 2,
      sym_integer,
      sym_string,
    STATE(196), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(416), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [3462] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(311), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(418), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(28), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
    ACTIONS(307), 7,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
  [3507] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_parameter,
    ACTIONS(105), 7,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(103), 14,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_SEMI,
  [3548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACK,
    ACTIONS(424), 1,
      sym_viewer,
    STATE(233), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(426), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [3584] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    ACTIONS(430), 1,
      sym_viewer,
    STATE(172), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(432), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [3620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    ACTIONS(434), 1,
      sym_viewer,
    STATE(157), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(432), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [3656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACK,
    STATE(219), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(426), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [3689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACK,
    STATE(212), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(426), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [3722] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 7,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(103), 14,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_SEMI,
  [3757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(153), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(432), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [3790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACK,
    STATE(244), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(426), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [3823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(157), 3,
      sym_single_type,
      sym_array_type,
      sym__type,
    ACTIONS(432), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [3856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    ACTIONS(436), 2,
      sym_integer,
      sym_string,
    ACTIONS(440), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [3888] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(247), 1,
      anon_sym_AMP_AMP,
    ACTIONS(305), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(442), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_body,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(261), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(257), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4002] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(247), 1,
      anon_sym_AMP_AMP,
    ACTIONS(305), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_body,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(285), 14,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_integer,
      sym_string,
      sym_character,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4086] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_else,
    STATE(110), 1,
      sym_else_exp,
    ACTIONS(117), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(115), 11,
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
  [4119] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(247), 1,
      anon_sym_AMP_AMP,
    ACTIONS(305), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(448), 1,
      anon_sym_SEMI,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4170] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(247), 1,
      anon_sym_AMP_AMP,
    ACTIONS(305), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(450), 1,
      anon_sym_SEMI,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4221] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(247), 1,
      anon_sym_AMP_AMP,
    ACTIONS(305), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4272] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(247), 1,
      anon_sym_AMP_AMP,
    ACTIONS(305), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(454), 1,
      anon_sym_SEMI,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4323] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(247), 1,
      anon_sym_AMP_AMP,
    ACTIONS(305), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4374] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SLASH,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    ACTIONS(237), 1,
      anon_sym_CARET,
    ACTIONS(247), 1,
      anon_sym_AMP_AMP,
    ACTIONS(305), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(458), 1,
      anon_sym_SEMI,
    ACTIONS(155), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(161), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    ACTIONS(135), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(131), 11,
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
  [4455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 9,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(137), 11,
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
  [4483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 9,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(147), 11,
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
  [4511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(137), 12,
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
  [4539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(147), 12,
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
  [4567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_SEMI,
    ACTIONS(125), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(121), 11,
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
  [4597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 9,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(127), 11,
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
  [4625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(131), 11,
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
  [4652] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(226), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(464), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(88), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(468), 11,
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
  [4720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [4745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 19,
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
      anon_sym_comptime,
      anon_sym_Self,
  [4770] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(246), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(476), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(93), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4811] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(265), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(478), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(89), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4852] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(249), 2,
      sym_function_call,
      sym_struct,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(480), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(91), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [4893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(301), 11,
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
  [4920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(297), 11,
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
  [4947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(277), 11,
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
  [4974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(249), 11,
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
  [5001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(165), 11,
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
  [5028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(121), 11,
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
  [5055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(221), 11,
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
  [5082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(209), 11,
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
  [5109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 8,
      sym_identifier,
      sym_viewer,
      anon_sym_Self,
      anon_sym_fn,
      anon_sym_mod,
      anon_sym_struct,
      anon_sym_for,
      anon_sym_if,
    ACTIONS(482), 11,
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
  [5136] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(486), 3,
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
  [5167] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(488), 3,
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
  [5198] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(490), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(92), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [5229] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(492), 3,
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
  [5260] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(494), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(35), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [5291] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(496), 3,
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
  [5322] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(498), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(37), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [5353] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(500), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(15), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [5384] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(502), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(58), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [5415] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(504), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(56), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [5446] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(418), 3,
      sym_integer,
      sym_string,
      sym_character,
    STATE(28), 6,
      sym_binary_expression,
      sym_unary_expression,
      sym_re_assignment,
      sym_grouped_expression,
      sym__expression,
      sym_array,
  [5477] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(506), 3,
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
  [5508] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(7), 3,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(508), 3,
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
  [5539] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_STAR,
    ACTIONS(512), 1,
      sym_identifier,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(138), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(234), 2,
      sym_as_identifier,
      sym_import_body,
  [5560] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(516), 2,
      anon_sym_STAR,
      anon_sym_COMMA,
    STATE(139), 3,
      sym_as_identifier,
      sym_import_identifier,
      aux_sym_import_body_repeat1,
  [5579] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    ACTIONS(522), 1,
      anon_sym_STAR,
    ACTIONS(524), 1,
      sym_identifier,
    STATE(136), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(227), 2,
      sym_as_identifier,
      sym_import_body,
  [5600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    STATE(137), 2,
      sym__literal,
      aux_sym_macro_repeat1,
    ACTIONS(526), 3,
      sym_integer,
      sym_string,
      sym__punctuation,
  [5619] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(532), 2,
      anon_sym_STAR,
      anon_sym_COMMA,
    STATE(135), 3,
      sym_as_identifier,
      sym_import_identifier,
      aux_sym_import_body_repeat1,
  [5638] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_STAR,
    ACTIONS(512), 1,
      sym_identifier,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(150), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(234), 2,
      sym_as_identifier,
      sym_import_body,
  [5659] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_identifier,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    STATE(137), 2,
      sym__literal,
      aux_sym_macro_repeat1,
    ACTIONS(540), 3,
      sym_integer,
      sym_string,
      sym__punctuation,
  [5678] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_STAR,
    ACTIONS(550), 1,
      sym_identifier,
    STATE(150), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
    STATE(232), 2,
      sym_as_identifier,
      sym_import_body,
  [5699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_identifier,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    ACTIONS(552), 2,
      anon_sym_STAR,
      anon_sym_COMMA,
    STATE(135), 3,
      sym_as_identifier,
      sym_import_identifier,
      aux_sym_import_body_repeat1,
  [5718] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym_identifier,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    STATE(134), 2,
      sym__literal,
      aux_sym_macro_repeat1,
    ACTIONS(556), 3,
      sym_integer,
      sym_string,
      sym__punctuation,
  [5737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_identifier,
    ACTIONS(566), 1,
      anon_sym_as,
    ACTIONS(568), 1,
      anon_sym_COLON_COLON,
    ACTIONS(562), 3,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5791] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      sym_identifier,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      sym_mutable,
    STATE(161), 1,
      aux_sym_parameter_repeat1,
  [5810] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_identifier,
    ACTIONS(576), 1,
      sym_mutable,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(580), 1,
      anon_sym_self,
    STATE(156), 1,
      aux_sym_parameter_repeat1,
  [5829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 5,
      anon_sym_STAR,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5840] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(582), 1,
      sym_identifier,
    ACTIONS(584), 1,
      sym_mutable,
    STATE(184), 1,
      sym_struct,
  [5859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 5,
      anon_sym_STAR,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym_identifier,
    ACTIONS(586), 2,
      anon_sym_STAR,
      anon_sym_LBRACE,
    STATE(150), 2,
      sym_import_identifier,
      aux_sym_import_repeat1,
  [5885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(152), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [5899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    STATE(173), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [5913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(599), 2,
      sym_identifier,
      sym_mutable,
  [5927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      anon_sym_DASH_GT,
    STATE(29), 1,
      sym_body,
    STATE(216), 1,
      sym_return_type,
  [5943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(173), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [5957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      sym_identifier,
    ACTIONS(576), 1,
      sym_mutable,
    STATE(162), 1,
      aux_sym_parameter_repeat1,
  [5973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    ACTIONS(611), 2,
      sym_identifier,
      sym_mutable,
  [5987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    STATE(173), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [6001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(158), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [6015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_identifier,
    ACTIONS(576), 1,
      sym_mutable,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_parameter_repeat1,
  [6031] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_identifier,
    ACTIONS(576), 1,
      sym_mutable,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      aux_sym_parameter_repeat1,
  [6047] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(624), 1,
      sym_mutable,
    STATE(162), 1,
      aux_sym_parameter_repeat1,
  [6063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    STATE(155), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [6077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    STATE(166), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [6091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(605), 1,
      anon_sym_DASH_GT,
    STATE(116), 1,
      sym_body,
    STATE(213), 1,
      sym_return_type,
  [6107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(173), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [6121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_COLON,
    ACTIONS(631), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [6135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(219), 2,
      sym_identifier,
      sym_mutable,
  [6147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(215), 2,
      sym_identifier,
      sym_mutable,
  [6159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_identifier,
    ACTIONS(576), 1,
      sym_mutable,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      aux_sym_parameter_repeat1,
  [6175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(143), 2,
      sym_identifier,
      sym_mutable,
  [6187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(641), 2,
      sym_identifier,
      sym_mutable,
  [6201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      sym_identifier,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    STATE(173), 2,
      sym__field,
      aux_sym_struct_repeat1,
  [6215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    ACTIONS(652), 1,
      anon_sym_EQ,
    ACTIONS(654), 1,
      anon_sym_COLON,
  [6231] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_Self,
    ACTIONS(335), 1,
      anon_sym_struct,
    ACTIONS(656), 1,
      sym_identifier,
    STATE(178), 1,
      sym_struct,
  [6247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(658), 1,
      anon_sym_SEMI,
    ACTIONS(660), 1,
      anon_sym_EQ,
    ACTIONS(662), 1,
      anon_sym_COLON,
  [6263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [6272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    ACTIONS(652), 1,
      anon_sym_EQ,
    ACTIONS(654), 1,
      anon_sym_COLON,
  [6285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_COLON_COLON,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    ACTIONS(668), 1,
      anon_sym_as,
  [6298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    ACTIONS(670), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym_body,
  [6311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    STATE(46), 1,
      sym_body,
  [6324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [6333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      aux_sym_array_repeat1,
  [6346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_SEMI,
    ACTIONS(660), 1,
      anon_sym_EQ,
    ACTIONS(662), 1,
      anon_sym_COLON,
  [6359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      aux_sym_array_repeat1,
  [6372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    ACTIONS(436), 2,
      sym_integer,
      sym_string,
  [6383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_COLON_COLON,
    ACTIONS(668), 1,
      anon_sym_as,
    ACTIONS(685), 1,
      anon_sym_SEMI,
  [6396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [6405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym_integer,
    ACTIONS(691), 1,
      sym_identifier,
    STATE(204), 1,
      sym_range,
  [6418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(693), 1,
      anon_sym_SEMI,
    STATE(94), 1,
      sym_body,
  [6431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_COLON_COLON,
    ACTIONS(668), 1,
      anon_sym_as,
    ACTIONS(695), 1,
      anon_sym_SEMI,
  [6444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    ACTIONS(611), 2,
      sym_identifier,
      sym_mutable,
  [6455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
    STATE(111), 1,
      sym_body,
  [6468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_DASH_GT,
  [6477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      aux_sym_array_repeat1,
  [6490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(701), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [6501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_body,
  [6514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    ACTIONS(599), 2,
      sym_identifier,
      sym_mutable,
  [6525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    ACTIONS(460), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_body,
  [6538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      sym_integer,
    ACTIONS(705), 1,
      sym_identifier,
    STATE(210), 1,
      sym_range,
  [6551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    ACTIONS(709), 2,
      sym_identifier,
      sym_mutable,
  [6562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      sym_integer,
      sym_string,
  [6578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_body,
  [6588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 2,
      sym_identifier,
      anon_sym_Self,
  [6596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_parameter,
  [6606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 2,
      sym_identifier,
      anon_sym_Self,
  [6614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 2,
      sym_integer,
      sym_string,
  [6622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SEMI,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
  [6632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_body,
  [6642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_body,
  [6652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    ACTIONS(725), 1,
      anon_sym_EQ,
  [6662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_body,
  [6672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_mod,
    ACTIONS(729), 1,
      anon_sym_use,
  [6682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [6690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_body,
  [6700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_body,
  [6710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_body,
  [6720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_SEMI,
    ACTIONS(735), 1,
      anon_sym_EQ,
  [6730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    ACTIONS(739), 1,
      anon_sym_RBRACK,
  [6740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_SEMI,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
  [6750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [6758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_parameter,
  [6768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 2,
      sym_integer,
      sym_identifier,
  [6776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COLON,
  [6783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_SEMI,
  [6790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SEMI,
  [6797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_identifier,
  [6804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_DOT_DOT,
  [6811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_SEMI,
  [6818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_RBRACK,
  [6825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_SEMI,
  [6832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
  [6839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_SEMI,
  [6846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_COLON,
  [6853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_integer,
  [6860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym_identifier,
  [6867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_LBRACE,
  [6874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_mod,
  [6881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      ts_builtin_sym_end,
  [6888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      sym_identifier,
  [6895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_in,
  [6902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
  [6909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_LBRACE,
  [6916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
  [6923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SEMI,
  [6930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_SEMI,
  [6937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
  [6944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_SEMI,
  [6951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_identifier,
  [6958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACK,
  [6965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_identifier,
  [6972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_SEMI,
  [6979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_LBRACK,
  [6986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym_identifier,
  [6993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      sym_identifier,
  [7000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym_identifier,
  [7007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
  [7014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
  [7021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      sym_integer,
  [7028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_COLON_COLON,
  [7035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_identifier,
  [7042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      sym_integer,
  [7049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      sym_identifier,
  [7056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_SEMI,
  [7063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_in,
  [7070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 250,
  [SMALL_STATE(10)] = 296,
  [SMALL_STATE(11)] = 344,
  [SMALL_STATE(12)] = 390,
  [SMALL_STATE(13)] = 436,
  [SMALL_STATE(14)] = 482,
  [SMALL_STATE(15)] = 532,
  [SMALL_STATE(16)] = 589,
  [SMALL_STATE(17)] = 634,
  [SMALL_STATE(18)] = 679,
  [SMALL_STATE(19)] = 724,
  [SMALL_STATE(20)] = 769,
  [SMALL_STATE(21)] = 814,
  [SMALL_STATE(22)] = 859,
  [SMALL_STATE(23)] = 904,
  [SMALL_STATE(24)] = 949,
  [SMALL_STATE(25)] = 994,
  [SMALL_STATE(26)] = 1039,
  [SMALL_STATE(27)] = 1084,
  [SMALL_STATE(28)] = 1129,
  [SMALL_STATE(29)] = 1176,
  [SMALL_STATE(30)] = 1221,
  [SMALL_STATE(31)] = 1266,
  [SMALL_STATE(32)] = 1311,
  [SMALL_STATE(33)] = 1356,
  [SMALL_STATE(34)] = 1403,
  [SMALL_STATE(35)] = 1448,
  [SMALL_STATE(36)] = 1515,
  [SMALL_STATE(37)] = 1562,
  [SMALL_STATE(38)] = 1631,
  [SMALL_STATE(39)] = 1676,
  [SMALL_STATE(40)] = 1721,
  [SMALL_STATE(41)] = 1766,
  [SMALL_STATE(42)] = 1811,
  [SMALL_STATE(43)] = 1856,
  [SMALL_STATE(44)] = 1901,
  [SMALL_STATE(45)] = 1948,
  [SMALL_STATE(46)] = 1995,
  [SMALL_STATE(47)] = 2040,
  [SMALL_STATE(48)] = 2085,
  [SMALL_STATE(49)] = 2130,
  [SMALL_STATE(50)] = 2177,
  [SMALL_STATE(51)] = 2222,
  [SMALL_STATE(52)] = 2267,
  [SMALL_STATE(53)] = 2314,
  [SMALL_STATE(54)] = 2365,
  [SMALL_STATE(55)] = 2420,
  [SMALL_STATE(56)] = 2483,
  [SMALL_STATE(57)] = 2542,
  [SMALL_STATE(58)] = 2587,
  [SMALL_STATE(59)] = 2648,
  [SMALL_STATE(60)] = 2720,
  [SMALL_STATE(61)] = 2798,
  [SMALL_STATE(62)] = 2876,
  [SMALL_STATE(63)] = 2954,
  [SMALL_STATE(64)] = 3032,
  [SMALL_STATE(65)] = 3110,
  [SMALL_STATE(66)] = 3188,
  [SMALL_STATE(67)] = 3266,
  [SMALL_STATE(68)] = 3344,
  [SMALL_STATE(69)] = 3422,
  [SMALL_STATE(70)] = 3462,
  [SMALL_STATE(71)] = 3507,
  [SMALL_STATE(72)] = 3548,
  [SMALL_STATE(73)] = 3584,
  [SMALL_STATE(74)] = 3620,
  [SMALL_STATE(75)] = 3656,
  [SMALL_STATE(76)] = 3689,
  [SMALL_STATE(77)] = 3722,
  [SMALL_STATE(78)] = 3757,
  [SMALL_STATE(79)] = 3790,
  [SMALL_STATE(80)] = 3823,
  [SMALL_STATE(81)] = 3856,
  [SMALL_STATE(82)] = 3888,
  [SMALL_STATE(83)] = 3942,
  [SMALL_STATE(84)] = 3972,
  [SMALL_STATE(85)] = 4002,
  [SMALL_STATE(86)] = 4056,
  [SMALL_STATE(87)] = 4086,
  [SMALL_STATE(88)] = 4119,
  [SMALL_STATE(89)] = 4170,
  [SMALL_STATE(90)] = 4221,
  [SMALL_STATE(91)] = 4272,
  [SMALL_STATE(92)] = 4323,
  [SMALL_STATE(93)] = 4374,
  [SMALL_STATE(94)] = 4425,
  [SMALL_STATE(95)] = 4455,
  [SMALL_STATE(96)] = 4483,
  [SMALL_STATE(97)] = 4511,
  [SMALL_STATE(98)] = 4539,
  [SMALL_STATE(99)] = 4567,
  [SMALL_STATE(100)] = 4597,
  [SMALL_STATE(101)] = 4625,
  [SMALL_STATE(102)] = 4652,
  [SMALL_STATE(103)] = 4693,
  [SMALL_STATE(104)] = 4720,
  [SMALL_STATE(105)] = 4745,
  [SMALL_STATE(106)] = 4770,
  [SMALL_STATE(107)] = 4811,
  [SMALL_STATE(108)] = 4852,
  [SMALL_STATE(109)] = 4893,
  [SMALL_STATE(110)] = 4920,
  [SMALL_STATE(111)] = 4947,
  [SMALL_STATE(112)] = 4974,
  [SMALL_STATE(113)] = 5001,
  [SMALL_STATE(114)] = 5028,
  [SMALL_STATE(115)] = 5055,
  [SMALL_STATE(116)] = 5082,
  [SMALL_STATE(117)] = 5109,
  [SMALL_STATE(118)] = 5136,
  [SMALL_STATE(119)] = 5167,
  [SMALL_STATE(120)] = 5198,
  [SMALL_STATE(121)] = 5229,
  [SMALL_STATE(122)] = 5260,
  [SMALL_STATE(123)] = 5291,
  [SMALL_STATE(124)] = 5322,
  [SMALL_STATE(125)] = 5353,
  [SMALL_STATE(126)] = 5384,
  [SMALL_STATE(127)] = 5415,
  [SMALL_STATE(128)] = 5446,
  [SMALL_STATE(129)] = 5477,
  [SMALL_STATE(130)] = 5508,
  [SMALL_STATE(131)] = 5539,
  [SMALL_STATE(132)] = 5560,
  [SMALL_STATE(133)] = 5579,
  [SMALL_STATE(134)] = 5600,
  [SMALL_STATE(135)] = 5619,
  [SMALL_STATE(136)] = 5638,
  [SMALL_STATE(137)] = 5659,
  [SMALL_STATE(138)] = 5678,
  [SMALL_STATE(139)] = 5699,
  [SMALL_STATE(140)] = 5718,
  [SMALL_STATE(141)] = 5737,
  [SMALL_STATE(142)] = 5749,
  [SMALL_STATE(143)] = 5767,
  [SMALL_STATE(144)] = 5779,
  [SMALL_STATE(145)] = 5791,
  [SMALL_STATE(146)] = 5810,
  [SMALL_STATE(147)] = 5829,
  [SMALL_STATE(148)] = 5840,
  [SMALL_STATE(149)] = 5859,
  [SMALL_STATE(150)] = 5870,
  [SMALL_STATE(151)] = 5885,
  [SMALL_STATE(152)] = 5899,
  [SMALL_STATE(153)] = 5913,
  [SMALL_STATE(154)] = 5927,
  [SMALL_STATE(155)] = 5943,
  [SMALL_STATE(156)] = 5957,
  [SMALL_STATE(157)] = 5973,
  [SMALL_STATE(158)] = 5987,
  [SMALL_STATE(159)] = 6001,
  [SMALL_STATE(160)] = 6015,
  [SMALL_STATE(161)] = 6031,
  [SMALL_STATE(162)] = 6047,
  [SMALL_STATE(163)] = 6063,
  [SMALL_STATE(164)] = 6077,
  [SMALL_STATE(165)] = 6091,
  [SMALL_STATE(166)] = 6107,
  [SMALL_STATE(167)] = 6121,
  [SMALL_STATE(168)] = 6135,
  [SMALL_STATE(169)] = 6147,
  [SMALL_STATE(170)] = 6159,
  [SMALL_STATE(171)] = 6175,
  [SMALL_STATE(172)] = 6187,
  [SMALL_STATE(173)] = 6201,
  [SMALL_STATE(174)] = 6215,
  [SMALL_STATE(175)] = 6231,
  [SMALL_STATE(176)] = 6247,
  [SMALL_STATE(177)] = 6263,
  [SMALL_STATE(178)] = 6272,
  [SMALL_STATE(179)] = 6285,
  [SMALL_STATE(180)] = 6298,
  [SMALL_STATE(181)] = 6311,
  [SMALL_STATE(182)] = 6324,
  [SMALL_STATE(183)] = 6333,
  [SMALL_STATE(184)] = 6346,
  [SMALL_STATE(185)] = 6359,
  [SMALL_STATE(186)] = 6372,
  [SMALL_STATE(187)] = 6383,
  [SMALL_STATE(188)] = 6396,
  [SMALL_STATE(189)] = 6405,
  [SMALL_STATE(190)] = 6418,
  [SMALL_STATE(191)] = 6431,
  [SMALL_STATE(192)] = 6444,
  [SMALL_STATE(193)] = 6455,
  [SMALL_STATE(194)] = 6468,
  [SMALL_STATE(195)] = 6477,
  [SMALL_STATE(196)] = 6490,
  [SMALL_STATE(197)] = 6501,
  [SMALL_STATE(198)] = 6514,
  [SMALL_STATE(199)] = 6525,
  [SMALL_STATE(200)] = 6538,
  [SMALL_STATE(201)] = 6551,
  [SMALL_STATE(202)] = 6562,
  [SMALL_STATE(203)] = 6570,
  [SMALL_STATE(204)] = 6578,
  [SMALL_STATE(205)] = 6588,
  [SMALL_STATE(206)] = 6596,
  [SMALL_STATE(207)] = 6606,
  [SMALL_STATE(208)] = 6614,
  [SMALL_STATE(209)] = 6622,
  [SMALL_STATE(210)] = 6632,
  [SMALL_STATE(211)] = 6642,
  [SMALL_STATE(212)] = 6652,
  [SMALL_STATE(213)] = 6662,
  [SMALL_STATE(214)] = 6672,
  [SMALL_STATE(215)] = 6682,
  [SMALL_STATE(216)] = 6690,
  [SMALL_STATE(217)] = 6700,
  [SMALL_STATE(218)] = 6710,
  [SMALL_STATE(219)] = 6720,
  [SMALL_STATE(220)] = 6730,
  [SMALL_STATE(221)] = 6740,
  [SMALL_STATE(222)] = 6750,
  [SMALL_STATE(223)] = 6758,
  [SMALL_STATE(224)] = 6768,
  [SMALL_STATE(225)] = 6776,
  [SMALL_STATE(226)] = 6783,
  [SMALL_STATE(227)] = 6790,
  [SMALL_STATE(228)] = 6797,
  [SMALL_STATE(229)] = 6804,
  [SMALL_STATE(230)] = 6811,
  [SMALL_STATE(231)] = 6818,
  [SMALL_STATE(232)] = 6825,
  [SMALL_STATE(233)] = 6832,
  [SMALL_STATE(234)] = 6839,
  [SMALL_STATE(235)] = 6846,
  [SMALL_STATE(236)] = 6853,
  [SMALL_STATE(237)] = 6860,
  [SMALL_STATE(238)] = 6867,
  [SMALL_STATE(239)] = 6874,
  [SMALL_STATE(240)] = 6881,
  [SMALL_STATE(241)] = 6888,
  [SMALL_STATE(242)] = 6895,
  [SMALL_STATE(243)] = 6902,
  [SMALL_STATE(244)] = 6909,
  [SMALL_STATE(245)] = 6916,
  [SMALL_STATE(246)] = 6923,
  [SMALL_STATE(247)] = 6930,
  [SMALL_STATE(248)] = 6937,
  [SMALL_STATE(249)] = 6944,
  [SMALL_STATE(250)] = 6951,
  [SMALL_STATE(251)] = 6958,
  [SMALL_STATE(252)] = 6965,
  [SMALL_STATE(253)] = 6972,
  [SMALL_STATE(254)] = 6979,
  [SMALL_STATE(255)] = 6986,
  [SMALL_STATE(256)] = 6993,
  [SMALL_STATE(257)] = 7000,
  [SMALL_STATE(258)] = 7007,
  [SMALL_STATE(259)] = 7014,
  [SMALL_STATE(260)] = 7021,
  [SMALL_STATE(261)] = 7028,
  [SMALL_STATE(262)] = 7035,
  [SMALL_STATE(263)] = 7042,
  [SMALL_STATE(264)] = 7049,
  [SMALL_STATE(265)] = 7056,
  [SMALL_STATE(266)] = 7063,
  [SMALL_STATE(267)] = 7070,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(256),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(254),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(250),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_exp, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_exp, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exp, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exp, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_type, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_type, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_exp, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_exp, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_method, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_method, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 8, .production_id = 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_re_assignment, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_re_assignment, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_loop, 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_loop, 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouped_expression, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouped_expression, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_else_exp, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_else_exp, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(128),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(70),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(120),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(59),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(4),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(186),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(63),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(239),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(245),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(264),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(65),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(255),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(205),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(267),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(123),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_identifier, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_identifier, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_identifier, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_identifier, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_body_repeat1, 2), SHIFT_REPEAT(135),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_body_repeat1, 2), SHIFT_REPEAT(142),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_body_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(137),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_repeat1, 2), SHIFT_REPEAT(137),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_repeat1, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_body_repeat1, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_body_repeat1, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(261),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 5),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 5),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 4),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 4),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 2),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(225),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(237),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 3),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2), SHIFT_REPEAT(167),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(208),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_repeat1, 6),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_repeat1, 6),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [769] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_body, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_body, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
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
