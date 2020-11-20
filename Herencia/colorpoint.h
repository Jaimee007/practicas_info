#ifndef COLORPOINT_H
#define COLORPOINT_H
#include "point.h"

class ColorPoint: public Point
{
public:
    ColorPoint();
    ColorPoint(int x, int y, int color);

    void display(); //modificar display anterior
    friend ColorPoint operator*(const int& n, const ColorPoint& cp);
    ColorPoint operator*(const int& n);
private:
    int color;
};


#endif // COLORPOINT_H
