#include "mesa.h"

Mesa::Mesa(const string &marca)
{
    this->marca=marca;
    areaTablero=0;
    numPatas=0;
}

string Mesa::getMarca() const{
    return marca;
}

void Mesa::setNumPatas(int numPatas)
{
    this->numPatas=numPatas;
}
float Mesa::getAreaTablero(){
    return areaTablero;
}
