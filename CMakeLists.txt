cmake_minimum_required(VERSION 3.17.2)

# ===
# template
# ---
# project (project)
# set (CMAKE_CXX_FLAGS "Compiler flags")
# add_executable(executable path/to/file)
# target_precompile_headers(sample PRIVATE src/libfox/pch.h)
# ===

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
target_precompile_headers(prime-sum-benchmark PRIVATE src/folf-namespace/pch.h)

# window-demo
add_executable(window-demo src/window-demo.cpp)
target_precompile_headers(window-demo PRIVATE src/folf-namespace/pch.h)