cmake_minimum_required(VERSION 3.27)

project(bdftransfer CXX)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(src)

add_executable(main main.cpp)

target_link_libraries(main transfer)