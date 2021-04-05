cmake_minimum_required(VERSION 3.13)

project(dispatcher_test)

include_directories("../")

file(GLOB SOURCES "../*.cpp")
file(GLOB TEST_SOURCES "*.cpp")
list(APPEND SOURCES ${TEST_SOURCES})
add_executable(dispatcher_test ${SOURCES})

target_link_libraries(dispatcher_test
  gtest
  pthread)
