package tree_sitter_noweb_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-noweb"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_noweb.Language())
	if language == nil {
		t.Errorf("Error loading Noweb grammar")
	}
}
