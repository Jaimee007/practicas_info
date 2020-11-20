#include "device.h"

Device::Device()
{
    _name = "";
}

Device::Device(const string &name){

    _name = name;
}

string Device::getName() const{
    return _name;
}

