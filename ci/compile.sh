#!/bin/bash
set -ex

cmake -DCMAKE_INSTALL_PREFIX=`pwd`/inst .
cmake --build . --config Release
cmake --build . --config Debug
