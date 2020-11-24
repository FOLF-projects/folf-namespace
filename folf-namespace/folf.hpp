// folf namespace - by a fox and a wolf :D
// contains all functions used by our programs
// and some benchmarking functions
// licenced under MIT on GitHub
// https://github.com/FOLF-projects/folf-namespace
// by Damon Leven and AdmiralEmser

// tells the compile to only compile this file again if the content changes
#pragma once
// includes various functions for benchmarking and common tasks
namespace folf 
{
    namespace aboutFolf 
    {
        const char *folfVersion();
    }
    namespace numberOperations
    {
        // checks, if the given number is a Prime
        bool checkPrime(const unsigned long long *num);
        // Calculates all Primes to a given number together - multithreading capable
        void primeSum(const unsigned long long *maxNum, unsigned long long *primeSum);
        // returns true or false based on chance. input equals chance (1/x)
        bool isChance(int);
        // returns a random number up to x
        unsigned long long randomNum(int);
    }
    // time conversion and calculation functions
    namespace timeOperations {
        long double daysToHours(const long double *);
        long double daysToMinutes(const long double *);
        long double daysToSeconds(const long double *);
        long double hoursToDays(const long double *);
        long double hoursToMinutes(const long double *);
        long double hoursToSeconds(const long double *);
        long double minutesToDays(const long double *);
        long double minutesToHours(const long double *);
        long double minutesToSeconds(const long double *);
        long double minutesToMilliseconds(const long double *);
        long double secondsToHours(const long double *);
        long double secondsToMinutes(const long double *);
        long double secondsToMilliseconds(const long double *);
        long double secondsToMicroseconds(const long double *);
        long double millisecondsToMinutes(const long double *);
        long double millisecondsToSeconds(const long double *);
        long double millisecondsToMicroseconds(const long double *);
        long double microsecondsToSeconds(const long double *);
        long double microsecondsToMilliseconds(const long double *);
        // sleep for the given number of milliseconds
        void sleepFor(long double);
        // returns the current chrono timestamp
        long double getTimestamp();
        // writes its lifetime into the console - used for benchmarking
        class timeBench {
        private:
            long double startTime;
        public:
            // starts time benchmarking
            timeBench();
            // stops time benchmarking
            ~timeBench();
        };
    }
    // console related functions
    namespace consoleOperations 
    {
        // creates a simple loading animation
        void simpleLoadingAnimation(const char *, const bool *);
    }
    // algorithms of any kind
    namespace algorithms
    {
        // The Euclidean algorithm detects the greatest common divisor of two numbers.
        unsigned short int euclidean_algorithm(unsigned short int, unsigned short int);
    }
    // includes already rewritten functions and classes
    namespace legacy 
    {
        // calculates all numbers to a given number and throws them out - already reworked
        class TimeBenchLegacy 
        {
        private:
            // stores the timestamps
            long double startTime{}, stopTime{};
        public:
            TimeBenchLegacy();
            ~TimeBenchLegacy();
            // set start time
            void setStartTime();
            // set stop time
            void setStopTime();
            // calculate taken time
            [[nodiscard]] long double getMicroseconds() const;
            [[nodiscard]] long double getMilliseconds() const;
            [[nodiscard]] long double getSeconds() const;
            // returns taken time
            void printTimeMicroseconds() const;
            void printTimeMilliseconds() const;
            void printTimeSeconds() const;
        };
        // Calculates all Primes to a given number together and returns the result - already reworked
        unsigned long long primeSumLegacy(const unsigned long long *maxNum);
    }
}
