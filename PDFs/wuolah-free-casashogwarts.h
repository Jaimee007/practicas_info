#ifndef CASASHOGWARTS_H
#define CASASHOGWARTS_H

#include <iostream>
#include <string>
#include "magos.h"

using namespace std;
class CasasHogwarts
{
private:
    string _nombre;
    int _num_miembros;
    Magos *_miembros;
public:
    CasasHogwarts();
    ~CasasHogwarts();
    CasasHogwarts(string nombre, int tam);
    int Size(void);
    int ReSize(int nuevo_tam);
    Magos& operator[](int indice);
    void operator <<(Magos Mago);
    friend ostream& operator <<(ostream &os, CasasHogwarts &CH);
    string get_name(void);

};

#endif // CASASHOGWARTS_H
