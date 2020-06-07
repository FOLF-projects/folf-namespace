#include "folf.h"

folf::benchmarking::benchmarking()
{
}
folf::benchmarking::~benchmarking()
{
}
void folf::benchmarking::setStartTime()
{
    startTime = std::chrono::high_resolution_clock::now(); // saves start time
}
void folf::benchmarking::setStopTime()
{
    stopTime = std::chrono::high_resolution_clock::now(); // saves stop time
}
double folf::benchmarking::getTime()
{
    std::chrono::duration<double> elapsed = stopTime - startTime; // calculated estimated time
    return elapsed.count(); // returns elapsed time
    // return stopTime - startTime; // calculates taken time
}