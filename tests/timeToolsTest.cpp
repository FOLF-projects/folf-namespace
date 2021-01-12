#include <gtest/gtest.h>
#include <folf/timeTools.hpp>

// testing for folf's timeTools header

TEST(timeToolsTest, timeConversionTest)
{
    EXPECT_EQ(daysToHours(1), 24);
    
}
