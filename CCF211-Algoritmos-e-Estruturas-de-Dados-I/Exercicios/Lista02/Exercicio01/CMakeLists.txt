cmake_minimum_required(VERSION 3.14)
project(TAD_Aeroporto C)

set(CMAKE_C_STANDARD 99)

add_executable(TAD_Aeroporto passageiro.c passageiro.h aeroporto.c aeroporto.h main.c)