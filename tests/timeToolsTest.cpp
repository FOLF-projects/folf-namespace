#include <gtest/gtest.h>
#include <folf/timeTools.hpp>

#include <iostream>

// testing for folf's timeTools header

TEST(timeToolsTest, daysToHoursTest)
{
    long double testValue = 1;
    EXPECT_EQ(folf::timeTools::daysToHours(&testValue), 24);
    testValue = 2;
}
