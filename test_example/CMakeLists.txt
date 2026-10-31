# Минимальная версия CMake, которая нужна для этого проекта
cmake_minimum_required(VERSION 3.28)

# Имя проекта
project(test_example)

# Собираем статическую библиотеку func из файла func.cpp
add_library(func STATIC func.cpp)

# Разрешаем всем, кто подключает библиотеку func,
# находить её заголовочные файлы в текущей папке
target_include_directories(func PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Собираем исполняемый файл test_example из main.cpp
add_executable(test_example main.cpp)

# Подключаем библиотеку func к программе test_example
target_link_libraries(test_example PRIVATE func)

# Включаем поддержку тестов в проекте
enable_testing()

# Заходим в папку test и обрабатываем её CMakeLists.txt
add_subdirectory(test)
