cmake_minimum_required(VERSION 3.16)
project(lecture07_files)

set(CMAKE_CXX_STANDARD 20)

include_directories("./inc")
add_executable(lecture07_files main.cpp src/math.cpp)
