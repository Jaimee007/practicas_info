#include "redonda.h"
#define PI 3.1415

Redonda::Redonda(string marca, float diametro): Mesa(marca)
{
   this->diametro=diametro
}
void Redonda::calcular_area(){
    areaTablero= PI*(diametro/2)*(diametro/2);
}
