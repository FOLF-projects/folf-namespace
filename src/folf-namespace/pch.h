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
#include <thread>
// libraries only for linux
#if defined(__linux__)
    #include <math.h>
    #include <unistd.h>
// libraries for windows only
#elif (_WIN32)
    #include <windows.h>
#endif
