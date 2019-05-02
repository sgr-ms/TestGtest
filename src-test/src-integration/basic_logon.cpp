#include "gtest/gtest.h"
#include <cmath>

TEST(Pow, Two)
{
    EXPECT_EQ(4, std::pow(2,2));	
}

TEST(Pow, Zero)
{
    EXPECT_EQ(1, std::pow(2,0));	
}