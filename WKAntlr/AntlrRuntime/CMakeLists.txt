

file(GLOB_RECURSE libantlrcpp_Head "src/*.h")
file(GLOB_RECURSE libantlrcpp_SRC "src/*.cpp" Mustache/mustache.hpp)

add_library(antlr4_static STATIC ${libantlrcpp_SRC} ${libantlrcpp_Head})
target_include_directories(antlr4_static PUBLIC src Mustache)

#
#if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
#  set(disabled_compile_warnings "/wd4251")
#else()
#  set(disabled_compile_warnings "-Wno-overloaded-virtual")
#endif()
#
#set(extra_share_compile_flags "")
#set(extra_static_compile_flags "")
#if(WIN32)
#set(extra_share_compile_flags "-DANTLR4CPP_EXPORTS")
set(extra_static_compile_flags "-DANTLR4CPP_STATIC /wd4996")
#endif(WIN32)
#if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
#  if(WITH_STATIC_CRT)
#    target_compile_options(antlr4_shared PRIVATE "/MT$<$<CONFIG:Debug>:d>")
#    target_compile_options(antlr4_static PRIVATE "/MT$<$<CONFIG:Debug>:d>")
#  else()
#    target_compile_options(antlr4_shared PRIVATE "/MD$<$<CONFIG:Debug>:d>")
#    target_compile_options(antlr4_static PRIVATE "/MD$<$<CONFIG:Debug>:d>")
#  endif()
#endif()
#
#set(static_lib_suffix "")
#if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
#  set(static_lib_suffix "-static")
#endif()
#
#if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
#  set(extra_share_compile_flags "-DANTLR4CPP_EXPORTS -MP /wd4251")
#  set(extra_static_compile_flags "-DANTLR4CPP_STATIC -MP")
#endif()
#
#set_target_properties(antlr4_shared
#                      PROPERTIES VERSION   ${ANTLR_VERSION}
#                                 SOVERSION ${ANTLR_VERSION}
#                                 OUTPUT_NAME antlr4-runtime
#                                 LIBRARY_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
#                                 # TODO: test in windows. DLL is treated as runtime.
#                                 # see https://cmake.org/cmake/help/v3.0/prop_tgt/LIBRARY_OUTPUT_DIRECTORY.html
#                                 RUNTIME_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
#                                 ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUTPUT_DIR}
#                                 COMPILE_FLAGS "${disabled_compile_warnings} ${extra_share_compile_flags}")
#
set_target_properties(antlr4_static
                      PROPERTIES VERSION   ${ANTLR_VERSION}
                                 SOVERSION ${ANTLR_VERSION}
                                 OUTPUT_NAME "antlr4-runtime${static_lib_suffix}"
                                 COMPILE_FLAGS "${disabled_compile_warnings} ${extra_static_compile_flags}")

