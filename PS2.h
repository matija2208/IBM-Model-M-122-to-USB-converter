#ifndef PS2_H
#define PS2_H

#include "Queue.hpp"
#define NULL 0

int clockPin;

int dataPin;

struct Queue* buffer;

void interupt(void)
{
    static uint8_t bitcount=0;
    static uint8_t incoming=0;
    static uint32_t prev_ms=0;
    uint32_t now_ms;
    uint8_t n, val;
  
    val = digitalRead(dataPin);
    now_ms = millis();
    if (now_ms - prev_ms > 250) 
    {
        bitcount = 0;
        incoming = 0;
    }
    prev_ms = now_ms;
    n = bitcount - 1;
    if (n <= 7) 
    {
        incoming |= (val << n);
    }
    bitcount++;
    if (bitcount == 11) 
    {
        buffer->Push(incoming);
        bitcount = 0;
        incoming = 0;
    }
}

//void interupt()
//{
//    static int index = 0;
//    static int output = 0;
//
//    if(index>=1 && index<=8)
//    {
//        output |= (digitalRead(dPin) << (index - 1));
//    }
//    else if(index==11)
//    {
//        index = -1;
//        (b)->Push(output);
//        Serial.println(output,HEX);
//        output = 0;
//    }
//
//    index++;
//}

class PS2
{   
    public:

    void initialize(const int bufferSize, const int cPin, const int dPin)
    {
        dataPin = dPin;
        clockPin = cPin;
        
        if(bufferSize==0)
            return;
        
        buffer = new Queue(bufferSize);

        pinMode(clockPin, INPUT_PULLUP);
        pinMode(dataPin, INPUT);
        attachInterrupt(digitalPinToInterrupt(clockPin), interupt, FALLING);
    }
    
    int readScanCode()
    {
        return buffer->Pop();
    }

    bool available()
    {
        return !((buffer)->Empty());
    }
};

#endif
