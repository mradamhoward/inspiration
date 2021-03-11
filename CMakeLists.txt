cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled cmake-build-debug/main.cpp cmake-build-debug/person.cpp cmake-build-debug/person.h cmake-build-debug/engineer.h cmake-build-debug/engineer.cpp)