cmake_minimum_required(VERSION 3.13)

project(note_generator)

file(GLOB SOURCES "*.cpp")
add_executable(note_generator ${SOURCES})

target_link_libraries(note_generator
  gtest
  pthread)
