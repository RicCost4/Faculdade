#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float potencia(float x, int n){
      if(n == 0){
           return(1);
      }else{
            return(x*potencia(x, n-1));
      }
}
int main(void){
    
    int x, y;
    
    cout<<"\t======Programa para calcular potencia de x^y\n\n";
    cout<<"Digite a base: ";
    cin>>x;
    cout<<"Digite o expoente: ";
    cin>>y;
    cout<<"A potencia de "<<x<<"^"<<y<<" e "<<potencia(x,y);
    
    getch();
    return(0);
}
