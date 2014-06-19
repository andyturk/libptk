#pragma once

#include "ptk/kernel.h"
#include "ptk/thread.h"

namespace ptk {
  typedef int32_t eventmask_t;

  class Event {
    friend class Kernel;

    DQueue<Thread> waiting;
  public:
  Event() : waiting(&Thread::ready_link) {}
  };
}
