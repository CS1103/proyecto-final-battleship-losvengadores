cmake_minimum_required(VERSION 3.14.2)
project(code)

set(CMAKE_CXX_STANDARD 17)

add_executable(code main.cpp build.cpp build.h metodos_generales.cpp includes.h ship.h functions.h functions.cpp)