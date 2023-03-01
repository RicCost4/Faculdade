#include<iostream>
#include<math.h>
using namespace std;
int main(){
     
     int num[10];
     
     cout<<"\t\tAtividade PG-86 Atividade 76";
     cout<<"\tFasa um algoritimo que: \na)Crie um vetor de tamanho 10;\nb) Preencha cada posisao do vetor com zero";
     cout<<"\nc) Preencha cada posisao do vetor com um numero que seja igual ao quadrado do indice dessa posisao;\nd)imprima os elementos do vetor que tem indice par.";
     cout<<"\n===================================================";
     
     cout<<"Letra B";
     for (int i=0; i<10; i++){
         num[i]=0;
         cout<<"\nPos: "<<i<<" = "<<num[i];
     }
     cout<<"\nClique para continuar...";
     cout<<"\n";
     system("pause");
     cout<<"\nLetra C";
     for (int i=0; i<10; i++){
         num[i]=pow(i,2);
         if (num[i]%2 == 0 ){
             cout<<"\nLetra D Pos: "<<i<<" = "<<num[i];
         }
     }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
