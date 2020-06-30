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
unsigned long long folf::benchmarking::getMicroseconds()
{
    return std::chrono::time_point_cast<std::chrono::microseconds>(stopTime).time_since_epoch().count() - std::chrono::time_point_cast<std::chrono::microseconds>(startTime).time_since_epoch().count();
}
unsigned long long folf::benchmarking::getMilliseconds()
{
    return getMicroseconds() / 1000;
}
long double folf::benchmarking::getSeconds()
{
    return getMicroseconds() / 1000000;
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
