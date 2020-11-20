#ifndef KEYBOARD_H
#define KEYBOARD_H
#include<string>
#include<iostream>
#include"device.h"
#include"processor.h"

using namespace std;

class Keyboard: public Device{
    public:
        Keyboard();
        Keyboard(const string &name);
        Keyboard(const Keyboard &K);
        void connectTo(Processor &cpu);
        void process();
        int keys;
        float length;
    private:
        Processor _CPU;

};

#endif // KEYBOARD_H
