cmake_minimum_required(VERSION 3.12)

project(emli-competitive-programming)

add_executable(testrunner testrunner/main.cpp tasks/Stakani.cpp)
file(GLOB TASKS "tasks/*.cpp")
file(GLOB_RECURSE HEADERS "lib/*.hpp")

add_subdirectory(lib)
target_link_libraries(testrunner spcppl)

ADD_DEFINITIONS(-std=c++11)
