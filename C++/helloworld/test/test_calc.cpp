#include <gtest/gtest.h>

#include "calc.h"

class TestCalc : public ::testing::Test {
};

TEST_F(TestCalc, add) {
    EXPECT_EQ(3,  add(1, 2));
    EXPECT_EQ(-2, add(1, -3));
    // NG
    EXPECT_EQ(0, add(1, 1));
}

