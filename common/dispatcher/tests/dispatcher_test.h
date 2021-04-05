#ifndef __DISPATCHER_TEST_H__
#define __DISPATCHER_TEST_H__

#include "gtest/gtest.h"
#include "command_queue.h"


class DispatcherTest: public ::testing::Test {

  public:
    virtual void SetUp() {
      _commandQueue = new CommandQueue();
    }

    virtual void TearDown() {
      delete _commandQueue;
    }

  protected:
    CommandQueue* _commandQueue;
};

#endif
