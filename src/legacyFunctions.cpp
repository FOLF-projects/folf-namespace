// source files for already reworked functions
#include "folf.hpp"
#include <iostream>
#include "omp.h"

folf::legacy::TimeBenchLegacy::TimeBenchLegacy()
{
}
folf::legacy::TimeBenchLegacy::~TimeBenchLegacy()
{
}
void folf::legacy::TimeBenchLegacy::setStartTime()
{
    startTime = folf::timeOperations::getTimestamp(); // saves start time
}
void folf::legacy::TimeBenchLegacy::setStopTime()
{
    stopTime = folf::timeOperations::getTimestamp(); // saves stop time
}
long double folf::legacy::TimeBenchLegacy::getMicroseconds()
{
    return stopTime - startTime; // calculates the passed time
}
long double folf::legacy::TimeBenchLegacy::getMilliseconds()
{
    long double microseconds = folf::legacy::TimeBenchLegacy::getMicroseconds();
    return folf::timeCalculation::microsecondsToMilliseconds(&microseconds);
}
long double folf::legacy::TimeBenchLegacy::getSeconds()
{
    long double microseconds = folf::legacy::TimeBenchLegacy::getMicroseconds();
    return folf::timeCalculation::microsecondsToSeconds(&microseconds);
}
void folf::legacy::TimeBenchLegacy::printTimeMicroseconds()
{
    std::cout << "Time: " << getMicroseconds() << " microseconds" << std::endl;
}
void folf::legacy::TimeBenchLegacy::printTimeMilliseconds()
{
    std::cout << "Time: " << getMilliseconds() << " milliseconds" << std::endl;
}
void folf::legacy::TimeBenchLegacy::printTimeSeconds()
{
    std::cout << "Time: " << getSeconds() << " seconds" << std::endl;
}
unsigned long long folf::legacy::primeSumLegacy(unsigned long long* maxNum)
{
    unsigned long long primeSum = 2;
    // OpenMP implementation for multithreading the for loop, completly optional
    omp_set_num_threads(9);                                 // this defines the number of maximal threads, 999 should work fine (threads can be more than actual CPU cores, because most loops are empty)
    #pragma omp parallel for reduction( + : primeSum )       // if it fails to compile, make sure to set -fopenmp and use a modern compiler shiped with OpenMP
    for (unsigned long long i = 1; i < *maxNum; i += 2)
    {
        // testPrime returns true, if the given number is a Prime
        if (folf::prime::checkPrime(&i) == true)
        {
            primeSum = primeSum + i;
        }
    }
    return primeSum;
}
