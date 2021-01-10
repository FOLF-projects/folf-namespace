#!/bin/bash
set -ex

# compile function
compile()
{
    cmake -DCMAKE_INSTALL_PREFIX=`pwd`/inst .
    cmake --build . --config Release
    cmake --build . --config Debug
}
# run programms function
run_programs()
{
    ./examples/console-utils-test
    ./examples/prime-sum-benchmark
    ./examples/time-operations
}

# test with gcc
export CC=/usr/bin/gcc
export CXX=/usr/bin/g++
compile
run_programs

# cleanup cmake
rm -rf build

# test with clang
export CC=/usr/bin/clang
export CXX=/usr/bin/clang++
compile
run_programs
