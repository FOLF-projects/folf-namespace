// ===========================================================
// includes various tools for manipulating the console
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// ===========================================================
#include "folf.hpp"
#include <iostream>

// two versions are needed due to different sleep() functions on windows and linux
void folf::consoleOperations::simpleLoadingAnimation(const char *message, const bool *finished) 
{
    std::cout << message << std::flush << '-' << std::flush;
    // draw the animation
    while (!*finished)
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
