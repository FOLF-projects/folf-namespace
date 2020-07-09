// prime class functions
#include "folf.hpp"
#include "pch.hpp"

// two versions are needed due to diffrent sleep() functions on windows and linux
#if defined(_WIN32)
void folf::consoleUtils::simpleLoadingAnimation(std::string message, bool* finished)
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
void folf::consoleUtils::simpleLoadingAnimation(std::string message, bool* finished)
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
#endif
