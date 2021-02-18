cmake_minimum_required(VERSION 3.17)
project(task4)

set(CMAKE_CXX_STANDARD 14)

add_executable(task4 main.cpp Component.h Composite.cpp Composite.h Leaf.cpp Leaf.h Color.cpp Color.h)