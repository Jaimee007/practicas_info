#include <iostream>
//Ordenar vector de números
using namespace std;

int main()
{
  int n=8;
  int array[8]={2,0,-6,4,9,3,-2,1};
  cout<<"Array inicial: ";
  for(int i=0;i<8;i++){
      cout<<array[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<n-1;i++){
      for(int j=1;j<n-i;j++){
          if(array[j]<array[j-1]){
              int aux=array[j];
              array[j]=array[j-1];
              array[j-1]=aux;
          }
      }
  }
  cout<<"Array final: ";
  for(int i=0;i<8;i++){
      cout<<array[i]<<" ";
  }
  cout<<endl;
}
