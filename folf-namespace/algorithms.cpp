// ===========================================================
// includes various algorithms
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// ===========================================================
#include "folf.hpp"

unsigned short int folf::algorithms::euclidean_algorithm(unsigned short int num1, unsigned short int num2)
{
    unsigned int temp;
    while (num2 != 0)
    {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    return num1;
}
