#include <iostream>
#include <string>
#include "person.h"
using namespace std;

int main()
{



    Person p1("Carlos",26);//Parametrizado
    Person p2=p1; //Copia
    Person p3;
    std::string n;
    int a;
    cout<<"Introducir nombre"<<endl;
    cin>>n;
    p3.setName(n); //setName
    cout<<endl<<"Introducir edad"<<endl;
    cin>>a;
    p3.setAge(a);
    Person p4; //Vacio
    Person p5=p3;
    Person parray[5]={p1,p2,p3,p4,p5};
    cout << endl<< "La persona 1 se llama: "<<p1.getName()<<" y tiene "<<p1.getAge()<<" años"<< endl;
    cout << "La persona 2 se llama: "<<p2.getName()<<" y tiene "<<p2.getAge()<<" años"<< endl;
    cout << "La persona 3 se llama: "<<p3.getName()<<" y tiene "<<p3.getAge()<<" años"<< endl;
    cout << "La persona vacía se llama:"<<p4.getName()<<" y tiene "<<p4.getAge()<<" años"<< endl;
    cout << "La persona 5, con operador p5=p3 se llama: "<<p5.getName()<<" y tiene "<<p5.getAge()<<" años"<< endl;
    cout <<"Nombres que contengan la s"<<endl;
    for(int i=0;i<5;i++){
        auto it= parray[i].getName().find("s");
        if(it != string::npos){
            cout<<parray[i].getName()<<endl;
        }

    }
    cout <<"Personas mayores de 18:"<<endl;
    for(int i=0;i<5;i++){
        if(parray[i].getAge()>18){
            cout<<parray[i].getName()<<endl;
        }

    }
    return 0;
}
