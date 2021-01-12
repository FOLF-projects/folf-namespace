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

long double folf::timeTools::daysToHours(const long double *days)
{
    return *days * 24;
}
long double folf::timeTools::daysToMinutes(const long double *days) 
{
    return *days * 1440;
}
long double folf::timeTools::daysToSeconds(const long double *days) 
{
    return *days * 86400;
}
long double folf::timeTools::hoursToDays(const long double *hours) 
{
    return *hours / 24;
}
long double folf::timeTools::hoursToMinutes(const long double *hours) 
{
    return *hours * 60;
}
long double folf::timeTools::hoursToSeconds(const long double *hours) 
{
    return *hours * 3600;
}
long double folf::timeTools::minutesToDays(const long double *minutes) 
{
    return *minutes / 1440;
}
long double folf::timeTools::minutesToHours(const long double *minutes) 
{
    return *minutes / 60;
}
long double folf::timeTools::minutesToSeconds(const long double *minutes) 
{
    return *minutes * 60;
}
long double folf::timeTools::minutesToMilliseconds(const long double *minutes) 
{
    return *minutes * 60000;
}
long double folf::timeTools::secondsToHours(const long double *seconds) 
{
    return *seconds / 3600;
}
long double folf::timeTools::secondsToMinutes(const long double *seconds) 
{
    return *seconds / 60;
}
long double folf::timeTools::secondsToMilliseconds(const long double *seconds) 
{
    return *seconds * 1000;
}
long double folf::timeTools::secondsToMicroseconds(const long double *seconds) 
{
    return *seconds * 1000000;
}
long double folf::timeTools::millisecondsToMinutes(const long double *milliseconds) 
{
    return *milliseconds / 60000;
}
long double folf::timeTools::millisecondsToSeconds(const long double *milliseconds) 
{
    return *milliseconds / 1000;
}
long double folf::timeTools::millisecondsToMicroseconds(const long double *milliseconds) 
{
    return *milliseconds * 1000;
}
long double folf::timeTools::microsecondsToSeconds(const long double *microseconds) 
{
    return *microseconds / 1000000;
}
long double folf::timeTools::microsecondsToMilliseconds(const long double *microseconds) 
{
    return *microseconds / 1000;
}
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
