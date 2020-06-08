// precompiled header
// for static (never changing) libaries
// only included inside folf namespace

// compile this file only once
#pragma once
// libaries
#include <iostream>
#include <chrono>
#include "omp.h"
// libaries only for linux
#if defined(__linux__)
    #include <math.h>
#endif
// libaries for windows only
// #if defined(__windows__)
    // stuff
// #endif