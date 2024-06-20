cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(human LANGUAGES CXX)
add_library(human-object
    OBJECT
    Human.hpp
    Human.cpp
)
add_library(human-static
    STATIC
        $<TARGET_OBJECTS:human-object>
)
add_executable(project4 Human0.cpp)
target_link_libraries(project4 human-static)