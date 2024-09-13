#include "Queue.hpp"
#include <Arduino.h>
Queue::Queue(int size)
{
    this->size = size;
    end = 0;

    buffer = (uint8_t*)malloc(size);
}

Queue::~Queue()
{
    free(buffer);
}

void Queue::Push(int val)
{
    if (end == size)
    {
        size+=10;
        buffer=(uint8_t*)realloc(buffer,size);
    }
    buffer[end]=val;
    end++;
}

int Queue::Pop()
{
    if(end==0)
    {
        return -1;
    }
    int t = buffer[0];

    end--;
    memmove(buffer,buffer+1,end);
    
    return t;
}

bool Queue::Empty()
{
    return end==0;
}
