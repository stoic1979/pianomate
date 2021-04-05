cmake_minimum_required(VERSION 3.13)

project(note_generator)

file(GLOB SOURCES "*.cpp")
add_library(note_generator SHARED ${SOURCES})

target_link_libraries(note_generator
  gtest
  pthread)
