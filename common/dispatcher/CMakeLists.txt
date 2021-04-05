cmake_minimum_required(VERSION 3.13)

project(dispatcher)

file(GLOB SOURCES "*.cpp")
add_library(dispatcher SHARED ${SOURCES})
