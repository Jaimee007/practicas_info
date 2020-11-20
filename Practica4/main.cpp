#include <iostream>
#include "processor.h"
#include "display.h"
#include "keyboard.h"
#include<vector>
#include<string>

using namespace std;

int main()
{

    vector <int> numeros;

    numeros.push_back("Hola me llamo Marcos");
    cout << numeros[0] << endl;
    return 0;
}

