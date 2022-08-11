# -*- mode:cmake -*-
cmake_minimum_required (VERSION 3.20)
# 3.14 needed because of FetchContent

option(WITH_STATIC_CRT "(Visual C++) Enable to statically link CRT, which avoids requiring users to install the redistribution package.
 To disable with: -DWITH_STATIC_CRT=Off" On)

project(LIBANTLR4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(AntlrRuntime)
