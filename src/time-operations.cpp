// time operation benchmark
// developed by Damon Leven and Admiral Emser
// see for licence details (MIT) at its official distribution:
// https://github.com/MCWertGaming/stuff-with-AdmiralEmser

// #include "pch.h" // includes precompiled header with 
#include "folf-namespace/folf-include.h"


int main()
{



    
    folf::timeCalcualtion time;

    double days = 9.97879;
    double newDays = 9.97879;
    std::cout << "num = " << time.daysToHours(&days) << std::endl;
    std::cout << "numNew = " << newDays * 24 << std::endl;

    float test1 = 93444.5748395 * 24;
    double test2 = 93444.5748395 * 24;
    long double test3 = 93444.5748395 * 24;
    long double test4 = 9.5748395 * 24;

    std::cout << "test1 = " << test1 << std::endl;
    std::cout << "test2 = " << test2 << std::endl;
    std::cout << "test3 = " << test3 << std::endl;
    std::cout << "test4 = " << test4 * 24 << std::endl;



    return 0;
}