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
        void genPrime(unsigned long long);
        unsigned long long getSum();
    };

    class benchmarking
    {
    private:
        std::chrono::_V2::system_clock::time_point startTime, stopTime;
    public:
        benchmarking();
        ~benchmarking();
        void setStartTime();
        void setStopTime();
        double getTime();
    };
}