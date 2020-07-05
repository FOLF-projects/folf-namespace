// benchmarking class functions
#include "folf.h"

std::chrono::time_point<std::chrono::high_resolution_clock> folf::timeOperations::getTimestamp()
{
    return std::chrono::high_resolution_clock::now();
}
timeBench::timeBench()
{
    startTime = folf::timeOperations::getTimestamp();
}
timeBench::~timeBench()
{
    long double takenTime = std::chrono::time_point_cast<std::chrono::microseconds>(folf::timeOperations::getTimestamp()).time_since_epoch().count() - std::chrono::time_point_cast<std::chrono::microseconds>(startTime).time_since_epoch().count();
    long double seconds = takenTime / 1000000;
    std::cout << "Time: " << seconds << " seconds\n";
}
folf::TimeBenchLegacy::TimeBenchLegacy()
{
}
folf::TimeBenchLegacy::~TimeBenchLegacy()
{
}
void folf::TimeBenchLegacy::setStartTime()
{
    startTime = std::chrono::high_resolution_clock::now(); // saves start time
}
void folf::TimeBenchLegacy::setStopTime()
{
    stopTime = std::chrono::high_resolution_clock::now(); // saves stop time
}
long double folf::TimeBenchLegacy::getMicroseconds()
{
    return std::chrono::time_point_cast<std::chrono::microseconds>(stopTime).time_since_epoch().count() - std::chrono::time_point_cast<std::chrono::microseconds>(startTime).time_since_epoch().count();
}
long double folf::TimeBenchLegacy::getMilliseconds()
{
    long double microseconds = folf::TimeBenchLegacy::getMicroseconds();
    return folf::timeCalculation::microsecondsToMilliseconds(&microseconds);
}
long double folf::TimeBenchLegacy::getSeconds()
{
    long double microseconds = folf::TimeBenchLegacy::getMicroseconds();
    return folf::timeCalculation::microsecondsToSeconds(&microseconds);
}
void folf::TimeBenchLegacy::printTimeMicroseconds()
{
    std::cout << "Time: " << getMicroseconds() << " microseconds" << std::endl;
}
void folf::TimeBenchLegacy::printTimeMilliseconds()
{
    std::cout << "Time: " << getMilliseconds() << " milliseconds" << std::endl;
}
void folf::TimeBenchLegacy::printTimeSeconds()
{
    std::cout << "Time: " << getSeconds() << " seconds" << std::endl;
}
