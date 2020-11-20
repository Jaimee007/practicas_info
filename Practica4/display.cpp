#include "display.h"

Display::Display(){}

Display::Display(const string &name): Device(name){}

void Display::process(const string &data) const{
    cout << data << endl;
}

