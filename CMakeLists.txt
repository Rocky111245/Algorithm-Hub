cmake_minimum_required(VERSION 3.26)
project(Algorithm_Hub)

set(CMAKE_CXX_STANDARD 23)

add_executable(Algorithm_Hub MergeSort.cpp
        Factorial.cpp
        "Binary Tree.cpp"
        QuickSort.cpp
        "Pixel Algorithm.cpp"
        "Hash Tables.cpp")
