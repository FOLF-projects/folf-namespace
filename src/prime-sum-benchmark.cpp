// Prime number calculator C++ benchmarkingg tool
// developed by Damon Leven and AdmiralEmser
// see for licence details (MIT) at its official distribution:
// https://github.com/MCWertGaming/folf-namespace

// #include "pch.h" // includes precompiled header with 
#include "folf-namespace/folf-include.h"

int main() 
{
    unsigned long long maxNumber = 10000000;
    std::cout << "prime number calculator" << std::endl;
    std::cout << "calculates every prime number up to " << maxNumber << std::endl;
    std::cout << "starting to calculate..." << std::endl;

    folf::prime prime;
    folf::benchmarking bench;

    bench.setStartTime();

    prime.genPrime(&maxNumber);

    bench.setStopTime();

    bench.printTimeMicroseconds();
    bench.printTimeMilliseconds();
    bench.printTimeSeconds();

    std::cout << "Calculation finished!" << std::endl;
    std::cout << "sum is: " << prime.getSum() << std::endl;
    return 0;
}