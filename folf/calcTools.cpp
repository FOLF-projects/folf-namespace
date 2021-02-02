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

bool folf::calcTools::checkPrime(const unsigned long long *num)
{
    // taking the square root to speed up the calculation and place the result into another variable to save more time (seems like c++ calculates the sqrt on every loop otherwise)
    double root = sqrt((double)*num);
    for (int j = 3; j <= root; j += 2)
    {
        // result of 0 means its not a prime = it can be devised through another number except 0 and himself
        if (*num % j == 0)
        {
            return false;
        }
    }
    return true;
}
void folf::calcTools::primeSum(const unsigned long long *maxNum, unsigned long long *primeSum)
{
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
unsigned long long folf::calcTools::randomNum(int maxNum) 
{
    unsigned long long randomNumber;
    unsigned int seed;
    do
    {
        // make the generator ready
        seed = timeTools::getTimestamp();
        std::mt19937_64 generator(seed);
        randomNumber = generator() % (maxNum +1);
    }
    while (randomNumber == 0);
    
    return randomNumber -1;
}
bool folf::calcTools::isChance(int chanceDenominator)
{
    return calcTools::randomNum(chanceDenominator) == 0;
}
