# tree-sitter-noweb

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for
[Noweb](https://www.cs.tufts.edu/~nr/noweb/) (`<<chunk>>=` … `@`) literate-programming files.

## Features

- Parses Noweb structure: chunk headers, code chunks, chunk references, and documentation.
- Highlights and syntax-injects 40+ languages based on the chunk name (file extension).
- Terminator-tag injection — write `@ (python)` on the `@` line to set a chunk's language —
  plus dynamic per-chunk language propagation via [`nolsp`](https://github.com/nolsp).

## Usage

```c
<<main.c>>=
#include <stdio.h>

int main(void) {
    <<greeting>>
    return 0;
}
@

<<greeting>>= @ (c)
printf("hello, noweb\n");
@
```

- A chunk begins with `<<name>>=` and ends with a line containing `@`.
- `<<name>>` inside a chunk is a reference to another chunk.
- A terminator tag such as `@ (c)` sets the injected language for that chunk.

File types: `nw`, `noweb`.
