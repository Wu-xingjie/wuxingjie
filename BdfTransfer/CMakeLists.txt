cmake_minimum_required(VERSION 3.27)

project(bdftransfer CXX)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/src)

add_library(reader STATIC "./src/bdfReader.cpp")
add_library(processor STATIC "./src/bdfProcessor.cpp")
add_library(tranfer STATIC "./src/bdfTransfer.cpp")

# target_link_libraries(processor reader)
# target_link_libraries(tranfer processor)

add_executable(main main.cpp)

target_link_libraries(main transfer processor reader)