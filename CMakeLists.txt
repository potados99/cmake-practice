cmake_minimum_required(VERSION 3.26)
project(app C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(lib/potados)

add_executable(app main.c)
target_link_libraries(app potados)
