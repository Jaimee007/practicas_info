#include "keyboard.h"


Keyboard::Keyboard(const string &name):Device(name)
{

}

void Keyboard::connectTo(Processor &cpu)
{
   this->_data=cpu.getProcessor();
}

void Keyboard::process()
{
    Processor cpu;

    cout<<"Introducir cadena"<<endl;
    cin>>&_data;
    cpu(&_data);
}
