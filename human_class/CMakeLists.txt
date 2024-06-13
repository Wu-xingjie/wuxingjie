project(class_human LANGUAGES CXX)

add_library(human
    STATIC
    Human.hpp
    Human.cpp
)

add_executable(class_human Human0.cpp)

target_link_libraries(class_human human)