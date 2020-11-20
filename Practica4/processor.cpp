#include "processor.h"

Processor::Processor(){}

Processor::Processor(const string &name): Device(name){}

void Processor::connectTo(Display &display){
    // Copying the display
    _D = display;
}

void Processor::process(const string &data){
    // Reverse the input string and add PROCESSED
    string aux = "PROCESSED: " + string(data.rbegin(), data.rend());
    // Sending the str to the display
    _D.process(aux);
}
