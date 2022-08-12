cmake_minimum_required (VERSION 3.20)

project(TestCPP)

set(CMAKE_CXX_STANDARD 17)

file(GLOB HEADER_FILES "*.h")
file(GLOB SOURCE_FILES "*.cpp" )

add_executable(TestCPP ${HEADER_FILES} ${SOURCE_FILES} )
target_link_libraries(TestCPP  antlr4_static)
