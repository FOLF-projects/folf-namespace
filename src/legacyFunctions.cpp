// source files for already reworked functions
#include "folf.hpp"
#include <iostream>
#include "omp.h"

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
    return std::chrono::time_point_cast<std::chrono::microseconds>(stopTime).time_since_epoch().count() - std::chrono::time_point_cast<std::chrono::microseconds>(startTime).time_since_epoch().count(); // calculates the passed time
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
unsigned long long folf::prime::primeSumLegacy(unsigned long long* maxNum)
{
    unsigned long long primeSum = 2;
    // OpenMP implementation for multithreading the for loop, completly optional
    omp_set_num_threads(9);                                 // this defines the number of maximal threads, 999 should work fine (threads can be more than actual CPU cores, because most loops are empty)
    #pragma omp parallel for reduction( + : primeSum )       // if it fails to compile, make sure to set -fopenmp and use a modern compiler shiped with OpenMP
    for (unsigned long long i = 1; i < *maxNum; i += 2)
    {
        // testPrime returns true, if the given number is a Prime
        if (folf::prime::testPrime(&i) == true)
        {
            primeSum = primeSum + i;
        }
    }
    return primeSum;
}
