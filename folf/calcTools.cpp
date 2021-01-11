// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// numTool.cpp - Includes various number related functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#include "calcTools.hpp"
#include <cmath>
#include <random>
#include <chrono>

bool folf::numTool::checkPrime(const unsigned long long *num)
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
void folf::numTool::primeSum(const unsigned long long *maxNum, unsigned long long *primeSum)
{
    unsigned long long primeSumL = 2;

    for (unsigned long long i = 1; i < *maxNum; i += 2)
    {
        // testPrime returns true, if the given number is a Prime
        if (folf::numTool::checkPrime(&i))
        {
            primeSumL = primeSumL + i;
        }
    }
    *primeSum = primeSumL;
}
unsigned long long folf::numTool::randomNum(int maxNum) 
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937_64 generator(seed);
    return generator() % maxNum; // lowers the number to the specified range
}
bool folf::numTool::isChance(int chanceDenominator) 
{
    return folf::numTool::randomNum(chanceDenominator) == 0;
}
signed int folf::numTool::createVector(const unsigned int *from, const unsigned int *to)
{
    return *to - *from;
}