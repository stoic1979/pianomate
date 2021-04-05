#include <iostream>

#include "gtest/gtest.h"
#include "dispatcher_test.h"

using namespace std;

TEST_F(DispatcherTest, AddCommandToDispatchQueue){
  _commandQueue->AddCommand("SOME-COMMAND-1");
  _commandQueue->AddCommand("SOME-COMMAND-2");
  _commandQueue->AddCommand("SOME-COMMAND-3");
  EXPECT_EQ(3, _commandQueue->Count());
};

int main(int argc, char**argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
