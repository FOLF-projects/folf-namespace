#include <gtest/gtest.h>

// testing for folf's algorithms header

// example test, TEST(TEST_SUITE, TEST_NAME) << "OPTIONAL TEST DESCRIPTION"
TEST(timeToolsTest, exampleTest)
{
    EXPECT_EQ(euclidean_algorithm(442, 255),17) << "Test euclidean algorithm";
}
