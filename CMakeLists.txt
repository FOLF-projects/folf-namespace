cmake_minimum_required(VERSION 3.17.2)

# ===
# template
# ---
# project (project)
# set (CMAKE_CXX_FLAGS "Compiler flags")
# add_executable(executable path/to/file)
# target_precompile_headers(sample PRIVATE src/libfox/pch.h)
# ===

project(prime_number_generator)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
# set linux specific compile options
if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
set(CMAKE_CXX_FLAGS "-fopenmp")
endif()
add_executable(prime_number_generator src/prime-sum-benchmark.cpp src/folf-namespace/prime.cpp src/folf-namespace/benchmarking.cpp)
target_precompile_headers(prime_number_generator PRIVATE src/folf-namespace/pch.h)