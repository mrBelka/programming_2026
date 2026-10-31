# Заставляем GoogleTest использовать общую библиотеку времени выполнения C
set(gtest_force_shared_crt
    ON
    CACHE BOOL "" FORCE)

# Подключаем исходники GoogleTest из папки thirdparty
# и собираем их в отдельную папку сборки
add_subdirectory(${CMAKE_SOURCE_DIR}/thirdparty/googletest-src
                 ${CMAKE_BINARY_DIR}/thirdparty/googletest-build EXCLUDE_FROM_ALL)

# Собираем исполняемый файл с тестами из файла test_func.cpp
add_executable(func_tests test_func.cpp)

# Подключаем к тестам библиотеку func и главную функцию GoogleTest
target_link_libraries(func_tests PRIVATE func GTest::gtest_main)

# Подключаем модуль GoogleTest для CMake
include(GoogleTest)

# Автоматически находим все тесты в func_tests и регистрируем их в CTest
gtest_discover_tests(func_tests)
