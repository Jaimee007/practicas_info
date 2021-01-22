#ifndef MAGOS_H
#define MAGOS_H
#include <iostream>
using namespace std;

class Magos
{
public:
    Magos();
    Magos(string nombre, int curso);
    void set_name(string nombre);
    void set_year(int curso);
    string get_name();
    int get_year();
private:
    string _nombre;
    int _curso;
};

#endif // MAGOS_H
