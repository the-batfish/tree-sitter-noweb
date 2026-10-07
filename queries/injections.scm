;; ============================================================================
;; Tree-sitter Language Injections for Noweb
;; ============================================================================

;; --- Systems & Compiled Languages ---

;; C
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^c$|\\.(c|h)$)")
 (#set! injection.language "c"))

;; C++
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^cpp$|^c\\+\\+$|\\.(cpp|cc|cxx|hpp|hh|hxx)$)")
 (#set! injection.language "cpp"))

;; Rust
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^rust$|\\.rs$)")
 (#set! injection.language "rust"))

;; Go
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^go$|\\.go$)")
 (#set! injection.language "go"))

;; Zig
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^zig$|\\.zig$)")
 (#set! injection.language "zig"))

;; Fortran
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^fortran$|\\.(f|f90|f95|for)$)")
 (#set! injection.language "fortran"))

;; Assembly
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^asm$|\\.(asm|s|S)$)")
 (#set! injection.language "asm"))

;; --- Managed & Object-Oriented Languages ---

;; Java
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^java$|\\.java$)")
 (#set! injection.language "java"))

;; Kotlin
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^kotlin$|\\.(kt|kts)$)")
 (#set! injection.language "kotlin"))

;; C#
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^cs$|^csharp$|^c_sharp$|\\.cs$)")
 (#set! injection.language "c_sharp"))

;; Scala
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^scala$|\\.(scala|sc)$)")
 (#set! injection.language "scala"))

;; Swift
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^swift$|\\.swift$)")
 (#set! injection.language "swift"))

;; Dart
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^dart$|\\.dart$)")
 (#set! injection.language "dart"))

;; --- Scripting & Dynamic Languages ---

;; Python
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^py$|^python$|\\.(py|pyw|pyi)$)")
 (#set! injection.language "python"))

;; JavaScript
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^js$|^javascript$|\\.(js|mjs|cjs|jsx)$)")
 (#set! injection.language "javascript"))

;; TypeScript
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^ts$|^typescript$|\\.(ts|mts|cts)$)")
 (#set! injection.language "typescript"))

;; TSX
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^tsx$|\\.tsx$)")
 (#set! injection.language "tsx"))

;; Ruby
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^rb$|^ruby$|\\.(rb|rake)$)")
 (#set! injection.language "ruby"))

;; PHP
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^php$|\\.php$)")
 (#set! injection.language "php"))

;; Lua
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^lua$|\\.lua$)")
 (#set! injection.language "lua"))

;; Perl
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^pl$|^perl$|\\.(pl|pm)$)")
 (#set! injection.language "perl"))

;; Shell / Bash
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^sh$|^bash$|^zsh$|\\.(sh|bash|zsh)$)")
 (#set! injection.language "bash"))

;; --- Data Science & Scientific ---

;; R
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^r$|^R$|\\.(r|R)$)")
 (#set! injection.language "r"))

;; Julia
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^jl$|^julia$|\\.jl$)")
 (#set! injection.language "julia"))

;; SQL
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^sql$|\\.sql$)")
 (#set! injection.language "sql"))

;; --- Functional Languages ---

;; Haskell
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^hs$|^haskell$|\\.hs$)")
 (#set! injection.language "haskell"))

;; OCaml
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^ml$|^ocaml$|\\.(ml|mli)$)")
 (#set! injection.language "ocaml"))

;; Elixir
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^ex$|^elixir$|\\.(ex|exs)$)")
 (#set! injection.language "elixir"))

;; Erlang
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^erl$|^erlang$|\\.(erl|hrl)$)")
 (#set! injection.language "erlang"))

;; Clojure
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^clj$|^clojure$|\\.(clj|cljs|cljc)$)")
 (#set! injection.language "clojure"))

;; Nix
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^nix$|\\.nix$)")
 (#set! injection.language "nix"))

;; --- Web & Markup ---

;; HTML
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^html$|\\.(html|htm)$)")
 (#set! injection.language "html"))

;; CSS
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^css$|\\.css$)")
 (#set! injection.language "css"))

;; SCSS / SASS
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^scss$|^sass$|\\.(scss|sass)$)")
 (#set! injection.language "scss"))

;; JSON
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^json$|\\.json$)")
 (#set! injection.language "json"))

;; YAML
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^yaml$|^yml$|\\.(yaml|yml)$)")
 (#set! injection.language "yaml"))

;; TOML
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^toml$|\\.toml$)")
 (#set! injection.language "toml"))

;; XML
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^xml$|\\.xml$)")
 (#set! injection.language "xml"))

;; --- Build & Config ---

;; Make
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^Makefile$|^makefile$|\\.mk$)")
 (#set! injection.language "make"))

;; CMake
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^cmake$|^CMakeLists\\.txt$|\\.cmake$)")
 (#set! injection.language "cmake"))

;; Dockerfile
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^dockerfile$|^Dockerfile$|\\.dockerfile$)")
 (#set! injection.language "dockerfile"))

;; Typst
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^typst$|^typ$|\\.typ$)")
 (#set! injection.language "typst"))

;; Markdown inside chunk
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^md$|^markdown$|\\.(md|markdown)$)")
 (#set! injection.language "markdown"))

;; LaTeX inside chunk
((code_chunk
  (chunk_header (chunk_name) @_name)
  (chunk_content) @injection.content)
 (#match? @_name "(^tex$|^latex$|\\.(tex|sty|cls)$)")
 (#set! injection.language "latex"))

;; ============================================================================
;; Documentation Injections
;; Injected from buffer variable read from nolsp.toml (project-level > user-level)
;; Falls back to LaTeX if unconfigured.
;; ============================================================================

((documentation) @injection.content
 (#set-from-buffer-var! injection.language "noweb_doc_language"))

