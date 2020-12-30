cmake -DCMAKE_INSTALL_PREFIX=%cd%\inst .
cmake --build . --config Release
cmake --build . --config Debug

.\examples\console-utils-test.exe
.\examples\prime-sum-benchmark.exe
.\examples\time-operations.exe
