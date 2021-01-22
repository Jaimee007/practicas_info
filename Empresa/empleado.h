#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
using namespace std;

class Empleado
{
protected:
    string _nombre;
    string _apellidos;
    string _dni;
    string _direccion;
    int _antiguedad;
    unsigned int _tlfno;
    float _salario;
    Empleado *_supervisor;
public:
    Empleado();
    ~Empleado();
    Empleado(string nombre, string apellidos, string dni, string direccion, unsigned int tlfno, float salario);
    void cambiarSupervisor(Empleado *E);
    void incrementarSalario(int salario);
    friend ostream &operator <<(ostream &os, Empleado &E);
};

#endif // EMPLEADO_H
