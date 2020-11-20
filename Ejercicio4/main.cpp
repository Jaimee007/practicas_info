#include <iostream>
//Detectar un palíndromo ArenerA
using namespace std;

int main()
{
    char palabra[30];
    int tamano=0;
    cout<<"Introducir palabra:"<<endl;
    cin>>palabra;

    for(int i=0;i<30;i++){
        if(palabra[i]=='\0'){
            tamano=i-1;
            break;
        }
    }
    cout<<"Longitud de la palabra: "<<tamano<<endl;
    bool distintos=false;
    for(int i=0;i<=tamano/2;i++){
        if(palabra[i]!=palabra[tamano-i]){
            distintos=true;
            break;
        }

    }
    if(distintos==false)
        cout<<"La palabra "<<palabra<<" es un palíndromo"<<endl;
    else
        cout<<"La palabra "<<palabra<<" no es un palíndromo"<<endl;
}
