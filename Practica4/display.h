#ifndef DISPLAY_H
#define DISPLAY_H
#include "device.h"
#include<iostream>
#include<string>

using namespace std;

class Display: public Device{
    public:
        Display();
        Display(const string & name);
        void process(const string & data) const;
};

#endif // DISPLAY_H
