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
    auto start = std::chrono::time_point_cast<std::chrono::microseconds>(startTime).time_since_epoch().count();
    auto stop = std::chrono::time_point_cast<std::chrono::microseconds>(stopTime).time_since_epoch().count();
    return stop - start;
}
long double folf::benchmarking::getMilliseconds()
{
    return getMicroseconds() * 0.001;
}

void folf::benchmarking::printTimeMicroseconds()
{
    std::cout << "Time: " << getMicroseconds() << " microsends" << std::endl;
}
void folf::benchmarking::printTimeMilliseconds()
{
    std::cout << "Time: " << getMilliseconds() << " milliseconds" << std::endl;
}