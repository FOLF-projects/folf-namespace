#include <gtest/gtest.h>
#include <folf/algorithms.hpp>

// testing for folf's algorithms header

// example test, TEST(TEST_SUITE, TEST_NAME) << "OPTIONAL TEST DESCRIPTION"
TEST(timeToolsTest, exampleTest)
{
    EXPECT_EQ(folf::algorithms::euclidean_algorithm(442, 255),17) << "Test euclidean algorithm";
}
