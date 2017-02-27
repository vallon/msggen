cmake_minimum_required(VERSION 3.7)

project(MSGGEN)

add_library(msggen msggen.cc)
target_include_directories(msggen PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

