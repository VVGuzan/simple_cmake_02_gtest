#include <gtest/gtest.h>
#include "../mylib.hpp"

/*
TEST(TestSuiteName, TestName) {
  ... test body ...
}
*/

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(MmultTest, Square){
  EXPECT_DOUBLE_EQ(1.44, Mmul(-1.2, -1.2));
  EXPECT_DOUBLE_EQ(4.0, Mmul(2.0, 2.0));
  EXPECT_DOUBLE_EQ(100.0, Mmul(10.0, 10.0));
}

TEST(MmultTest, Negative){
  EXPECT_DOUBLE_EQ(-1.44, Mmul(-1.2, 1.2));
  EXPECT_DOUBLE_EQ(-1.44, Mmul(1.2, -1.2));
  EXPECT_DOUBLE_EQ(-4.0, Mmul(2.0, -2.0));
  EXPECT_DOUBLE_EQ(-100.0, Mmul(10.0, -10.0));
}

TEST(SsumTest, CastToInt){
  EXPECT_EQ(1.2, Ssum(1, 0.2));
  EXPECT_EQ(11.647, Ssum(9, 2.647));
}