#include "keyboard.h"

Keyboard::Keyboard(){}

Keyboard::Keyboard(const string &name): Device(name){}

Keyboard::Keyboard(const Keyboard &K){

}

void Keyboard::connectTo(Processor &cpu){
    // Copying input object into class CPU
    _CPU = cpu;
}

void Keyboard::process(){
    string aux;

    // Get from the keyboard aux str
    cout << "Receiving str from keyboard:" << endl;
    cin >> aux;

    // Sending str to processor
    _CPU.process(aux);
}
