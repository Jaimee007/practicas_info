//factorial de un número
//5!=5*4*3*2*1
#include <iostream>
using namespace std;

int main()
{
    int n=0;
    int fact=0;
    cout<<"Calcular el factorial de un número"<<endl<<"Escribir número";
    cin>>n;
    for(int i=1,i<n,i++){
        fact=fact*i;
    }
    cout<<"El factorial de "<<n<<" es "<<fact;
    return 0;
}
