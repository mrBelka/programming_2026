cmake_minimum_required(VERSION 3.28)

project(test_asan)

option(ENABLE_ASAN "Enable AddressSanitizer" ON)

add_executable(test_asan main.cpp)

# минимально необходимый стандарт (или /std:c++20, или -std=c++20)
target_compile_features(test_asan PRIVATE cxx_std_20)

if(ENABLE_ASAN)
  if(MSVC)
    # /fsanitize=address включает проверки ASan, /Zi сохраняет полную отладочную информацию (имена
    # функций, файлы, номера строк), /Od отключает оптимизацию, чтобы отчёт указывал на нужную
    # строку кода
    target_compile_options(test_asan PRIVATE /fsanitize=address /Zi /Od)
    # /DEBUG подключает PDB при линковке, а рантайм ASan линковщик подключает сам
    target_link_options(test_asan PRIVATE /DEBUG)

    # DLL рантайма ASan лежит рядом с компилятором, но не всегда есть в PATH
    get_filename_component(MSVC_BIN_DIR "${CMAKE_CXX_COMPILER}" DIRECTORY)
    file(GLOB ASAN_RUNTIME_DLLS "${MSVC_BIN_DIR}/clang_rt.asan*-x86_64.dll")
    foreach(ASAN_RUNTIME_DLL IN LISTS ASAN_RUNTIME_DLLS)
      add_custom_command(
        TARGET test_asan
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "${ASAN_RUNTIME_DLL}"
                "$<TARGET_FILE_DIR:test_asan>"
        COMMENT "Copy AddressSanitizer runtime DLL")
    endforeach()
  else()
    # -fno-omit-frame-pointer сохраняет указатель кадра для читаемого стека вызовов, для GCC и Clang
    # флаг -fsanitize=address нужен и при компиляции, и при линковке
    target_compile_options(test_asan PRIVATE -fsanitize=address -fno-omit-frame-pointer)
    target_link_options(test_asan PRIVATE -fsanitize=address)
  endif()
endif()
