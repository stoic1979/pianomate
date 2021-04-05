#ifndef __COMMAND_QUEUE_H__
#define __COMMAND_QUEUE_H__

#include <string>
#include <queue>

class CommandQueue {

  public:
    CommandQueue();

    void AddCommand(std::string command);
    int Count();

  private:
    std::queue<std::string> _queue;
};

#endif
