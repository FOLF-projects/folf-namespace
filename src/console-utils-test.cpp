// console utils test
// developed by Damon Leven and AdmiralEmser
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace

// #include "pch.h" // includes precompiled header with 
#include "folf-namespace/folf-include.h"

void timer(bool* finished)
{
    #if defined(_WIN32)
        Sleep(10000);
    #elif (__linux__)
        usleep(10000000);
    #endif
    *finished = true;
}
int main()
{
    bool finished = false;
    std::thread t1(folf::consoleUtils::simpleLoadingAnimation, "running ", &finished);
    std::thread t2(timer, &finished);
    t1.join();
    t2.join();

    return 0;
}
