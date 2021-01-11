# prime sum benchmark
add_executable(prime-sum-benchmark prime-sum-benchmark.cpp)
target_link_libraries(prime-sum-benchmark folf-namespace)

# console test
add_executable(console-utils-test console-utils-test.cpp)
target_link_libraries(console-utils-test folf-namespace)

# time operations
add_executable(time-operations time-operations.cpp)
target_link_libraries(time-operations folf-namespace)

# create a list of all targets for compile options
set(EXAMPLE_PROGRAM_TARGETS prime-sum-benchmark console-utils-test time-operations)
