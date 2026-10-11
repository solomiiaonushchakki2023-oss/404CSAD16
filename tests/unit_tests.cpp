#include "math_operations.h"

#include <gtest/gtest.h>

TEST(BasicAddition, AddsPositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(BasicAddition, AddsNegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
}

TEST(BasicAddition, AddsMixedAndZeroValues) {
    EXPECT_EQ(add(-2, 3), 1);
    EXPECT_EQ(add(0, 7), 7);
}
