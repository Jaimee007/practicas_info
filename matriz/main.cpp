#include <iostream>
#include "matriz.h"
using namespace std;

int main()
{
    Matriz *m = nullptr;
    int filas=0,cols=0;
    cout<<"introduce dimensiones"<<endl;
    cin>>filas>>cols;
    m=new Matriz(filas,cols);
    //cout<<"Introducir datos"<<endl;


    for (int i=0; i<filas; i++){
        for (int j=0; j<cols; i++){
               m->set(i,j,i*cols+j+1);
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; i++){
               cout<<m->get(i,j)<<" ";
        }
        cout<<endl;
    }


    return 0;
}
