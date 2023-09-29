cmake_minimum_required(VERSION 3.26)
project(compute C)

set(CMAKE_C_STANDARD 11)

file(GLOB compute_src CONFIGURE_DEPENDS include/*.h src/*.c)

add_library(compute ${compute_src})
target_include_directories(compute PUBLIC include)

