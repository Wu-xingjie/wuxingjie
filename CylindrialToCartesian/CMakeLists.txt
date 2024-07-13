cmake_minimum_required(VERSION 3.27)

project(transfer CXX)

set(CMAKE_CXX_STANDARD 11)

add_library(head STATIC "./src/CylindrialToCartesian.cpp")

add_executable(main main.cpp)

target_link_libraries(main head)