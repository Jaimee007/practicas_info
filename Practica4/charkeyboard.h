#ifndef CHARKEYBOARD_H
#define CHARKEYBOARD_H
#include "keyboard.h"
#include<iostream>
#include<string>

using namespace std;

class CharKeyboard: public Keyboard{
    public:
        CharKeyboard();
        CharKeyboard(const string &name);
        void process();
};

#endif // CHARKEYBOARD_H
