// prime class functions
#include "folf.h"

#if defined(_WIN32)
void folf::consoleUtils::simpleLoadingAnimation(std::string message, bool* finished)
{
    std::cout << message << '-' << std::flush;
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
    std::cout << "'\b\bFinished!";
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
    std::cout << "'\b\bFinished!";
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