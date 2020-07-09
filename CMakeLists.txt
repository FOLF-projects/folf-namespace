cmake_minimum_required(VERSION 3.16)
# versions below 1.16 don't suport precompiled headers

project(folf-namespace)

# compile options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
# set linux specific compile options
if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
set(CMAKE_CXX_FLAGS "-fopenmp")
endif()

# prime-sum-benchmark
add_executable(prime-sum-benchmark src/prime-sum-benchmark.cpp)
target_precompile_headers(prime-sum-benchmark PRIVATE src/folf-namespace/pch.hpp)

# time operations
add_executable(time-operations src/time-operations.cpp)
target_precompile_headers(time-operations PRIVATE src/folf-namespace/pch.hpp)

# console-utils
add_executable(console-utils src/console-utils-test.cpp)
target_precompile_headers(console-utils PRIVATE src/folf-namespace/pch.hpp)
