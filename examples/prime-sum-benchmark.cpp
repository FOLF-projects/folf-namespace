// ===========================================================
// Prime number calculator C++ benchmarking tool
// developed and distributed by FOLF-projects on Github
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// ===========================================================
#include <folf/folf.hpp>
#include <folf/folf-info.hpp>
#include <iostream>
#include <thread>

void primeFunction(unsigned long long *maxNumber, unsigned long long *primeSum, bool *finished) 
{
    folf::numberOperations::primeSum(maxNumber, primeSum);
    *finished = true;
}
int main()
{
    unsigned long long maxNumber = 10000000;
    std::cout << "prime number calculator" << std::endl;
    std::cout << "running version " << FOLF_VERSION_COMPLETE << " of FOLF" << std::endl;
    std::cout << "calculates every prime number up to " << maxNumber << std::endl;

    bool finished = false;
    unsigned long long primeSum = 0;

    {
        // start the timer
        folf::timeOperations::timeBench tb;

        // start threads
        std::thread t1(folf::consoleOperations::simpleLoadingAnimation, "calculating ", &finished);
        std::thread t2(primeFunction, &maxNumber, &primeSum, &finished);
        
        // synchronize threads again
        t1.join();
        t2.join();
    }

    std::cout << "sum: " << primeSum << std::endl;

    // check, if the value is right
    if (primeSum == 3203324994357)
        std::cout << "This value is correct!\n";
    else
    {
        std::cout << "This value is wrong! Oh no!\n";
        return 1;
    }
    return 0;
}
