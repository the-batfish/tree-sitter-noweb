module.exports = grammar({
  name: "noweb",

  rules: {
    source_file: ($) =>
      seq(
        optional($.documentation),
        repeat(
          seq(
            $.code_chunk,
            optional($.documentation)
          )
        )
      ),

    code_chunk: ($) =>
      seq(
        $.chunk_header,
        optional($.chunk_content),
        $.chunk_terminator
      ),

    chunk_header: ($) =>
      seq(
        "<<",
        field("name", $.chunk_name),
        ">>="
      ),

    chunk_name: ($) => /[^>]+/,

    chunk_content: ($) =>
      repeat1(
        choice(
          $.chunk_reference,
          $._content_line
        )
      ),

    chunk_reference: ($) =>
      prec(2, seq(
        "<<",
        field("name", $.chunk_name),
        ">>"
      )),

    _content_line: ($) =>
      choice(
        /[^\n<@]+/,
        "<",
      ),

    chunk_terminator: ($) =>
      prec(1, seq(
        "@",
        optional(/[^\n]*/)
      )),

    documentation: ($) =>
      prec.right(repeat1(
        choice(
          $.doc_marker,
          /[^<@\n]+/,
          "<",
        )
      )),

    doc_marker: ($) =>
      seq(
        "@",
        optional(/[^\n]*/)
      ),
  },
});
