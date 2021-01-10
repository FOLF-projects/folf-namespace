// ===========================================================
// console utils test
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// ===========================================================
#include <folf/folf.hpp>
#include <thread>

void timer(bool *finished) 
{
    folf::timeOperations::sleepFor(15);
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
