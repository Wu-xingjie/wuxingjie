cmake_minimum_required(VERSION 3.27)
project(factory CXX)

add_library(teacher STATIC ./src/Teacher.cpp)

add_library(teacherfactory STATIC ./src/TeacherFactory.cpp)

add_library(human STATIC ./src/Human.cpp)

target_link_directories(teacher human)

add_executable(main main.cpp)

target_link_directories(main teacher teacherfactory)

