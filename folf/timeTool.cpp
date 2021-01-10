// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// timeTool.cpp - Includes various time related functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#include "timeTool.hpp"
#include <iostream>
#include <chrono>

long double folf::timeTool::daysToHours(const long double *days)
{
    return *days * 24;
}
long double folf::timeTool::daysToMinutes(const long double *days) 
{
    return *days * 1440;
}
long double folf::timeTool::daysToSeconds(const long double *days) 
{
    return *days * 86400;
}
long double folf::timeTool::hoursToDays(const long double *hours) 
{
    return *hours / 24;
}
long double folf::timeTool::hoursToMinutes(const long double *hours) 
{
    return *hours * 60;
}
long double folf::timeTool::hoursToSeconds(const long double *hours) 
{
    return *hours * 3600;
}
long double folf::timeTool::minutesToDays(const long double *minutes) 
{
    return *minutes / 1440;
}
long double folf::timeTool::minutesToHours(const long double *minutes) 
{
    return *minutes / 60;
}
long double folf::timeTool::minutesToSeconds(const long double *minutes) 
{
    return *minutes * 60;
}
long double folf::timeTool::minutesToMilliseconds(const long double *minutes) 
{
    return *minutes * 60000;
}
long double folf::timeTool::secondsToHours(const long double *seconds) 
{
    return *seconds / 3600;
}
long double folf::timeTool::secondsToMinutes(const long double *seconds) 
{
    return *seconds / 60;
}
long double folf::timeTool::secondsToMilliseconds(const long double *seconds) 
{
    return *seconds * 1000;
}
long double folf::timeTool::secondsToMicroseconds(const long double *seconds) 
{
    return *seconds * 1000000;
}
long double folf::timeTool::millisecondsToMinutes(const long double *milliseconds) 
{
    return *milliseconds / 60000;
}
long double folf::timeTool::millisecondsToSeconds(const long double *milliseconds) 
{
    return *milliseconds / 1000;
}
long double folf::timeTool::millisecondsToMicroseconds(const long double *milliseconds) 
{
    return *milliseconds * 1000;
}
long double folf::timeTool::microsecondsToSeconds(const long double *microseconds) 
{
    return *microseconds / 1000000;
}
long double folf::timeTool::microsecondsToMilliseconds(const long double *microseconds) 
{
    return *microseconds / 1000;
}
void folf::timeTool::sleepFor(long double milliSeconds)
{
    unsigned int startTime = getTimestamp();
    long double timeTaken = 0;
    while (timeTaken / 1000 < milliSeconds)
    {
        timeTaken = getTimestamp() - startTime;
    };
}
folf::timeTool::timer::timer(unsigned short int millisecondsToWait)
{
    startTime = getTimestamp();
    timeToWait = millisecondsToWait;
}
bool folf::timeTool::timer::done() const
{
    unsigned int timeTaken = getTimestamp() - startTime;
    return timeTaken / 1000 > timeToWait;
}
void folf::timeTool::timer::reset()
{
    startTime = getTimestamp();
}
unsigned int folf::timeTool::getTimestamp()
{
    return std::chrono::time_point_cast<std::chrono::microseconds>(
            std::chrono::high_resolution_clock::now()).time_since_epoch().count();
}
folf::timeTool::timeBench::timeBench() 
{
    std::cout << "Benchmark started!\n";
    startTime = folf::timeTool::getTimestamp();
}
folf::timeTool::timeBench::~timeBench() 
{
    std::cout << "Benchmark finished!\n";
    long double takenTime = folf::timeTool::getTimestamp() - startTime;
    long double seconds = takenTime / 1000000; // calculates the milliseconds of the timestamp into seconds
    std::cout << "Time: " << seconds << " seconds\n";
}
