#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LT_LT = 1,
  anon_sym_GT_GT_EQ = 2,
  sym_chunk_name = 3,
  anon_sym_GT_GT = 4,
  sym_content_line = 5,
  anon_sym_AT = 6,
  aux_sym_chunk_terminator_token1 = 7,
  aux_sym_documentation_token1 = 8,
  anon_sym_LT = 9,
  sym_source_file = 10,
  sym_code_chunk = 11,
  sym_chunk_header = 12,
  sym_chunk_content = 13,
  sym_chunk_reference = 14,
  sym_chunk_terminator = 15,
  sym_documentation = 16,
  sym_doc_marker = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_chunk_content_repeat1 = 19,
  aux_sym_documentation_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT_EQ] = ">>=",
  [sym_chunk_name] = "chunk_name",
  [anon_sym_GT_GT] = ">>",
  [sym_content_line] = "content_line",
  [anon_sym_AT] = "@",
  [aux_sym_chunk_terminator_token1] = "chunk_terminator_token1",
  [aux_sym_documentation_token1] = "documentation_token1",
  [anon_sym_LT] = "<",
  [sym_source_file] = "source_file",
  [sym_code_chunk] = "code_chunk",
  [sym_chunk_header] = "chunk_header",
  [sym_chunk_content] = "chunk_content",
  [sym_chunk_reference] = "chunk_reference",
  [sym_chunk_terminator] = "chunk_terminator",
  [sym_documentation] = "documentation",
  [sym_doc_marker] = "doc_marker",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_chunk_content_repeat1] = "chunk_content_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [sym_chunk_name] = sym_chunk_name,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [sym_content_line] = sym_content_line,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_chunk_terminator_token1] = aux_sym_chunk_terminator_token1,
  [aux_sym_documentation_token1] = aux_sym_documentation_token1,
  [anon_sym_LT] = anon_sym_LT,
  [sym_source_file] = sym_source_file,
  [sym_code_chunk] = sym_code_chunk,
  [sym_chunk_header] = sym_chunk_header,
  [sym_chunk_content] = sym_chunk_content,
  [sym_chunk_reference] = sym_chunk_reference,
  [sym_chunk_terminator] = sym_chunk_terminator,
  [sym_documentation] = sym_documentation,
  [sym_doc_marker] = sym_doc_marker,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_chunk_content_repeat1] = aux_sym_chunk_content_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_chunk_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_content_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_chunk_terminator_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_documentation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_code_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym_chunk_header] = {
    .visible = true,
    .named = true,
  },
  [sym_chunk_content] = {
    .visible = true,
    .named = true,
  },
  [sym_chunk_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_chunk_terminator] = {
    .visible = true,
    .named = true,
  },
  [sym_documentation] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_marker] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chunk_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_documentation_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '>') ADVANCE(4);
      if (lookahead == '@') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '@') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '<') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(14);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') SKIP(8);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '@') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_chunk_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_chunk_name);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_content_line);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<' &&
          lookahead != '@') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_content_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '@') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_chunk_terminator_token1);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_chunk_terminator_token1);
      if (lookahead == '<' ||
          lookahead == '@') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_chunk_terminator_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_chunk_terminator_token1);
      if (eof) ADVANCE(9);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<' &&
          lookahead != '@') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '@') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(10);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_code_chunk] = STATE(2),
    [sym_chunk_header] = STATE(5),
    [sym_documentation] = STATE(13),
    [sym_doc_marker] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_documentation_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [aux_sym_documentation_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      aux_sym_documentation_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LT_LT,
    STATE(20), 1,
      sym_documentation,
    STATE(3), 2,
      sym_doc_marker,
      aux_sym_documentation_repeat1,
  [23] = 6,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LT_LT,
    ACTIONS(21), 1,
      aux_sym_documentation_token1,
    ACTIONS(23), 1,
      anon_sym_LT,
    STATE(4), 2,
      sym_doc_marker,
      aux_sym_documentation_repeat1,
  [43] = 6,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_LT_LT,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(32), 1,
      aux_sym_documentation_token1,
    ACTIONS(35), 1,
      anon_sym_LT,
    STATE(4), 2,
      sym_doc_marker,
      aux_sym_documentation_repeat1,
  [63] = 6,
    ACTIONS(38), 1,
      anon_sym_LT_LT,
    ACTIONS(40), 1,
      sym_content_line,
    ACTIONS(42), 1,
      anon_sym_AT,
    STATE(11), 1,
      sym_chunk_terminator,
    STATE(21), 1,
      sym_chunk_content,
    STATE(12), 2,
      sym_chunk_reference,
      aux_sym_chunk_content_repeat1,
  [83] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      aux_sym_chunk_terminator_token1,
    ACTIONS(46), 4,
      anon_sym_LT_LT,
      anon_sym_AT,
      aux_sym_documentation_token1,
      anon_sym_LT,
  [96] = 3,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      aux_sym_chunk_terminator_token1,
    ACTIONS(52), 4,
      anon_sym_LT_LT,
      anon_sym_AT,
      aux_sym_documentation_token1,
      anon_sym_LT,
  [109] = 5,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_LT_LT,
    STATE(2), 1,
      sym_code_chunk,
    STATE(5), 1,
      sym_chunk_header,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
  [125] = 5,
    ACTIONS(58), 1,
      anon_sym_LT_LT,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_code_chunk,
    STATE(5), 1,
      sym_chunk_header,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
  [141] = 2,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      aux_sym_documentation_token1,
    ACTIONS(64), 3,
      anon_sym_LT_LT,
      anon_sym_AT,
      anon_sym_LT,
  [151] = 2,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym_documentation_token1,
    ACTIONS(68), 3,
      anon_sym_LT_LT,
      anon_sym_AT,
      anon_sym_LT,
  [161] = 4,
    ACTIONS(38), 1,
      anon_sym_LT_LT,
    ACTIONS(70), 1,
      sym_content_line,
    ACTIONS(72), 1,
      anon_sym_AT,
    STATE(17), 2,
      sym_chunk_reference,
      aux_sym_chunk_content_repeat1,
  [175] = 5,
    ACTIONS(58), 1,
      anon_sym_LT_LT,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_code_chunk,
    STATE(5), 1,
      sym_chunk_header,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
  [191] = 5,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_LT_LT,
    STATE(2), 1,
      sym_code_chunk,
    STATE(5), 1,
      sym_chunk_header,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
  [207] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym_documentation_token1,
    ACTIONS(81), 3,
      anon_sym_LT_LT,
      anon_sym_AT,
      anon_sym_LT,
  [217] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym_documentation_token1,
    ACTIONS(85), 3,
      anon_sym_LT_LT,
      anon_sym_AT,
      anon_sym_LT,
  [227] = 4,
    ACTIONS(87), 1,
      anon_sym_LT_LT,
    ACTIONS(90), 1,
      sym_content_line,
    ACTIONS(93), 1,
      anon_sym_AT,
    STATE(17), 2,
      sym_chunk_reference,
      aux_sym_chunk_content_repeat1,
  [241] = 2,
    ACTIONS(97), 1,
      sym_content_line,
    ACTIONS(95), 2,
      anon_sym_LT_LT,
      anon_sym_AT,
  [249] = 2,
    ACTIONS(101), 1,
      sym_content_line,
    ACTIONS(99), 2,
      anon_sym_LT_LT,
      anon_sym_AT,
  [257] = 1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LT_LT,
  [262] = 2,
    ACTIONS(103), 1,
      anon_sym_AT,
    STATE(16), 1,
      sym_chunk_terminator,
  [269] = 1,
    ACTIONS(105), 1,
      anon_sym_GT_GT_EQ,
  [273] = 1,
    ACTIONS(107), 1,
      sym_chunk_name,
  [277] = 1,
    ACTIONS(109), 1,
      sym_chunk_name,
  [281] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [285] = 1,
    ACTIONS(113), 1,
      anon_sym_GT_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 43,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 109,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 141,
  [SMALL_STATE(11)] = 151,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 191,
  [SMALL_STATE(15)] = 207,
  [SMALL_STATE(16)] = 217,
  [SMALL_STATE(17)] = 227,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 249,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 262,
  [SMALL_STATE(22)] = 269,
  [SMALL_STATE(23)] = 273,
  [SMALL_STATE(24)] = 277,
  [SMALL_STATE(25)] = 281,
  [SMALL_STATE(26)] = 285,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_marker, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_marker, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_terminator, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_terminator, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_marker, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_marker, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_chunk, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_chunk, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_content, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_terminator, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_terminator, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_chunk, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_chunk, 3, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chunk_content_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chunk_content_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chunk_content_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_header, 3, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_header, 3, 0, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chunk_reference, 3, 0, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_reference, 3, 0, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_noweb(void) {
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
