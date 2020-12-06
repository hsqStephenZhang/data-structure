cmake_minimum_required(VERSION 3.15)
project(data_structure)

set(CMAKE_CXX_STANDARD 20)

include_directories(_share)


add_executable(data_structure main.cpp)
add_executable(BinTree BinTree/main.cpp BinTree)