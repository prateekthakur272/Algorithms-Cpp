cmake_minimum_required(VERSION 3.24)
project(Algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(Algorithms main.cpp searching/binary_search_algorithm.h searching/binary_search_algorithm.cpp searching/sequential_search_algorithm.cpp searching/sequential_search_algorithm.h)
