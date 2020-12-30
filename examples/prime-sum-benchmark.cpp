// ===========================================================
// Prime number calculator C++ benchmarking tool
// developed and distributed by FOLF-projects on Github
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// ===========================================================
#include <folf-namespace/folf.hpp>
#include <folf-namespace/folf-info.hpp>
#include <iostream>
#include <thread>

void primeFunction(unsigned long long *maxNumber, unsigned long long *primeSum, bool *finished) 
{
    folf::numberOperations::primeSum(maxNumber, primeSum);
    *finished = true;
}
int main()
{
    std::cout << "running version " << FOLF_VERSION_COMPLETE << " of FOLF" << std::endl;
    unsigned long long maxNumber = 10000000;
    std::cout << "prime number calculator" << std::endl;
    std::cout << "calculates every prime number up to " << maxNumber << std::endl;
    std::cout << "starting to calculate..." << std::endl;

    bool finished = false;
    unsigned long long primeSum = 0;

    std::thread t1(folf::consoleOperations::simpleLoadingAnimation, "calculating ", &finished);
    std::thread t2(primeFunction, &maxNumber, &primeSum, &finished);

    {
        folf::timeOperations::timeBench tb;

        t1.join();
        t2.join();
    }

    std::cout << "sum: " << primeSum << std::endl;

    // check, if the value is right
    if (primeSum == 3203324994357)
        std::cout << "That value is correct!\n";
    else
    {
        std::cout << "That value is wrong! Oh no!\n";
        return 1;
    }
    return 0;
}
