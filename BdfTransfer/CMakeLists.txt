cmake_minimum_required(VERSION 3.27)

project(bdftransfer CXX)

set(CMAKE_CXX_STANDARD 11)

add_library(reader STATIC "/home/wxj/wuxingjie/BdfTransfer/src/bdfReader.cpp")
add_library(processor STATIC "/home/wxj/wuxingjie/BdfTransfer/src/bdfProcessor.cpp")
add_library(tranfer STATIC "/home/wxj/wuxingjie/BdfTransfer/src/bdfTransfer.cpp")

target_link_libraries(processor reader)
target_link_libraries(tranfer processor)

add_executable(main main.cpp)

target_link_libraries(main transfer)