#ifndef DISPLAY_H
#define DISPLAY_H
#include "device.h"
#include <iostream>
using namespace std;
class Display: public Device
{
public:

    Display(const std::string& name);
    void process(const std::string& data);
    string *getAdData();
private:
    std::string _data;
};

#endif // DISPLAY_H
