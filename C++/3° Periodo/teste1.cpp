#include<iostream>
using namespace std;


int main(){
     
     int N, valor,R, listaEnt[N], listaRes[R];
     
     cout<<"Digite quantas numeros voce quer incluir na lista: ";
     cin>>N;
     //preencher vetor.
     for (int i=0; i<N; i++){
         cout<<"Digite um numero: ";
         cin>>listaEnt[i];
     }
     
     for (int i=0; i<N; i++){
         for (int j=0; j<N; j++){
             if(listaEnt[i] != listaEnt[i]){
                            R++;
                            listaRes[j]=listaEnt[i];
                      
             }
         }
     }
     system ("cls");
     cout<<"Lista Entrada:\n";
     for(int i=0; i<N; i++){
             cout<<listaEnt[i];
     }
     cout<<"\nLista Resultado:\n";
     for(int j=0; j<R; j++){
             cout<<listaRes[j];
     }
     cout<<"\n\n";
     system("pause");
     return(0);
}
