cmake_minimum_required(VERSION 3.31)
project(LibLiFM)

set(CMAKE_CXX_STANDARD 20)

add_library(LibLiFM
        LiFM.cpp
)

target_include_directories(LibLiFM PUBLIC include)
