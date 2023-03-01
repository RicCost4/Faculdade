#include<iostream>
using namespace std;
int main(){
     
     int idade, contador;
     string nome;
     
     cout<<"Digite um valor: ";
     cin>>contador;
     while (contador < 20) {
           cout<<"Nome e Idade: ";
           cin>>nome>>idade;
           if (idade >= 30) {
                     cout<<"\nMaior que 30 "<<nome<<"\n";
           }contador++;
     }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
