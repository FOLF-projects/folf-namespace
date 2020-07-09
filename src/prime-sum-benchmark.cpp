// Prime number calculator C++ benchmarking tool
// developed by Damon Leven and AdmiralEmser
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace

#include "folf-namespace/folf-include.hpp"

void primeFunction(unsigned long long* maxNumber,unsigned long long* primeSum, bool* finished)
{
    
    folf::prime::primeSum(maxNumber, primeSum);
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

    std::thread t1(folf::consoleUtils::simpleLoadingAnimation, "calculating ", &finished);
    std::thread t2(primeFunction, &maxNumber, &primeSum, &finished);

    {
        folf::timeBench tb;

        t1.join();
        t2.join();
    }

    std::cout << "sum: " << primeSum << std::endl;
    return 0;
}
