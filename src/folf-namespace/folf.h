// folf namespace - by a fox and a wolf :D
// contains all functions used by our programms
// and some benchmarking functions
// licenced under MIT on GitHub
// https://github.com/MCWertGaming/folf-namespace
// by Damon Leven and AdmiralEmser

// includes precompiled headers
#include "pch.h"
// tells the compile to only compile this file again if the content changes
#pragma once
// includes various functions for benchmarking and common tasks
namespace folf
{
    namespace prime
    {
        // tests, if the given number is a Prime
        bool testPrime(unsigned long long* num);
        // Calcualtes all Primes to a given number together - Multithreading capable 
        void primeCalcNew(unsigned long long* maxNum, unsigned long long* primeSum);
        // Calcualtes all Primes to a given number together and returnes the result
        unsigned long long primeCalcLegacy(unsigned long long* maxNum);
    }
    class benchmarking
    {
    private:
        // stores the timestamps
        std::chrono::time_point<std::chrono::high_resolution_clock> startTime, stopTime;
    public:
        benchmarking();
        ~benchmarking();
        // set start time
        void setStartTime();
        // set stoptime
        void setStopTime();
        // calculate taken time
        long double getMicroseconds();
        long double getMilliseconds();
        long double getSeconds();
        // returns taken time
        void printTimeMicroseconds();
        void printTimeMilliseconds();
        void printTimeSeconds();
    };
    // serves time-related functions
    namespace timeCalculation
    {
        long double daysToHours(long double*);
        long double daysToMinutes(long double*);
        long double daysToSeconds(long double*);
        long double hoursToDays(long double*);
        long double hoursToMinutes(long double*);
        long double hoursToSeconds(long double*);
        long double minutesToDays(long double*);
        long double minutesToHours(long double*);
        long double minutesToSeconds(long double*);
        long double minutesToMilliseconds(long double*);
        long double secondsToHours(long double*);
        long double secondsToMinutes(long double*);
        long double secondsToMilliseconds(long double*);
        long double secondsToMicroseconds(long double*);
        long double millisecondsToMinutes(long double*);
        long double millisecondsToSeconds(long double*);
        long double millisecondsToMicroseconds(long double*);
        long double microsecondsToSeconds(long double*);
        long double microsecondsToMilliseconds(long double*);
    }

    // get random numbers
    namespace random
    {
        // returns true or false based on chance. input equals chance (1/x)
        bool isChance(int*);
        // returns a random number up to x
        int randomNum(int*);
    }

    namespace consoleUtils
    {
        void simpleLoadingAnimation(std::string, bool*);
    }
}
