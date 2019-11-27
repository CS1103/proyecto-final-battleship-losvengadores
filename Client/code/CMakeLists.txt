cmake_minimum_required(VERSION 3.14.2)
project(.)

set(CMAKE_CXX_STANDARD 17)

add_executable( main.cpp attack.cpp attack.h build.cpp build.h metodos_generales.cpp includes.h)