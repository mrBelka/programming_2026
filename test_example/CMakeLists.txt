cmake_minimum_required(VERSION 3.28)

project(test_example)

add_library(func STATIC func.cpp)

target_include_directories(func PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(test_example main.cpp)

target_link_libraries(test_example PRIVATE func)

enable_testing()

add_subdirectory(test)
