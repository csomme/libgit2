	char *patch_text;
			cl_git_pass(git_patch_to_str(&patch_text, patch));
		cl_git_pass(git_patch_to_str(&patch_text, patch));
			"%s", expected[d], patch_text);
		git__free(patch_text);
	static const char *expected_none[] = { "<END>" };
	cl_git_pass(git_submodule_reload_all(g_repo));

	cl_git_pass(git_submodule_reload_all(g_repo));

	cl_git_pass(git_submodule_reload_all(g_repo));