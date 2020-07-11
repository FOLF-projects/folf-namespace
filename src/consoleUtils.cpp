// prime class functions
#include "folf.hpp"
#include <iostream>

// two versions are needed due to diffrent sleep() functions on windows and linux
#if defined(_WIN32)
#include <windows.h>
void folf::consoleUtils::simpleLoadingAnimation(const char* message, bool* finished)
{
    std::cout << message << '-' << std::flush;
    // draw the animation
    while (*finished == false)
    {
        Sleep(100);
        std::cout << "\b\\" << std::flush;
        Sleep(100);
        std::cout << "\b|" << std::flush;
        Sleep(100);
        std::cout << "\b/" << std::flush;
        Sleep(100);
        std::cout << "\b-" << std::flush;
    }
    // change the animation to Finished!
    std::cout << "'\b\bFinished!";
    // removes possible leftover text
    if (message.length() + 1 > 9)
    {
        for (int i = 0; i <= message.length() - 7; i++)
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
#elif (__linux__)
#include <unistd.h>
void folf::consoleUtils::simpleLoadingAnimation(const char* message, bool* finished)
{
    std::cout << message << std::flush << '-' << std::flush;
    // draw the animation
    while (*finished == false)
    {
        usleep(100000);
        std::cout << "\b\\" << std::flush;
        usleep(100000);
        std::cout << "\b|" << std::flush;
        usleep(100000);
        std::cout << "\b/" << std::flush;
        usleep(100000);
        std::cout << "\b-" << std::flush;
    }
    // change the animation to Finished!
    std::cout << "'\b\bFinished!";
    std::cout << std::endl;
}
#endif
