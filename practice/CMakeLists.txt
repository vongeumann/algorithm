set_source_files_properties(
        quicksort.cc
        quickselection.cc
        PROPERTIES COMPILE_FLAGS -std=c++11
)

add_executable(quicksort quicksort.cc)
add_executable(quickselection quickselection.cc)
