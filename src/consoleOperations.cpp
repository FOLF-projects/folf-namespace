// prime class functions
#include "folf.hpp"
#include <iostream>

// two versions are needed due to different sleep() functions on windows and linux
void folf::consoleOperations::simpleLoadingAnimation(const char* message, const bool* finished)
{
    std::cout << message << std::flush << '-' << std::flush;
    // draw the animation
    while (! *finished)
    {
        folf::timeOperations::sleepFor(100);
        std::cout << "\b\\" << std::flush;
        folf::timeOperations::sleepFor(100);
        std::cout << "\b|" << std::flush;
        folf::timeOperations::sleepFor(100);
        std::cout << "\b/" << std::flush;
        folf::timeOperations::sleepFor(100);
        std::cout << "\b-" << std::flush;
    }
    // change the animation to Finished!
    std::cout << "'\b\bFinished!";
    std::cout << std::endl;
}