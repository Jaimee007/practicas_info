#ifndef REDONDA_H
#define REDONDA_H
#include "mesa.h"
#include <iostream>
using namespace std;


class Redonda: public Mesa
{
public:
    void calcular_area();
    Redonda(string marca, float diametro);
private:
    float diametro;
};

#endif // REDONDA_H
