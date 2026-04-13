cmake_minimum_required(VERSION 3.16)
project(cpp_learning LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(main src/main.cpp)
add_executable(lesson01 lessons/01_basics.cpp)
add_executable(lesson02 lessons/02_string_vector.cpp)
