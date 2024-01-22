cmake_minimum_required(VERSION 3.27)
project(firstlang C)

set(CMAKE_C_STANDARD 11)

add_executable(firstlang
        hello.c
        sum.c
        filter.c)
