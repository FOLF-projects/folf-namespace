// ===========================================================
// includes already reworked features of FOLF as small archive
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// ===========================================================
#include "folf.hpp"
#include <iostream>

void folf::legacy::TimeBenchLegacy::setStartTime() 
{
    startTime = folf::timeOperations::getTimestamp(); // saves start time
}
void folf::legacy::TimeBenchLegacy::setStopTime() 
{
    stopTime = folf::timeOperations::getTimestamp(); // saves stop time
}
long double folf::legacy::TimeBenchLegacy::getMicroseconds() const 
{
    return stopTime - startTime; // calculates the passed time
}
long double folf::legacy::TimeBenchLegacy::getMilliseconds() const 
{
    long double microseconds = folf::legacy::TimeBenchLegacy::getMicroseconds();
    return folf::timeOperations::microsecondsToMilliseconds(&microseconds);
}
long double folf::legacy::TimeBenchLegacy::getSeconds() const 
{
    long double microseconds = folf::legacy::TimeBenchLegacy::getMicroseconds();
    return folf::timeOperations::microsecondsToSeconds(&microseconds);
}
void folf::legacy::TimeBenchLegacy::printTimeMicroseconds() const 
{
    std::cout << "Time: " << getMicroseconds() << " microseconds" << std::endl;
}
void folf::legacy::TimeBenchLegacy::printTimeMilliseconds() const 
{
    std::cout << "Time: " << getMilliseconds() << " milliseconds" << std::endl;
}
void folf::legacy::TimeBenchLegacy::printTimeSeconds() const 
{
    std::cout << "Time: " << getSeconds() << " seconds" << std::endl;
}
unsigned long long folf::legacy::primeSumLegacy(const unsigned long long *maxNum) 
{
    unsigned long long primeSum = 2;



    for (unsigned long long i = 1; i < *maxNum; i += 2)
    {
        // testPrime returns true, if the given number is a Prime
        if (folf::numberOperations::checkPrime(&i))
        {
            primeSum = primeSum + i;
        }
    }
    return primeSum;
}
