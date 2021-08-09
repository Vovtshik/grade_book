cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(grade_book VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(grade_book fig07_18.cpp GradeBook.cpp)
include_directories(grade_book headers)

