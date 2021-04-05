#include <iostream>

#include "gtest/gtest.h"
#include "dispatcher_test.h"

using namespace std;

TEST_F(DispatcherTest, AddCommandToDispatchQueue){
  _commandQueue->AddCommand("SOME-COMMAND");
  EXPECT_EQ(1, _commandQueue->Count());
};

int main(int argc, char**argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
