#include <gtest/gtest.h>

#include "example.h"

TEST(Example, sum) { EXPECT_EQ(sum(123, 456), sum_asm(123, 456)); }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
