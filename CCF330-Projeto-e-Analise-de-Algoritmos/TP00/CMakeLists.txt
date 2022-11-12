cmake_minimum_required(VERSION 3.17)
project(TP00_PAA C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(headers)
include_directories(src)

add_executable(TP00_PAA
        headers/funcoes.h
        headers/menu.h
        src/funcoes.c
        main.c src/menu.c)
