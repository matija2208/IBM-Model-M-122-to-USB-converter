#ifndef QUEUE_H
#define QUEUE_H

#include <stdint.h>

class Queue
{
    uint8_t *buffer;
    int size;
    int end;

public:
    Queue(int size);
    ~Queue();
    void Push(int val);
    int Pop();
    bool Empty();
};

#endif
