cmake_minimum_required(VERSION 3.27)

project(MATRIX CXX)

set(CMAKE_CXX_STANDARD 11)

add_library(MATRIX_H SHARED  "./src/Matrix.cpp")
add_library(VECTORMULTI SHARED "./src/VectorMulti.cpp")

target_link_libraries(MATRIX_H VECTORMULTI)

add_executable(main main.cpp)

target_link_libraries(main MATRIX_H)