// folf namespace - by a fox and a wolf :D
// contains all funktions used inside the repositories programms
// and some benchmarking functions
// licenced under MIT on GitHub
// https://github.com/MCWertGaming/folf-namespace
// by Damon Leven and Admiral Emser

// includes precompiled headers
#include "pch.h"
// tells the compile to only compile this file again if the content changes
#pragma once
// includes various functions for benchmarking and common tasks
namespace folf
{
    class prime
    {
    private:
        // stores the sum of all generated primes
        unsigned long long primeSum;
        // tests a given number if its a prime
        bool testPrime(unsigned long long*);
    public:
        prime();
        ~prime();
        // generates all primes from 1 to a given number
        void genPrime(unsigned long long*);
        // returns the sum of all generated prime numbers
        unsigned long long getSum();
    };

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
        unsigned long long getMicroseconds();
        unsigned long long getMilliseconds();
        long double getSeconds();
        // returns taken time
        void printTimeMicroseconds();
        void printTimeMilliseconds();
        void printTimeSeconds();
    };

    class numberOperations
    {
    public:
        numberOperations();
        ~numberOperations();
        // TODO create squareroot function

    private:
        // var
    };

    numberOperations::numberOperations()
    {
    }

    numberOperations::~numberOperations()
    {
    }

    class timeCalcualtion
    {
    public:
        timeCalcualtion();
        ~timeCalcualtion();
        // functions for converting time
        double daysToHours(double*);
        double daysToMinutes(double*);
        double daysToSeconds(double*);
        double hoursToDays(double*);
        double hoursToMinutes(double*);
        double hoursToSeconds(double*);
        double minutesToDays(double*);
        double minutesToHours(double*);
        double minutesToSeconds(double*);
        double minutesToMilliseconds(double*);
        double secondsToHours(double*);
        double secondsToMinutes(double*);
        double secondsToMilliseconds(double*);
        double secondsToMicroseconds(double*);
        double millisecondsToMinutes(double*);
        double millisecondsToSeconds(double*);
        double millisecondsToMicroseconds(double*);
        double microsecondsToSeconds(double*);
        double microsecondsToMilliseconds(double*);
    private:
        // stuff
    };
}