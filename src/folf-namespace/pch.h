// precompiled header
// for static (never changing) libraries
// only included inside folf namespace

// compile the standard libraries only once
#pragma once
// libraries
#include <iostream>
#include <chrono>
#include "omp.h"
#include <ctime>
#include <random>
// libraries only for linux
#if defined(__linux__)
    #include <math.h>
#endif
// libraries for windows only
// #if defined(__windows__)
    // stuff
// #endif
