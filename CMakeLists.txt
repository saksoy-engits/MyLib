cmake_minimum_required(VERSION 3.10)
project(MyLib)

set(CMAKE_CXX_STANDARD 17)

add_library(MyLib src/MyLib.cpp)

target_include_directories(MyLib PUBLIC include)
