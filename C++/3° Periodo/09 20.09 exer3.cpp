#include<iostream>
using namespace std;


int main(){
     
     int N, listaEnt[N];
     
     cout<<"Digite quantas numeros voce quer incluir na lista: ";
     cin>>N;
     
     for (int i=0; i<N; i++){
         cout<<"Digite um numero: ";
         cin>>listaEnt[i];
     }
     system ("cls");
     cout<<"Lista Entrada:\n";
     for (int i=0; i<N; i++){
         cout<<"Pos: "<<i<<" valor= "<<listaEnt[i];
     }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
