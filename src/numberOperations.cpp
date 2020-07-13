// numberOperation namespace functions
#include "folf.hpp"
#include "omp.h"
#include <cmath>
#include <random>
#include <chrono>

bool folf::numberOperations::checkPrime(const unsigned long long *num) 
{
    // taking the square root to speed up the loop
    // placing the result into another variable to save more time (seems like c++ calculates the sqrt on every loop if its inside the case)
    double root = sqrt(*num);
    for (int j = 3; j <= root; j += 2) 
    {
        if (*num % j ==
            0) // result of 0 means its not a prime = it can be devised through another number except 0 and himself
        {
            return false;
        }
    }
    return true;
}
void folf::numberOperations::primeSum(const unsigned long long *maxNum, unsigned long long *primeSum) 
{
    unsigned long long primeSumL = 2;
    // OpenMP implementation for multithreading the for loop, completely optional
    omp_set_num_threads(9);                                 // this defines the number of maximal threads, 999 should work fine (threads can be more than actual CPU cores, because most loops are empty)
#pragma omp parallel for reduction( + : primeSumL )       // if it fails to compile, make sure to set -fopenmp and use a modern compiler shipped with OpenMP
    for (unsigned long long i = 1; i < *maxNum; i += 2) 
    {
        // testPrime returns true, if the given number is a Prime
        if (folf::numberOperations::checkPrime(&i)) 
        {
            primeSumL = primeSumL + i;
        }
    }
    *primeSum = primeSumL;
}
unsigned long long folf::numberOperations::randomNum(int maxNum) 
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937_64 generator(seed);
    return generator() % maxNum; // lowers the number to the specified range
}
bool folf::numberOperations::isChance(int chanceDenominator) 
{
    return folf::numberOperations::randomNum(chanceDenominator) == 0;
}
