cmake_minimum_required(VERSION 3.28)

project(MATRIX CXX)

set(CMAKE_CXX_STANDARD 11)

add_library(MATRIX_H SHARED  "./src/Matrix.cpp")

add_executable(main main.cpp)

target_link_libraries(main MATRIX_H)

