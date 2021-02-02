#!/bin/bash
set -ex

CLEANUP()
{
    git reset --hard
    git clean -fdx
}
RUN_PROGRAMS()
{
    # a list of all programs / targets compiled by this project
    ./examples/console-utils-test
    ./examples/prime-sum-benchmark
    ./tests/testing-target
}

# compile gcc release
export CC=/usr/bin/gcc
export CXX=/usr/bin/g++
CLEANUP
cmake -DCMAKE_INSTALL_PREFIX=./inst .
cmake --build . --config Release
RUN_PROGRAMMS

# compile gcc debug
export CC=/usr/bin/gcc
export CXX=/usr/bin/g++
CLEANUP
cmake -DCMAKE_INSTALL_PREFIX=./inst .
cmake --build . --config Debug
RUN_PROGRAMMS

# compile clang release
export CC=/usr/bin/clang
export CXX=/usr/bin/clang++
CLEANUP
cmake -DCMAKE_INSTALL_PREFIX=./inst .
cmake --build . --config Release
RUN_PROGRAMMS

# compile clang debug
export CC=/usr/bin/clang
export CXX=/usr/bin/clang++
CLEANUP
cmake -DCMAKE_INSTALL_PREFIX=./inst .
cmake --build . --config Debug
RUN_PROGRAMMS
