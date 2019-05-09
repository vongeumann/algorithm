cmake_minimum_required(VERSION 3.13)
project(BaekJun C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-std=c++11")

find_package(Threads REQUIRED)

add_subdirectory(dp_problems)