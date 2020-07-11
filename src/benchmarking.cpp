// benchmarking class functions
#include "folf.hpp"
#include <iostream>
#include <chrono>

std::chrono::time_point<std::chrono::high_resolution_clock> folf::timeOperations::getTimestamp()
{
    return std::chrono::high_resolution_clock::now();
}
folf::timeBench::timeBench()
{
    std::cout << "Benchmark started!\n";
    startTime = folf::timeOperations::getTimestamp();
}
folf::timeBench::~timeBench()
{
    long double takenTime = std::chrono::time_point_cast<std::chrono::microseconds>(folf::timeOperations::getTimestamp()).time_since_epoch().count() - std::chrono::time_point_cast<std::chrono::microseconds>(startTime).time_since_epoch().count();
    long double seconds = takenTime / 1000000; // calculates the milliseconds of the timestamp into seconds
    std::cout << "Benchmark finished!\n";
    std::cout << "Time: " << seconds << " seconds\n";
}