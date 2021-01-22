#include "empleado.h"

Empleado::Empleado()
{
    _nombre = _apellidos = _dni = _direccion = "";
    _salario = 0;
    _tlfno = 0;
    _antiguedad = 0;
    _supervisor = nullptr;

}

Empleado::~Empleado(){
    delete [] _supervisor;
}
Empleado::Empleado(string nombre, string apellidos, string dni, string direccion, unsigned int tlfno, float salario)
{
    _nombre = nombre;
    _apellidos = apellidos;
    _dni = dni;
    _direccion = direccion;
    _tlfno = tlfno;
    _salario = salario;
    _antiguedad = 0;
    _supervisor = nullptr;
}

void Empleado::cambiarSupervisor( Empleado *E)
{
    _supervisor = E;
}

void Empleado::incrementarSalario(int salario)
{
    _salario = salario;
}

ostream &operator <<(ostream &os, Empleado &E){
    os << E._nombre << " " << E._apellidos << " :"<<endl;
    os << "DNI: " << E._dni<<endl;
    os << "Direccion: " << E._direccion<<endl;
    os << "Telefono: " << E._tlfno<<endl;
    os << "Salario: " << E._salario<<endl;
    os << "Antiguedad: "<< E._antiguedad<<endl;
    os << "Supervisor: "<< E._supervisor->_nombre<<endl;
    return os;
}

