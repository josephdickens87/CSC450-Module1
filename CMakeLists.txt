cmake_minimum_required(VERSION 3.6)
project(Module1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Person.cpp Person.h Main.cpp)
add_executable(Module1 ${SOURCE_FILES} Person.h)