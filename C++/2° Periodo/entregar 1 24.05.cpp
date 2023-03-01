#include<iostream>
using namespace std;
int main(){
     
     int idade, soma= 0, contador= 10; //Fiz com 10 para não ficar grande, mais funcionou com 300
     string nome;
     cout<<"\t\t------------Identificador de maioridade--------------";
     cout<<"\n";
     while (contador >= 1){
           cout<<"\n========================================================================";
           cout<<"\nNome: ";
           cin>>nome;
           cout<<"Idade: ";
           cin>>idade;
           soma= soma+idade;
           if (idade >= 21){
                     cout<<"-------------------------------------------------------------------";
                     cout<<"\n\t"<<nome<<", idade "<<idade<<", voce tem mais que 20 anos\n";
                     cout<<"-------------------------------------------------------------------";
           }
           contador= contador-1;
     }
      cout<<"A soma das idades sao "<<soma;
     cout<<"\n\n";
     system("pause");
     return(0);
}
