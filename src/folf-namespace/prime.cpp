// prime class functions
#include "folf.hpp"

bool folf::prime::checkPrime(unsigned long long* num)
{
    // taking the squareroot to speed up the loop
    // placing the result into another variable to save more time (seems like c++ calculates the sqrt on every loop if its inside the case)
    int root = sqrt(*num);
    for (int j = 3; j <= root; j += 2)
    {
        if (*num % j == 0) // result of 0 means its not a prime = it can be devised through anouther number except 0 and himself
        {
            return false;
        }
    }
   return true;
}
void folf::prime::primeSum(unsigned long long* maxNum, unsigned long long* primeSum)
{
    unsigned long long primeSumL = 2;
    // OpenMP implementation for multithreading the for loop, completly optional
    omp_set_num_threads( 9 );                                 // this defines the number of maximal threads, 999 should work fine (threads can be more than actual CPU cores, because most loops are empty)
    #pragma omp parallel for reduction( + : primeSumL )       // if it fails to compile, make sure to set -fopenmp and use a modern compiler shiped with OpenMP
    for (unsigned long long i = 1; i < *maxNum; i += 2)
    {
        // testPrime returns true, if the given number is a Prime
        if (folf::prime::checkPrime(&i) == true)
        {
            primeSumL = primeSumL + i;
        }
    }
    *primeSum = primeSumL;
}
