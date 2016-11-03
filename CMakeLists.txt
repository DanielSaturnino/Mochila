cmake_minimum_required(VERSION 2.8.9)
project(Mochila)

include_directories(include)

set(SOURCES src/Solucion.cpp src/Mochila.cpp src/Archivos.cpp src/main.cpp)

add_executable(Mochila ${SOURCES})
