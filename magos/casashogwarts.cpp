#include "casashogwarts.h"



CasasHogwarts::CasasHogwarts(string nombre, int miembros)
{
    _nombre = nombre;
    _num_miembros = miembros;
    this->miembros = nullptr;
}

CasasHogwarts::~CasasHogwarts()
{
    delete [] this->miembros;
}

int CasasHogwarts::Size()
{
    return _num_miembros;
}

void CasasHogwarts::ReSize(int numero)
{
    Magos* aux = new Magos[numero];

        for(int i = 0; i < numero; i++){
            aux[i] = miembros[i];
        }
        delete [] miembros;
        _num_miembros = numero;
        miembros = aux;
        delete [] aux;

}

Magos &CasasHogwarts::operator [](int indice)
{
    return miembros[indice];
}

CasasHogwarts &CasasHogwarts::operator <<(Magos &m)
{
    ReSize(_num_miembros+1);
    miembros[_num_miembros+1] = m;
    return *this;
}

ostream &operator <<(ostream &os, const CasasHogwarts &c)
{
    os << "La casa de: "<< c._nombre<<endl;
    os << "Tiene los siguientes miembros:"<<endl;
    for(int i = 0; i < c._num_miembros;i++){
        os << c.miembros[i].get_name() << " del curso " << c.miembros[i].get_year()<<endl;
    }

    return os;
}
