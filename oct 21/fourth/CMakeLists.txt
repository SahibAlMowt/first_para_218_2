cmake_minimum_required(VERSION 3.10)

project(TimeBaku)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

add_library(mytime time.cpp)

target_include_directories(mytime PUBLIC  ${CMAKE_SOURCE_DIR})

add_executable(prog main.cpp)

target_link_libraries(prog PRIVATE mytime)
