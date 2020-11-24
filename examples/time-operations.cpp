// time operations benchmark
// developed by Damon Leven and AdmiralEmser
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace

// #include "pch.h" // includes precompiled header with
#include <folf-namespace/folf.hpp>
#include <iostream>

int main() 
{
    const long double days = 9.97879;
    const double newDays = 9.97879;
    std::cout << "num = " << folf::timeOperations::daysToHours(&days) << std::endl;
    std::cout << "NewNum = " << newDays * 24 << std::endl;

    return 0;
}
