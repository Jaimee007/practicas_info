#include "magos.h"

Magos::Magos(){
    _nombre = "";
    _curso = 0;
}

Magos::Magos(string nombre, int curso)
{
    _nombre = nombre;
    _curso = curso;
}

void Magos::set_name(string nombre)
{
    _nombre = nombre;
}

void Magos::set_year(int curso)
{
    _curso = curso;
}

string Magos::get_name()
{
    return _nombre;
}

int Magos::get_year()
{
    return _curso;
}
