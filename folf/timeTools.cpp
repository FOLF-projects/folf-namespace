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
#include <thread>

folf::timeTools::timer::timer(unsigned short int millisecondsToWait) : timeToWait{millisecondsToWait}
{
    startTime = getTimestamp();
}
bool folf::timeTools::timer::done() const
{
    return microsecondsToMilliseconds(getTimestamp() - startTime) > timeToWait;
}
void folf::timeTools::timer::reset()
{
    startTime = getTimestamp();
}
folf::timeTools::timeBench::timeBench() 
{
    std::cout << "Benchmark started!\n";
    startTime = getTimestamp();
}
folf::timeTools::timeBench::~timeBench() 
{
    std::cout << "Benchmark finished!\nTime: "
              << microsecondsToSeconds((long double)(getTimestamp() - startTime))
              << " seconds\n";
}
unsigned int folf::timeTools::getTimestamp()
{
    return std::chrono::time_point_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now()).time_since_epoch().count();
}
void folf::timeTools::sleep(unsigned int microSeconds)
{
    std::this_thread::sleep_for(std::chrono::microseconds(microSeconds));
}

inline long long folf::timeTools::daysToHours(unsigned int days)
{
    return days * (long long)24;
}
inline long long folf::timeTools::daysToMinutes(unsigned int days)
{
    return days * (long long)1440;
}
inline long long folf::timeTools::daysToSeconds(unsigned int days)
{
    return days * (long long)86400;
}
inline double folf::timeTools::hoursToDays(unsigned int hours)
{
    return hours / (double)24;
}
inline long long folf::timeTools::hoursToMinutes(unsigned int hours)
{
    return hours * (long long)60;
}
inline long long folf::timeTools::hoursToSeconds(unsigned hours)
{
    return hours * (long long)3600;
}
inline double folf::timeTools::minutesToDays(unsigned int hours)
{
    return hours / (double)1440;
}
inline double folf::timeTools::minutesToHours(unsigned int minutes)
{
    return minutes / (double)60;
}
inline long long folf::timeTools::minutesToSeconds(unsigned int minutes)
{
    return minutes * (long long)60;
}
inline long long folf::timeTools::minutesToMilliseconds(unsigned int minutes)
{
    return minutes * (long long)60000;
}
inline double folf::timeTools::secondsToHours(unsigned int seconds)
{
    return seconds / (double)3600;
}
inline double folf::timeTools::secondsToMinutes(unsigned int seconds)
{
    return seconds / (double)60;
}
inline long long folf::timeTools::secondsToMilliseconds(unsigned int seconds)
{
    return seconds * (long long)1000;
}
inline long long folf::timeTools::secondsToMicroseconds(unsigned int seconds)
{
    return seconds * (long long)1000000;
}
inline double folf::timeTools::millisecondsToMinutes(unsigned int milliseconds)
{
    return milliseconds / (double)60000;
}
inline double folf::timeTools::millisecondsToSeconds(unsigned int milliseconds)
{
    return milliseconds / (double)1000;
}
inline long long folf::timeTools::millisecondsToMicroseconds(unsigned int milliseconds)
{
    return milliseconds * (long long)1000;
}
inline double folf::timeTools::microsecondsToSeconds(unsigned int microseconds)
{
    return microseconds / (double)1000000;
}
inline double folf::timeTools::microsecondsToMilliseconds(unsigned int microseconds)
{
    return microseconds / (double)1000;
}
