#include <iostream>
#include "colorpoint.h"
using namespace std;

int main()
{
    ColorPoint p;
    ColorPoint p1(5,8,1);
    p.display();
    p.setX(1);
    p.display();
    p1.display();
    p1 =p1 * 2; //operadores sobrecarga p1=p1.operator*(2);
    p1.display();
    p1 = 2* p1; // fuera de la clase ya que 2 está antes p1=operator*(2,p1);
    return 0;
}
