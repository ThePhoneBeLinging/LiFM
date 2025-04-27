cmake_minimum_required(VERSION 3.31)
project(LiFM)

set(CMAKE_CXX_STANDARD 20)

add_executable(LiFM main.cpp)


target_link_libraries(LiFM PUBLIC LiFM_Data)
target_link_libraries(LiFM PUBLIC Utility)