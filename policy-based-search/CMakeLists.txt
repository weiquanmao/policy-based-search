cmake_minimum_required(VERSION 2.8)
project(search)

set(CMAKE_CXX_COMPILER "g++-4.7") # TODO: Is this the right way to specify the desired compiler?
set(CMAKE_CXX_FLAGS "-std=c++0x -pipe -march=native -Wall -Wextra")
set(CMAKE_C_FLAGS "-std=c99 -pipe -march=native -Wall -Wextra")

add_subdirectory(examples)
