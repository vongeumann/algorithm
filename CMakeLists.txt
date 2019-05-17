cmake_minimum_required(VERSION 3.12)
project(algorithm C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-std=c++11")

find_package(Threads REQUIRED)

add_subdirectory(baekjune)
add_subdirectory(leetcode)
add_subdirectory(practice)
