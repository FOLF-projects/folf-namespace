// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// numTool.cpp - Includes various number related functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#include "calcTools.hpp"
#include "timeTools.hpp"
#include <cmath>
#include <random>
#include <chrono>

bool folf::calcTools::checkPrime(const unsigned long long *num)
{
    // taking the square root to speed up the calculation and place the result into another variable to save more time (seems like c++ calculates the sqrt on every loop otherwise)
    double root = sqrt((double)*num);
    for (int i = 3; i <= root; i += 2)
    {
        // result of 0 means its not a prime = it can be devised through another number except 0 and himself
        if (*num % i == 0)
        {
            return false;
        }
    }
    return true;
}
void folf::calcTools::primeSum(const unsigned long long *maxNum, unsigned long long *primeSum)
{
    // start with value 2
    *primeSum = 2;
    for (unsigned long long i = 1; i < *maxNum; i += 2)
    {
        // testPrime returns true, if the given number is a Prime
        if (calcTools::checkPrime(&i))
        {
            *primeSum = *primeSum + i;
        }
    }
}
unsigned long long folf::calcTools::randomNum(unsigned long long maxNum)
{
    unsigned long long randomNumber;
    do
    {
        // make the generator ready
        std::mt19937_64 generator(folf_getTimestamp);
        randomNumber = generator() % (maxNum +1);
    }
    while (randomNumber == 0);
    
    return randomNumber -1;
}
