set_source_files_properties(
        twosum.cc
        PROPERTIES COMPILE_FLAGS -std=c++11
)

add_executable(twosum twosum.cc)
add_executable(anagram anagram.cc)
