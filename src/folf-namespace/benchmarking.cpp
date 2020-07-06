// benchmarking class functions
#include "folf.h"

folf::benchmarking::benchmarking()
{
}
folf::benchmarking::~benchmarking()
{
}
void folf::benchmarking::setStartTime()
{
    startTime = std::chrono::high_resolution_clock::now(); // saves start time
}
void folf::benchmarking::setStopTime()
{
    stopTime = std::chrono::high_resolution_clock::now(); // saves stop time
}
long double folf::benchmarking::getMicroseconds()
{
    return std::chrono::time_point_cast<std::chrono::microseconds>(stopTime).time_since_epoch().count() - std::chrono::time_point_cast<std::chrono::microseconds>(startTime).time_since_epoch().count();
}
long double folf::benchmarking::getMilliseconds()
{
    long double microseconds = folf::benchmarking::getMicroseconds();
    return folf::timeCalculation::microsecondsToMilliseconds(&microseconds);
}
long double folf::benchmarking::getSeconds()
{
    long double microseconds = folf::benchmarking::getMicroseconds();
    return folf::timeCalculation::microsecondsToSeconds(&microseconds);
}
void folf::benchmarking::printTimeMicroseconds()
{
    std::cout << "Time: " << getMicroseconds() << " microseconds" << std::endl;
}
void folf::benchmarking::printTimeMilliseconds()
{
    std::cout << "Time: " << getMilliseconds() << " milliseconds" << std::endl;
}
void folf::benchmarking::printTimeSeconds()
{
    std::cout << "Time: " << getSeconds() << " seconds" << std::endl;
}
