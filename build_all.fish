#!/usr/bin/fish

for md in **/*.md
	pandoc $md -o (string split -r -m 1 . $md)[1].pdf -V geometry=margin=1in -H /home/tyler/Documents/mateng/ocw/ncommon.tex
end

