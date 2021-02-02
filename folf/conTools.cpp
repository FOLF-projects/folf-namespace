// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// conTool.cpp - Includes various console oriented functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#include "conTools.hpp"
#include "timeTools.hpp"
#include <thread>
#include <chrono>
#include <iostream>

// two versions are needed due to different sleep() functions on windows and linux
void folf::conTools::simpleLoadingAnimation(const char *message, bool *finished)
{
    std::cout << message << std::flush << '-' << std::flush;
    // draw the animation
    while (!*finished)
    {
        folf_sleepFor(100000);
        std::cout << "\b\\" << std::flush;
        folf_sleepFor(100000);
        std::cout << "\b|" << std::flush;
        folf_sleepFor(100000);
        std::cout << "\b/" << std::flush;
        folf_sleepFor(100000);
        std::cout << "\b-" << std::flush;
    }
    // change the animation to Finished!
    std::cout << "'\b\bFinished!\n";
}
