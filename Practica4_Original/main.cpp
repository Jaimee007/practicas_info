#include <iostream>
#include "device.h"
using namespace std;

int main()
{
    Device vacio;
    cout << vacio.getName() << endl;
    Device componente("Jaime");
    cout << componente.getName() << endl;
    return 0;
}
