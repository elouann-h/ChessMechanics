cmake_minimum_required(VERSION 3.23)
project(ChessMechanics C)

set(CMAKE_C_STANDARD 17)

add_executable(ChessMechanics main.c pieces.c pieces.h)
