#!/usr/bin/fish

# Build all Markdown notes files recursively

set header_file (realpath (dirname (status --current-filename)))"/ncommon.tex"

for md in **/*.md
	set md_dir (realpath (dirname $md))
	set md_name (basename $md)
	# Temporarily cd to make relative paths work
	pushd $md_dir
	pandoc $md_name -o (string split -r -m 1 . $md_name)[1].pdf -V geometry=margin=1in -H $header_file
	popd
	echo "Built $md"
end

