cmake_minimum_required(VERSION 3.17)
project(Sudoku_Solver)

set(CMAKE_CXX_STANDARD 14)

add_executable(Sudoku_Solver main.cpp include/Sudoku.h src/Sudoku.cpp)