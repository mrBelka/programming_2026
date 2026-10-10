cmake_minimum_required(VERSION 3.28)

project(subproject_with_tests)

add_library(func STATIC func.cpp)

target_include_directories(func PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(subproject_with_tests main.cpp)

target_link_libraries(subproject_with_tests PRIVATE func)

enable_testing()

add_subdirectory(test)
