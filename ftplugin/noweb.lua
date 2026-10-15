-- ftplugin/noweb.lua: per-buffer setup for noweb files

-- 1. Ensure directives and handler are loaded (defensive against lazy-loaders)
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

pcall(vim.treesitter.query.add_directive, "set-from-buffer-var!", function(_, _, bufnr, pred, metadata)
	local capture_id = pred[2]
	local var_name = pred[3]
	local val = vim.b[bufnr] and vim.b[bufnr][var_name]
	if val then
		metadata[capture_id] = val
	end
end, true)

if vim.lsp and vim.lsp.handlers and not vim.lsp.handlers["nolsp/chunkLanguages"] then
	vim.lsp.handlers["nolsp/chunkLanguages"] = function(_, result, ctx)
		if result and result.languages then
			local bufnr = ctx.bufnr or (result.uri and vim.uri_to_bufnr(result.uri)) or vim.api.nvim_get_current_buf()
			if vim.api.nvim_buf_is_valid(bufnr) then
				vim.b[bufnr].noweb_chunk_languages = result.languages
				if vim.treesitter and vim.treesitter.highlighter and vim.treesitter.highlighter.active[bufnr] then
					vim.api.nvim_buf_call(bufnr, function()
						vim.cmd("redraw")
					end)
				end
			end
		end
	end
end

-- 2. Resolve documentation language from nolsp.toml if not already set
if not vim.b.noweb_doc_language then
	local buf_path = vim.api.nvim_buf_get_name(0)
	local buf_dir = buf_path ~= "" and vim.fs.dirname(buf_path) or vim.fn.getcwd()
	local root_file = vim.fs.find({ "nolsp.toml", ".nolsp.toml", "Cargo.toml", ".git" }, { upward = true, path = buf_dir })[1]
	local root_dir = root_file and vim.fs.dirname(root_file) or vim.fn.getcwd()

	local project_config = root_dir and (root_dir .. "/nolsp.toml")
	local global_config = vim.fn.expand("~/.config/nolsp/nolsp.toml")
	local config_path = (project_config and vim.fn.filereadable(project_config) == 1 and project_config)
		or (vim.fn.filereadable(global_config) == 1 and global_config)
		or nil

	local doc_lang = "latex"
	if config_path then
		for line in io.lines(config_path) do
			local matched = line:match('^%s*doc_language%s*=%s*["\']([^"\']+)["\']')
			if matched then
				doc_lang = matched
				break
			end
		end
	end
	vim.b.noweb_doc_language = doc_lang
end
