#include <iostream>
#include "colorpoint.h"

ColorPoint::ColorPoint() : Point()
{
    color=0;

}

ColorPoint::ColorPoint(int x, int y, int color) : Point(x,y)
{
    this->color=color;
}

void ColorPoint::display()
{
    std::cout<<"Punto: ("<<x<   <", "<<y<<"), color: "<<color<<std::endl;
}

ColorPoint ColorPoint::operator*(const int &n)
{
   ColorPoint resultado;
   resultado.x=this-> x*n;
   resultado.y=this-> y*n;
   resultado.color=this->color;
   return resultado;
}
ColorPoint operator*(const int& n, const ColorPoint& cp){ //AMISTAD
    ColorPoint resultado;
    resultado.x=cp.x*n;
    resultado.y=cp.y*n;
    resultado.color=cp.color;
    return resultado;
}

