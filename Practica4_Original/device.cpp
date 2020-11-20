#include "device.h"

Device::Device()
{
 _name=" ";

}
Device::Device(const std::string& name){
    this->_name=name;
}

std::string Device::getName() const
{
    return _name;
}
