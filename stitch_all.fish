#!/bin/fish

set stitch_dir $PWD

for course in (find . -type d -regextype egrep -regex '.*/[0-9]{4}_(fall|winter)/[a-z]{3}[0-9]{3}_[^/]+')
    echo "Building $course"
    pushd $course
    $stitch_dir/stitch
    popd
    echo "Built $course"
end
