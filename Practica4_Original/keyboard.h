#ifndef KEYBOARD_H
#define KEYBOARD_H
#include <iostream>
#include "device.h"
#include "processor.h"
using namespace std;

class Keyboard: public Device
{
public:
    Keyboard(const string &name);
    void connectTo(Processor &cpu);
    void process();
private:
    string *_data;
};


#endif // KEYBOARD_H
