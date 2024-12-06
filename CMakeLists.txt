cmake_minimum_required(VERSION 3.28)
project(leetcode_solutions)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(easy)
add_subdirectory(hard)
add_subdirectory(medium)
add_subdirectory(tests)

add_executable(leetcode_solutions main.cpp)
