#ifndef RECTANGULAR_H
#define RECTANGULAR_H
#include "mesa.h"
#include <iostream>
using namespace std;

class Rectangular: public Mesa
{
public:
    void calcular_area();
    Rectangular(const string &marca, float longitud, float ancho);
private:
    float longitud;
    float ancho;
};

#endif // RECTANGULAR_H
