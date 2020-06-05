// Prime number calculator C++ benchmarkingg tool
// developed by Damon Leven and Admiral Emser
// see for licence details (MIT) at its official distribution:
// https://github.com/MCWertGaming/stuff-with-AdmiralEmser

#include "pch.h" // includes precompiled header with 

// tests if the given number is a prime - if not, it returns false
// TODO move the function into a class
bool testPrime (int num)
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

int main() {
   

    std::cout << "primenumber calculator" << std::endl;
    std::cout << "calculates every prime number from 1 to 10.000.000" << std::endl;
    std::cout << "starting to calculate..." << std::endl;

    auto start = std::chrono::high_resolution_clock::now(); // starts the timer

    unsigned int maxNum = 10000000, i;
    unsigned long long sum = 2;

    // OpenMP implementation for multithreading the for loop, completly optional
    // TODO implement a method to gather the PCs cores for optimal multithreading
    omp_set_num_threads( 4 );                            // set the number of threads the program will use (should be equal to your CPU threads, or less if you have many workload)
    #pragma omp parallel for reduction( + : sum )        // if it fails to compile, make sure to set -fopenmp and use a modern compiler shiped with OpenMP

    for (i = 1; i < maxNum; i += 2)
    {
        if (testPrime(i) == true)
        {
            sum = sum + i;
        }
    }

    std::cout << "Calculation finished!" << std::endl;

    auto finish = std::chrono::high_resolution_clock::now(); // stops the timer
    std::chrono::duration<double> elapsed = finish - start; // calculates the passed time 
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";
    std::cout << "sum is: " << sum << std::endl;
   return 0;
}