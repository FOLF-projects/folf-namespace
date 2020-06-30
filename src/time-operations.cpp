// time operation benchmark
// developed by Damon Leven and Admiral Emser
// see for licence details (MIT) at its official distribution:
// https://github.com/MCWertGaming/stuff-with-AdmiralEmser

// #include "pch.h" // includes precompiled header with 
#include "folf-namespace/folf-include.h"


int main()
{
    double days = 9.97879;
    double newDays = 9.97879;
    std::cout << "num = " << folf::timeCalculation::daysToHours(&days) << std::endl;
    std::cout << "NewNum = " << newDays * 24 << std::endl;

    return 0;
}