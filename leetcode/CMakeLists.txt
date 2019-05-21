set_source_files_properties(
        twosum.cc
        anagram.cc
        reverse_integer.cc
        flatten_binary_tree.cc
        PROPERTIES COMPILE_FLAGS -std=c++11
)

add_executable(twosum twosum.cc)
add_executable(anagram anagram.cc)
add_executable(reverse_integer reverse_integer.cc)
add_executable(flatten_binary_tree flatten_binary_tree.cc)
