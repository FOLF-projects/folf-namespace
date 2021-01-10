// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#pragma once

// includes various functions for benchmarking and common tasks
namespace folf 
{
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
        // creates a vector of two numbers by deviding the second from the first
        // createVector(X,Y)
        signed int createVector(const unsigned int*, const unsigned int*);
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
        // a simple timer with additional features
        class timer
        {
        private:
            unsigned int startTime{};
            unsigned short int timeToWait{};
        public:
            explicit timer(unsigned short int);
            virtual ~timer() = default;
            [[nodiscard]] bool done() const;
            void reset();
        };
        // returns the current chrono timestamp
        unsigned int getTimestamp();
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
}
