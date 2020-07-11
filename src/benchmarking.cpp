// benchmarking class functions
#include "folf.hpp"
#include <iostream>
#include <chrono>

long long folf::timeOperations::getTimestamp()
{
    return std::chrono::time_point_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now()).time_since_epoch().count();
}
folf::timeBench::timeBench()
{
    std::cout << "Benchmark started!\n";
    startTime = folf::timeOperations::getTimestamp();
}
folf::timeBench::~timeBench()
{
    std::cout << "Benchmark finished!\n";
    long double takenTime = folf::timeOperations::getTimestamp() - startTime;
    long double seconds = takenTime / 1000000; // calculates the milliseconds of the timestamp into seconds
    std::cout << "Time: " << seconds << " seconds\n";
}