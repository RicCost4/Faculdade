#include<iostream>
using namespace std;
int main(){
     
     
     string nome[5]; //declarar tipo, nome da variavel e entre parenteses o numero de posição que vai relaciona(começa 0 ate N-1)
     int num[5]; 
     nome[0]="Teste";
     nome[3]="Jose";
     
     cout<<nome[0]<<"\n";
     cout<<nome[1]<<"\n";
     cout<<nome[2]<<"\n";
     cout<<nome[3]<<"\n";
     cout<<nome[4];
     
     cout<<"\nTeste 2";
     for (int i=0; i<5; i++){
             cout<<"\nDigite um numero: ";
             cin>>num[i];
     }
     
     for (int i=0; i<5; i++){
          cout<<"\n"<<num[i]<<"\n";
         }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
