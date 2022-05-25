cmake_minimum_required(VERSION 3.22)
project(UFO)

set(CMAKE_CXX_STANDARD 14)

add_executable(UFO main.cpp ufo_functions.hpp ufo_functions.cpp)
