cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

set(GCC_COVERAGE_COMPILE_FLAGS "-pthread")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

add_executable(untitled cmake-build-debug/main.cpp cmake-build-debug/person.cpp cmake-build-debug/person.h cmake-build-debug/engineer.h cmake-build-debug/engineer.cpp)