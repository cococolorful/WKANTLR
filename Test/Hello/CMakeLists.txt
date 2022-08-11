cmake_minimum_required (VERSION 3.20)

project(TestHello)

set(CMAKE_CXX_STANDARD 17)

file(GLOB HEADER_FILES "*.h")
file(GLOB SOURCE_FILES "*.cpp" )

add_executable(TestHello ${HEADER_FILES} ${SOURCE_FILES} Hello.g4 )
target_link_libraries(TestHello  antlr4_static)
