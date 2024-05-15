cmake_minimum_required(VERSION 3.27)
project(CPP)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/head)

add_executable(CPP main.cpp
        head/array/_136_只出现一次的数字.h
        source/array/_136_只出现一次的数字.cpp)
