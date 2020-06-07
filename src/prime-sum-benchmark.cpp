// Prime number calculator C++ benchmarkingg tool
// developed by Damon Leven and Admiral Emser
// see for licence details (MIT) at its official distribution:
// https://github.com/MCWertGaming/stuff-with-AdmiralEmser

// #include "pch.h" // includes precompiled header with 
#include "folf-namespace/folf.h"

int main() {

    unsigned long long maxNumber = 29999999;
    std::cout << "primenumber calculator" << std::endl;
    std::cout << "calculates every prime number up to " << maxNumber << std::endl;
    std::cout << "starting to calculate..." << std::endl;

    folf::prime prime;
    folf::benchmarking bench;

    bench.setStartTime();

    prime.genPrime(maxNumber);

    bench.setStopTime();

    std::cout << "Calculation finished!" << std::endl;
    std::cout << "Elapsed time: " << bench.getTime() << " s" << std::endl;
    std::cout << "sum is: " << prime.getSum() << std::endl;
    return 0;
}