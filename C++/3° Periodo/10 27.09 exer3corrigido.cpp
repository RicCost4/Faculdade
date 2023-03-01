#include<iostream>
using namespace std;

void vInicial(int vetor[], int n){
     for (int i=0; i<n; i++){
         cout<<"Digite um numero: ";
         cin>>vetor[i];
     }
}

void carregaVetor(int vetor[], int n){
     cout<<"\nLista Entrada:\n";
     for (int i=0; i<n; i++){
         cout<<"\t"<<vetor[i];
     }
}

void vFinal(int vetor[], int n){
     int rep=0;
     cout<<"\nLista de numeros nao repetidos:\n";
     for (int i=0; i<n; i++){
         for (int j=i+1; j<n; j++){
             if(vetor[i] == vetor[j]){
                         rep++;
             }
         }
         if(rep == 0){
                cout<<"\t"<<vetor[i];
         }
         rep=0;
     }
}
int main(){
     
     int n, vetor[n];
     
     cout<<"Digite quantas numeros voce quer incluir na lista: ";
     cin>>n;
     
     vInicial(vetor, n);
     system ("cls");
     
     carregaVetor(vetor, n);
     
     vFinal(vetor, n);
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
