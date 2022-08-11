cmake_minimum_required (VERSION 3.20)

project(WKAntlr)

add_subdirectory(WKAntlr)

option(BUILD_TEST "build Test" TRUE)
if(BUILD_TEST)
add_subdirectory(Test)
endif()