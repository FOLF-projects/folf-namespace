#include "folf.h"

folf::prime::prime()
{
    primeSum = 2; // sets the prime sum to 2, because every second number gets skipped
}
folf::prime::~prime()
{
}
void folf::prime::genPrime(unsigned long long maxNumber)
{
    // OpenMP implementation for multithreading the for loop, completly optional
    omp_set_num_threads( 999 );                               // this defines the number of maximal threads, 999 should work fine (threads can be more than actual CPU cores, because most loops are empty)
    #pragma omp parallel for reduction( + : primeSum )        // if it fails to compile, make sure to set -fopenmp and use a modern compiler shiped with OpenMP

    for (unsigned long long i = 1; i < maxNumber; i += 2)
    {
        // testPrime returns true, if the given number is a Prime
        if (testPrime(i) == true)
        {
            primeSum = primeSum + i;
        }
    }
}
bool folf::prime::testPrime(unsigned long long num)
{
    // taking the squareroot to speed up the loop
    // placing the result into another variable to save more time (seems like c++ calculates the sqrt on every loop if its inside the case)
    int root = sqrt(num);
    for (int j = 3; j <= root; j += 2) {
      if (num % j == 0) { // result of 0 means its not a prime = it can be devised through anouther number except 0 and himself
         return false;
      }
   }
   return true;
}
unsigned long long folf::prime::getSum()
{
   return primeSum;
}