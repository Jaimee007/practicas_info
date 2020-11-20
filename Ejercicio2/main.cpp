#include <iostream>
//Factorial
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int factorial2(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*factorial2(n-1);
    }
}
int main()
{
    //n!=n*(n-1)*(n-2)*...*1
    /*
    int n=0;
    int fact=1;
    cout<<"Calcular el factorial de un número"<<endl<<"Escribir número:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"El factorial de "<<n<<" es "<<fact<<endl;
    return 0;
    */

    //Usando una función
    /*
    int n=0;
    do{
        cout<<"Introduce n positivo:"<<endl;
        cin>>n;
    }while(n<0);
    cout<<"El factorial de "<<n<<" es "<<factorial(n)<<endl;
    */
    //Forma recursiva n!=n*(n-1)!
    int n=0;
    do{
        cout<<"Introduce n positivo: "<<endl;
        cin>>n;
    }while(n<0);
    cout<<"El factorial de "<<n<<" es "<<factorial2(n)<<endl;

}

