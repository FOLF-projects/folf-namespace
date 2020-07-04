// Prime number calculator C++ benchmarking tool
// developed by Damon Leven and AdmiralEmser
// see for licence details (MIT) at its official distribution:
// https://github.com/MCWertGaming/folf-namespace

// #include "pch.h" // includes precompiled header with 
#include "folf-namespace/folf-include.h"

void primeFunction(unsigned long long* maxNumber,unsigned long long* primeSum, double* secondsTaken, bool* finished)
{
    folf::benchmarking bench;

    bench.setStartTime();

    folf::prime::primeCalcNew(maxNumber, primeSum);

    bench.setStopTime();
    *secondsTaken = bench.getSeconds();
    *finished = true;
}
int main() 
{
    unsigned long long maxNumber = 10000000;
    std::cout << "prime number calculator" << std::endl;
    std::cout << "calculates every prime number up to " << maxNumber << std::endl;
    std::cout << "starting to calculate..." << std::endl;

    bool finished = false;
    unsigned long long primeSum = 0;
    double secondsTaken = 0;

    std::thread t1(folf::consoleUtils::simpleLoadingAnimation, "calculating ", &finished);
    std::thread t2(primeFunction, &maxNumber, &primeSum, &secondsTaken, &finished);
    t1.join();
    t2.join();

    std::cout << "sum: " << primeSum << std::endl;
    std::cout << "Time: " << secondsTaken << " seconds\n";
    return 0;
}