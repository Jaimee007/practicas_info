#include "rectangular.h"

#include <iostream>
using namespace std;
Rectangular::Rectangular(const string &marca, float longitud, float ancho): Mesa(marca)
{
  this->longitud=longitud;
  this->ancho=ancho;
}
void Rectangular::calcular_area(){
    areaTablero=ancho*longitud;
}
