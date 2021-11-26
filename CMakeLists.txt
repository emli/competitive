cmake_minimum_required(VERSION 3.19)
project(emli-competitive-programming)

add_executable(output output/main.cpp output/main.cpp testrunner/main.cpp testrunner/main.h)
add_executable(testrunner testrunner/main.cpp)
file(GLOB TASKS "tasks/*.cpp")
file(GLOB_RECURSE HEADERS "library/*.hpp" )

ADD_DEFINITIONS(-std=c++20)


add_executable(test ${TASKS} ${HEADERS})
