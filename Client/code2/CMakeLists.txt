cmake_minimum_required(VERSION 3.14.2)
project(code2)

set(CMAKE_CXX_STANDARD 17)

add_executable(code2 main.cpp Client.cpp Client.h attack.cpp attack.h metodosgenerales.cpp includes.h)