#include <iostream>
#include "mesa.h"
#include "redonda.h"
#include "rectangular.h"
using namespace std;

int main()
{
    Mesa * mr = new Redonda("IKEA redonda Teca125", 1.35);
    Mesa * mc= new Rectangular("IKEA rectangular", 1.65,1.10);
    mr->calcular_area();
    cout << mr->getMarca() << " tiene " << mr->getAreaTablero() << "cm2" <<  endl;

    mc->calcular_area();
    cout << mc->getMarca() << " tiene " << mc->getAreaTablero() << "cm2" <<  endl;

    return 0;
}


