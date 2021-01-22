#ifndef CASASHOGWARTS_H
#define CASASHOGWARTS_H
#include <iostream>
#include "magos.h"
using namespace std;

class CasasHogwarts
{
private:
    string _nombre;
    int _num_miembros;
    Magos *miembros;
public:

    CasasHogwarts(string nombre, int miembros);
    ~CasasHogwarts();
    int Size();
    void ReSize(int numero);
    Magos &operator [] (int indice);
    CasasHogwarts &operator <<(Magos &m);
    friend ostream &operator <<(ostream &os, const CasasHogwarts &c);

};

#endif // CASASHOGWARTS_H
