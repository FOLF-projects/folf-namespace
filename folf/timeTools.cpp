// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// timeTool.cpp - Includes various time related functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#include "timeTools.hpp"
#include <iostream>
#include <chrono>

void folf::timeTools::sleepFor(long double milliSeconds)
{
    unsigned int startTime = getTimestamp();
    long double timeTaken = 0;
    while (timeTaken / 1000 < milliSeconds)
    {
        timeTaken = getTimestamp() - startTime;
    };
}
folf::timeTools::timer::timer(unsigned short int millisecondsToWait)
{
    startTime = getTimestamp();
    timeToWait = millisecondsToWait;
}
bool folf::timeTools::timer::done() const
{
    unsigned int timeTaken = getTimestamp() - startTime;
    return timeTaken / 1000 > timeToWait;
}
void folf::timeTools::timer::reset()
{
    startTime = getTimestamp();
}
unsigned int folf::timeTools::getTimestamp()
{
    return std::chrono::time_point_cast<std::chrono::microseconds>(
            std::chrono::high_resolution_clock::now()).time_since_epoch().count();
}
folf::timeTools::timeBench::timeBench() 
{
    std::cout << "Benchmark started!\n";
    startTime = folf::timeTools::getTimestamp();
}
folf::timeTools::timeBench::~timeBench() 
{
    std::cout << "Benchmark finished!\n";
    long double takenTime = folf::timeTools::getTimestamp() - startTime;
    long double seconds = takenTime / 1000000; // calculates the milliseconds of the timestamp into seconds
    std::cout << "Time: " << seconds << " seconds\n";
}
