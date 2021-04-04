cmake_minimum_required(VERSION 3.13)

project(note_generator_test)

include_directories("../")

file(GLOB SOURCES "../*.cpp")
file(GLOB TEST_SOURCES "*.cpp")
list(APPEND SOURCES ${TEST_SOURCES})
add_executable(note_generator_test ${SOURCES})

target_link_libraries(note_generator_test
  gtest
  pthread)
