#include <iostream>
#include "casashogwarts.h"
#include "magos.h"

using namespace std;


int main()
{
    CasasHogwarts C1("Griffindor",0);
    CasasHogwarts C2("Slytherin",0);
    Magos M1("Harry Potter",2);
    Magos M2("Draco Malfoy",2);
    Magos M3("Ron Weasley",2);
    Magos M4("Ginny Weasley",1);
    Magos M5("Profesor Snape",0);
    Magos M6("Albus Dumbledore",0);
    cout<<C1;
    C1<<M1;
    cout<<"------------------------"<<endl;
    C1<<M3;
    C1<<M4;
    cout<<C1;
    cout<<"------------------------"<<endl;
    C2<<M2;
    C2<<M5;
    cout<<C2;
    cout<<"------------------------"<<endl;
    C1<<M6;
    cout<<C1;
    cout<<"------------------------"<<endl;
    return 0;
}
