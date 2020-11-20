#ifndef PROCESSOR_H
#define PROCESSOR_H
#include"device.h"
#include"display.h"
#include<string>

using namespace std;

class Processor: public Device{
    public:
        Processor();
        Processor(const string &name);
        void connectTo(Display &display);
        void process(const string &data);
    private:
        Display _D;
};

#endif // PROCESSOR_H
