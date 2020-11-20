#ifndef DEVICE_H
#define DEVICE_H
#include <iostream>

class Device
{
public:

    Device();
    Device(const std::string& _name);
    std::string getName() const ;

private:
    std::string _name;
};

#endif // DEVICE_H
