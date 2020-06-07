// folf namespace - by a fox and a wolf :D
// contains all funktions used inside the repositories programms
#include "pch.h" // includes precompiled headers
namespace folf
{
    class prime
    {
    private:
        // stores the sum of all generated primes
        unsigned long long primeSum;
        // tests a given number if its a prime
        bool testPrime(unsigned long long);
    public:
        prime();
        ~prime();
        // generates all primes from 1 to a given number
        void genPrime(unsigned long long);
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
        unsigned long long getMicroseconds();
        long double getMilliseconds();
        // returns taken time
        void printTimeMicroseconds();
        void printTimeMilliseconds();
    };
}