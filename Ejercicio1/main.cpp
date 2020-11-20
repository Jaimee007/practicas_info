#include <iostream>
//Máximo de un array
using namespace std;

int main()
{
    cout<<"Introducir array de 8 números"<<endl;
    int array[8]={2,0,-6,4,8,3,-2,1};
    int max=array[0];
    int pos=0;
    for(int i=1;i<8;i++){
        if(array[i]>max){
            max=array[i];
            pos=i;
        }
    }
    cout<<"El valor máximo del array es "<<max<<" en la posición "<<pos<<endl;
}
