# top-level CMakeLists

cmake_minimum_required(VERSION 3.20)
project(intercom)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS_DEBUG -g)
set(CMAKE_CXX_STANDARD_REQUIRED 20)
set(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG -O3")
set(CMAKE_CXX_FLAGS "-pedantic-errors -Wall -Werror -Wextra")

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(test)
