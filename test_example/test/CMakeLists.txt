set(gtest_force_shared_crt
    ON
    CACHE BOOL "" FORCE)
add_subdirectory(${CMAKE_SOURCE_DIR}/thirdparty/googletest-src
                 ${CMAKE_BINARY_DIR}/thirdparty/googletest-build EXCLUDE_FROM_ALL)

add_executable(func_tests test_func.cpp)

target_link_libraries(func_tests PRIVATE func GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(func_tests)
