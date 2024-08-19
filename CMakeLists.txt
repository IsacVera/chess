cmake_minimum_required(VERSION 3.30.2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Chess)

add_executable(Chess 
    "main.cpp"
    "ChessBoard.cpp"
)
