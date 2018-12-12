#include "gtest/gtest.h"
#include "ascending_order.cpp"


class ADD_TEST 
{
   ADD_TEST(){};
   ~ADD_TEST(){};

public:
    virtual void SetUp();

};
TEST(ADD_TEST, POSATIVE_TESTv1__each)
{
  int a , b;
  add(a,b);
  print(a, b);
  EXPECT_EQ(a,b);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
