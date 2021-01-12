// ===========================================================
// time operations benchmark
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// ===========================================================
#include <folf/timeTools.hpp>
#include <iostream>

int main() 
{
    const long double days = 9.97879;
    const double newDays = 9.97879;
    std::cout << "num = " << folf::timeTools::daysToHours(&days) << std::endl;
    std::cout << "NewNum = " << newDays * 24 << std::endl;

    return 0;
}
