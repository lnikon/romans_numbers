cmake_minimum_required(VERSION 2.8)
project(nums)

#set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -pedantic -pthread -O2 -std=c++17")
#add_definitions(${GCC_COVERAGE_COMPILE_FLAGS})

set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic -pthread -O2 -std=c++17")
add_definitions(${CMAKE_CXX_FLAGS})

include_directories("./include")
file(GLOB SOURCES "./src/*.cpp")


message("CMake build type is ${CMAKE_BUILD_TYPE}")
add_executable(main ${SOURCES})
