#ifndef MAGOS_H
#define MAGOS_H

#include <iostream>
#include <string>
using namespace std;
class Magos
{
public:
    Magos();
    Magos(string nombre, int curso);
    int get_year(void)
    {return(_year);};
    string get_name(void){return(_name);};
    void set_year(int y){_year=y;};
    void set_name(string n){_name=n;};
private:
    int _year;
    string _name;
};

#endif // MAGOS_H
