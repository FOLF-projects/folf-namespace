// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// numTool.hpp - Includes various number related functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#pragma once

// macros
// creates a vector of two numbers by dividing the second var from the first, createVector(X,Y)
#define folf_vectorCreate(from,to) to - from
// returns bool based on chance. input equals chance (0 to X)
#define folf_isChance(chance) calcTools::randomNum(chance) == 0

// includes various functions for benchmarking and common tasks
namespace folf::calcTools
    {
        // checks, if the given number is a Prime
        bool checkPrime(const unsigned long long*);
        // Calculates all Primes to a given number together - multithreading capable
        void primeSum(const unsigned long long*, unsigned long long*);
        // returns a random number up to x
        unsigned long long randomNum(unsigned long long);
    }
