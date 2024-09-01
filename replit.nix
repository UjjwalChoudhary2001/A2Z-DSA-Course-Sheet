{ pkgs }: {
	deps = [
   pkgs.python310Packages.numpy-stl
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}