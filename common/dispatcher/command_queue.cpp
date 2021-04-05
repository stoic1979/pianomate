#include "command_queue.h"


using namespace std;

CommandQueue::CommandQueue() {
}

void CommandQueue::AddCommand(string command) {
  unique_lock<mutex> lock(_lock);
  _queue.push(command);
}

int CommandQueue::Count() {
  unique_lock<mutex> lock(_lock);
  return _queue.size();
}

