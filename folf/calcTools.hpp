// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// numTool.hpp - Includes various number related functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#pragma once

// includes various functions for benchmarking and common tasks
namespace folf
{
    // Includes various number related functions
    namespace calcTools
    {
        // checks, if the given number is a Prime
        bool checkPrime(const unsigned long long *num);
        // Calculates all Primes to a given number together - multithreading capable
        void primeSum(const unsigned long long *maxNum, unsigned long long *primeSum);
        // returns true or false based on chance. input equals chance (1/x)
        bool isChance(int);
        // returns a random number up to x
        unsigned long long randomNum(int);
        // creates a vector of two numbers by deviding the second from the first
        // createVector(X,Y)
        signed int createVector(const unsigned int*, const unsigned int*);
    }
}
