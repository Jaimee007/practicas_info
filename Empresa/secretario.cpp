#include "secretario.h"

Secretario::Secretario()
{

}

Secretario::~Secretario()
{

}

Secretario::Secretario(string nombre, string apellidos, string dni, string direccion, unsigned int tlfno, float salario, string despacho, string fax):Empleado(nombre, apellidos,dni,direccion,tlfno,salario)
{
    _despacho = despacho;
    _fax = fax;
    _salario += _salario*_antiguedad*0.05;
}

ostream &operator <<(ostream &os, Secretario &S){

    cout << S;
    os << "Puesto: Secretario" <<endl;
    os << "Despacho: " << S._despacho<<endl;
    os << "Fax: "<< S._fax<<endl;
    return os;

}
