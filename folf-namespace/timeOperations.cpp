// ===========================================================
// includes time related features
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// ===========================================================
#include "folf.hpp"
#include <iostream>
#include <chrono>

long double folf::timeOperations::daysToHours(const long double *days)
{
    return *days * 24;
}
long double folf::timeOperations::daysToMinutes(const long double *days) 
{
    return *days * 1440;
}
long double folf::timeOperations::daysToSeconds(const long double *days) 
{
    return *days * 86400;
}
long double folf::timeOperations::hoursToDays(const long double *hours) 
{
    return *hours / 24;
}
long double folf::timeOperations::hoursToMinutes(const long double *hours) 
{
    return *hours * 60;
}
long double folf::timeOperations::hoursToSeconds(const long double *hours) 
{
    return *hours * 3600;
}
long double folf::timeOperations::minutesToDays(const long double *minutes) 
{
    return *minutes / 1440;
}
long double folf::timeOperations::minutesToHours(const long double *minutes) 
{
    return *minutes / 60;
}
long double folf::timeOperations::minutesToSeconds(const long double *minutes) 
{
    return *minutes * 60;
}
long double folf::timeOperations::minutesToMilliseconds(const long double *minutes) 
{
    return *minutes * 60000;
}
long double folf::timeOperations::secondsToHours(const long double *seconds) 
{
    return *seconds / 3600;
}
long double folf::timeOperations::secondsToMinutes(const long double *seconds) 
{
    return *seconds / 60;
}
long double folf::timeOperations::secondsToMilliseconds(const long double *seconds) 
{
    return *seconds * 1000;
}
long double folf::timeOperations::secondsToMicroseconds(const long double *seconds) 
{
    return *seconds * 1000000;
}
long double folf::timeOperations::millisecondsToMinutes(const long double *milliseconds) 
{
    return *milliseconds / 60000;
}
long double folf::timeOperations::millisecondsToSeconds(const long double *milliseconds) 
{
    return *milliseconds / 1000;
}
long double folf::timeOperations::millisecondsToMicroseconds(const long double *milliseconds) 
{
    return *milliseconds * 1000;
}
long double folf::timeOperations::microsecondsToSeconds(const long double *microseconds) 
{
    return *microseconds / 1000000;
}
long double folf::timeOperations::microsecondsToMilliseconds(const long double *microseconds) 
{
    return *microseconds / 1000;
}
void folf::timeOperations::sleepFor(long double milliSeconds)
{
    unsigned int startTime = getTimestamp();
    long double timeTaken = 0;
    while (timeTaken / 1000 < milliSeconds)
    {
        timeTaken = getTimestamp() - startTime;
    };
}
folf::timeOperations::timer::timer(unsigned short int millisecondsToWait)
{
    startTime = getTimestamp();
    timeToWait = millisecondsToWait;
}
bool folf::timeOperations::timer::done() const
{
    unsigned int timeTaken = getTimestamp() - startTime;
    return timeTaken / 1000 > timeToWait;
}
void folf::timeOperations::timer::reset()
{
    startTime = getTimestamp();
}
unsigned int folf::timeOperations::getTimestamp()
{
    return std::chrono::time_point_cast<std::chrono::microseconds>(
            std::chrono::high_resolution_clock::now()).time_since_epoch().count();
}
folf::timeOperations::timeBench::timeBench() 
{
    std::cout << "Benchmark started!\n";
    startTime = folf::timeOperations::getTimestamp();
}
folf::timeOperations::timeBench::~timeBench() 
{
    std::cout << "Benchmark finished!\n";
    long double takenTime = folf::timeOperations::getTimestamp() - startTime;
    long double seconds = takenTime / 1000000; // calculates the milliseconds of the timestamp into seconds
    std::cout << "Time: " << seconds << " seconds\n";
}
