// precompiled header
#pragma once

#include <iostream>
#include <chrono>
#if defined(__linux__)
    #include "omp.h"
    #include <math.h>
#endif