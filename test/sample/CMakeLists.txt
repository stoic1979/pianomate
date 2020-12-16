cmake_minimum_required(VERSION 3.10)

project(MathTest)

add_executable(MathTest Main.cpp Math.cpp MathTest.cpp)

target_link_libraries  (MathTest cppunit)
