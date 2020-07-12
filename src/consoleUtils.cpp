// prime class functions
#include "folf.hpp"
#include <iostream>

// two versions are needed due to diffrent sleep() functions on windows and linux
void folf::consoleUtils::simpleLoadingAnimation(const char* message, bool* finished)
{
    std::cout << message << std::flush << '-' << std::flush;
    // draw the animation
    while (*finished == false)
    {
        folf::timeUtils::sleepFor(100);
        std::cout << "\b\\" << std::flush;
        folf::timeUtils::sleepFor(100);
        std::cout << "\b|" << std::flush;
        folf::timeUtils::sleepFor(100);
        std::cout << "\b/" << std::flush;
        folf::timeUtils::sleepFor(100);
        std::cout << "\b-" << std::flush;
    }
    // change the animation to Finished!
    std::cout << "'\b\bFinished!";
    std::cout << std::endl;
}