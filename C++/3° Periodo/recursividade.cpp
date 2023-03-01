#include<iostream>
#include<conio.h>
using namespace std;

void recursividade (int num){
     if (num <= 10){
             cout<<"\n"<<num;
             recursividade(num + 1);
     }
}

int main(){
     
     int x;
     
     cout<<"\t\tPrograma Recursividade\n\n";
     cout<<"Digite um numero menor que 10: ";
     cin>>x;
     if(x > 10){
          cout<<"Numero invalido!!!!\nRetorne ao programa...";
     }else{
           cout<<"\nImprimindo todos os inteiros de "<<x<<" ate 10: ";
           recursividade(x);
           cout<<"\n\n\n";
     }
     
     cout<<"\n\nFim do Programa :)";
     getch();
     return(0);
}
