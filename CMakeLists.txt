cmake_minimum_required(VERSION 3.31)
project(LiFM)

set(CMAKE_CXX_STANDARD 20)
add_executable(LiFM main.cpp)


add_subdirectory(src)
add_subdirectory(dependencies/LiFM-Timeline)


target_link_libraries(LiFM PUBLIC LibLiFM)
target_link_libraries(LiFM PUBLIC LiFM_Timeline)
