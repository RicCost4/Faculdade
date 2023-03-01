#include<iostream>
#include<conio.h>
using namespace std;

int fatorial(int n){
    if(n == 0){
         return(1);
    }else{
          return (n*fatorial(n-1));
    }
}

int main(void){
    
    int x;
    
    cout<<"\t\t\tPrograma para calcular fatorial\n\n";
    cout<<"Digite um numero: ";
    cin>>x;
    
    cout<<"O Fatorial de "<<x<<"! he "<<fatorial(x);
     
     cout<<"\n\nFim do Programa :)";
     getch();
     return(0);
}
