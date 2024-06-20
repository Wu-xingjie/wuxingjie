file(REMOVE_RECURSE
  "libhuman-static.a"
  "libhuman-static.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/human-static.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
