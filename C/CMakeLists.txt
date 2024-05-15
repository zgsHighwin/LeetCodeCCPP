cmake_minimum_required(VERSION 3.27)
project(C C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/head)
file(GLOB_RECURSE SOURCES "*.cpp,*.h")


add_executable(C main.c
        head/array/_136_只出现一次的数字.h
        source/array/_136_只出现一次的数字.c
)
