#ifndef SECRETARIO_H
#define SECRETARIO_H
#include "empleado.h"
#include <iostream>
using namespace std;

class Secretario: public Empleado
{
private:
    string _despacho;
    string _fax;

public:
    Secretario();
    ~Secretario();
    Secretario(string nombre, string apellidos, string dni, string direccion, unsigned int tlfno, float salario, string despacho, string fax);
    friend ostream &operator <<(ostream &os, Secretario &S);
};

#endif // SECRETARIO_H
