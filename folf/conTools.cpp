// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// conTool.cpp - Includes various console oriented functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#include "conTools.hpp"
#include "timeTools.hpp"
#include <iostream>

// two versions are needed due to different sleep() functions on windows and linux
void folf::conTool::simpleLoadingAnimation(const char *message, const bool *finished) 
{
    std::cout << message << std::flush << '-' << std::flush;
    // draw the animation
    while (!*finished)
    {
        folf::timeTool::sleepFor(100);
        std::cout << "\b\\" << std::flush;
        folf::timeTool::sleepFor(100);
        std::cout << "\b|" << std::flush;
        folf::timeTool::sleepFor(100);
        std::cout << "\b/" << std::flush;
        folf::timeTool::sleepFor(100);
        std::cout << "\b-" << std::flush;
    }
    // change the animation to Finished!
    std::cout << "'\b\bFinished!";
    std::cout << std::endl;
}
