#!/bin/fish

set stitch_dir $PWD

set dirs (find . -type d -regextype egrep -regex '.*/[0-9]{4}_(fall|winter)/[a-z]{3}[0-9]{3}_[^/]+')

if not test -n "$dirs"
	set dirs (find . -type d -regextype egrep -regex './[a-z]{3}[0-9]{3}_[^/]+')
	set stitch_dir "$PWD/.."
	if not test -n "$dirs"
		echo "No directories found."
		exit 1
	end
end

for course in $dirs
    echo "Building $course"
    pushd $course
    $stitch_dir/stitch
    popd
    echo "Built $course"
end
