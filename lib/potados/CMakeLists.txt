cmake_minimum_required(VERSION 3.26)
project(potados C)

set(CMAKE_C_STANDARD 11)

file(GLOB potados_src CONFIGURE_DEPENDS include/*.h src/*.c)

add_library(potados ${potados_src})
target_include_directories(potados PUBLIC include)

