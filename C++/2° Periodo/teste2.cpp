#include<iostream>
using namespace std;
int main(){
     
     int idade;
     string nome;
     cout<<"Idade: ";
     cin>>idade;
     while (idade >= 0) {
           cout<<"Nome: ";
           cin>>nome;
           if (idade > 30) {
                     cout<<"\nMaior que 30 "<<nome<<"\n";
           }
     }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
