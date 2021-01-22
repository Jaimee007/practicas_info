#include <iostream>
#include "empleado.h"
#include "secretario.h"
#include "vendedor.h"
using namespace std;

int main()
{
    Secretario S1("Jaime","Gomez Jimenez", "76049228G", "C/ Alejo Carpentier", 600605413, 1500, "2.3.D02", "fax1234");
    Secretario E2("Carlos Manuel", "Gomez Jimenez", "76049228G", "C/ Napoles 2", 627050735, 2700, "2.3.D02", "fax1234");
//    Coche C1;
//    C1._marca = "VolksWagen";
//    C1._matricula = "1234 BA";
//    C1._modelo = "Passat";
//    Vendedor V1("Carlos Gomez Rico", "30202790H", "C/Alejo 17", 610517028, 3205, C1, "Extremadura");
//    S1.cambiarSupervisor(E2);
    cout << S1;
    cout << E2;
    return 0;
}
