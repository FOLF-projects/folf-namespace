// ===========================================================
// console utils test
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// ===========================================================
#include <folf/timeTools.hpp>
#include <folf/conTools.hpp>
#include <chrono>
#include <thread>

void timer(bool *finished)
{
    folf_sleepFor(folf_secondsToMicroseconds(1));
    *finished = true;
}
int main() 
{
    bool finished = false;
    std::thread t1(folf::conTools::simpleLoadingAnimation, "running ", &finished);
    std::thread t2(timer, &finished);
    t1.join();
    t2.join();

    return 0;
}
