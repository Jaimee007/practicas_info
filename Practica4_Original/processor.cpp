#include "processor.h"



Processor::Processor(const string &name): Device(name){}

void Processor::connectTo(Display &display)
{
    this->_data=display.getAdData();
}

void Processor::process(const string &data)
{
    string newdata;
    for(unsigned int i= 0, j=data.length(); i < data.length(), j>0; i++, j--){
        newdata[i]=data[j];
    }
    *_data="PROCESSED:" + newdata;
}

string *Processor::getProcessor()
{
    return &_data;
}
