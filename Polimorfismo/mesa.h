#ifndef MESA_H
#define MESA_H
using namespace std;
#include <iostream>

class Mesa
{
public:

    Mesa(const string &marca);
    string getMarca() const;
    virtual void calcular_area() = 0;
    float getAreaTablero() const;
    void setNumPatas(int numPatas);
    virtual ~Mesa();

protected:
    string marca;
    float areaTablero;
    int numPatas;
};

#endif // MESA_H
