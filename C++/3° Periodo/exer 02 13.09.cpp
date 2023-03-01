#include<iostream>
using namespace std;

int testePar (int &n){
    n = n+5; 
    return n;
}

int main(){
     
     int r, x=7;
     
     cout<<"Main: Valor de x antes: "<<x<<"\n";
     
     r=testePar(x);
     
     cout<<"Main: Valor de x depois: "<<x<<"\n";
     cout<<"Main: Valor de r: "<<r<<"\n";
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
