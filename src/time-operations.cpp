// time operations benchmark
// developed by Damon Leven and AdmiralEmser
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace

// #include "pch.h" // includes precompiled header with 
#include "folf-namespace/folf-include.h"

int main()
{
    long double days = 9.97879;
    double newDays = 9.97879;
    std::cout << "num = " << folf::timeCalculation::daysToHours(&days) << std::endl;
    std::cout << "NewNum = " << newDays * 24 << std::endl;

    return 0;
}
