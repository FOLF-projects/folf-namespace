#!/bin/bash
set -ex

// use clang for compilation to fix OpenMP error on macos
export CC=/usr/bin/clang
export CXX=/usr/bin/clang++

cmake -DCMAKE_INSTALL_PREFIX=`pwd`/inst .
cmake --build . --config Release
cmake --build . --config Debug

# run the programs
./examples/console-utils-test
./examples/prime-sum-benchmark
./examples/time-operations
