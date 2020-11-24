// console utils test
// developed by Damon Leven and AdmiralEmser
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace

#include <folf-namespace/folf.hpp>
#include <thread>

void timer(bool *finished) 
{
    folf::timeOperations::sleepFor(10000);
    *finished = true;
}
int main() 
{
    bool finished = false;
    std::thread t1(folf::consoleOperations::simpleLoadingAnimation, "running ", &finished);
    std::thread t2(timer, &finished);
    t1.join();
    t2.join();

    return 0;
}
