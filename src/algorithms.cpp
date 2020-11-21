#include "folf.hpp"
#include <iostream>
#include "omp.h"

unsigned int folf::algorithms::euclidean_algorithm(unsigned int num1, unsigned int num2)
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
