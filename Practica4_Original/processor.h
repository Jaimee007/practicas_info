#ifndef PROCESSOR_H
#define PROCESSOR_H
#include "device.h"
#include "display.h"
#include <iostream>
using namespace std;
using namespace std;
class Processor: public Device
{
public:

    Processor(const string &name);
    void connectTo(Display &display);
    void process(const string& data);
    string *getProcessor();
    ~Processor();
private:
    string *_data ;
};

#endif // PROCESSOR_H
