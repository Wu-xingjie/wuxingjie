cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_STANDARD 11)

add_library(vec STATIC "../src/VectorMulti.cpp")

add_executable(try try.cpp)

target_link_libraries(try vec)