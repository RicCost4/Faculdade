#include<iostream>
#include<conio.h>
using namespace std;

int testePar(int n){
    n = n+5;
    return n;
}

int main(){
     
     int r, x=7;
     
     cout<<"Main: Valor de x Antes: "<<x<<"\n";
     
     r=testePar(x);
     
     cout<<"Main: Valor de x depois: "<<x<<"\n";
     cout<<"Main: Valor de r: "<<r<<"\n";
     
     cout<<"\n\nFim do Programa :)";
     getch();
     return(0);
}
