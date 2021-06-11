// =============================================================================================
// FOLF - A C++ library developed by a fox and a wolf for testing and making development easier!
// timeTool.hpp - Includes various time related functions of FOLF
// developed and distributed by FOLF-projects on GitHub
// see for licence details (MIT) at its official distribution:
// https://github.com/FOLF-projects/folf-namespace
// =============================================================================================
#pragma once

// includes various functions for benchmarking and common tasks
namespace folf::timeTools
{
        // TODO: add option to pause timer
        // a simple timer with additional features
        class timer
        {
        private:
            unsigned int startTime{};
            unsigned short int timeToWait{};
        public:
            explicit timer(unsigned short int);
            virtual ~timer() = default;
            [[nodiscard]] bool done() const;
            void reset();
        };
        // writes its lifetime into the console - used for benchmarking
        class timeBench {
        private:
            long double startTime{};
        public:
            // starts time benchmarking
            timeBench();
            // stops time benchmarking
            ~timeBench();
        };

        // returns a std::chrono::time_point
        unsigned int getTimestamp();
        // sleeps for the given microseconds, requires <chrono> and <thread>
        void sleep(unsigned int);

        long long daysToHours(unsigned int);
        long long daysToMinutes(unsigned int);
        long long daysToSeconds(unsigned int);
        double hoursToDays(unsigned int);
        long long hoursToMinutes(unsigned int);
        long long hoursToSeconds(unsigned int);
        double minutesToDays(unsigned int);
        double minutesToHours(unsigned int);
        long long minutesToSeconds(unsigned int);
        long long minutesToMilliseconds(unsigned int);
        double secondsToHours(unsigned int);
        double secondsToMinutes(unsigned int);
        long long secondsToMilliseconds(unsigned int);
        long long secondsToMicroseconds(unsigned int);
        double millisecondsToMinutes(unsigned int);
        double millisecondsToSeconds(unsigned int);
        long long millisecondsToMicroseconds(unsigned int);
        double microsecondsToSeconds(unsigned int);
        double microsecondsToMilliseconds(unsigned int);
    }
