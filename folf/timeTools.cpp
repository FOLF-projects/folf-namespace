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
    unsigned int startTime = folf_getTimestamp;
    long double timeTaken;
    do
    {
        timeTaken = folf_getTimestamp - startTime;
    }
    while (folf_microsecondsToMilliseconds(timeTaken) < milliSeconds);
}
folf::timeTools::timer::timer(unsigned short int millisecondsToWait) : timeToWait{millisecondsToWait}
{
    startTime = folf_getTimestamp;
}
bool folf::timeTools::timer::done() const
{
    return folf_microsecondsToMilliseconds(folf_getTimestamp - startTime) > timeToWait;
}
void folf::timeTools::timer::reset()
{
    startTime = folf_getTimestamp;
}
folf::timeTools::timeBench::timeBench() 
{
    std::cout << "Benchmark started!\n";
    startTime = folf_getTimestamp;
}
folf::timeTools::timeBench::~timeBench() 
{
    std::cout << "Benchmark finished!\nTime: "
              << folf_microsecondsToSeconds((long double)(folf_getTimestamp - startTime))
              << " seconds\n";
}
