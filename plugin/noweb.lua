-- tree-sitter-noweb: automatic integration with nolsp and tree-sitter injections

-- 1. Catch chunk languages notification from nolsp
if vim.lsp and vim.lsp.handlers then
	vim.lsp.handlers["nolsp/chunkLanguages"] = function(_, result, ctx)
		if result and result.languages then
			local bufnr = ctx.bufnr or (result.uri and vim.uri_to_bufnr(result.uri)) or vim.api.nvim_get_current_buf()
			if vim.api.nvim_buf_is_valid(bufnr) then
				vim.b[bufnr].noweb_chunk_languages = result.languages
				-- If treesitter highlighter is active, trigger redraw so injections update immediately
				if vim.treesitter and vim.treesitter.highlighter and vim.treesitter.highlighter.active[bufnr] then
					vim.api.nvim_buf_call(bufnr, function()
						vim.cmd("redraw")
					end)
				end
			end
		end
	end
end

-- 2. Register directive for dynamic chunk language injection (#set-chunk-lang!)
pcall(vim.treesitter.query.add_directive, "set-chunk-lang!", function(match, _, bufnr, pred, metadata)
	local capture_id, name_id = pred[2], pred[3]
	local node = match[name_id]
	if type(node) == "table" and node[1] then
		node = node[1]
	end
	if node then
		local name = vim.treesitter.get_node_text(node, bufnr)
		local langs = vim.b[bufnr] and vim.b[bufnr].noweb_chunk_languages
		if langs and langs[name] then
			metadata[capture_id] = langs[name]
		end
	end
end, true)

-- 3. Register directive for dynamic buffer variable injection (#set-from-buffer-var!)
pcall(vim.treesitter.query.add_directive, "set-from-buffer-var!", function(_, _, bufnr, pred, metadata)
	local capture_id = pred[2]
	local var_name = pred[3]
	local val = vim.b[bufnr] and vim.b[bufnr][var_name]
	if val then
		metadata[capture_id] = val
	end
end, true)
