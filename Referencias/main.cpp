#include <iostream>

using namespace std;
//int& incr(int&a){
//    a++;
//    return a;
//}
struct Fecha
{
    int d,m,a;
    Fecha& inic(int d1, int m1, int a1);
    Fecha& sumarDia(int d1);
    Fecha& sumarMes(int m1);


};

Fecha &Fecha::inic(int d1, int m1, int a1){
    d=d1;
    m=m1;
    a=a1;
    return *this;
}
Fecha &Fecha::sumarDia(int d1){
    d +=d1;
    return *this;
}
Fecha &Fecha::sumarMes(int m1){
    m +=m1;
    return *this;
}
int main()
{
 Fecha mi_cumple,hoy;
 Fecha *pfecha;
 mi_cumple.inic(7,5,1999);
 mi_cumple.sumarDia(1);
 Fecha maniana=hoy;
 maniana.sumarDia(1);
 pfecha->sumarMes(3);

//    int x=1;
//    incr(x)++; //int&a = x;
//    incr(x)=5;
//    int& b=x;
//    b++;
//    int ii=0, xx=9;
//    int& rr=ii;
//    rr++;
//    int * pp=&rr; //pp apunta a rr
//    rr=xx;

}
