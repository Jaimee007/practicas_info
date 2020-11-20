#include "display.h"
#include "device.h"

Display::Display(const std::string& name):Device(name)
{

}

void Display::process(const std::string& data)
{
    cout<<data<<endl;
}

string *Display::getAdData()
{
    return &_data;
}
