#include<iostream>
using namespace std;
int main(){
     
     string nome;
     float hr, SL;
     int classe;
     
     cout<<"\t\tAtividade 31 da apostila LOGICA de PROGRAMACAO pg 72";
     cout<<"\n\n-----Calcula Salarial da SNOB Confeccoes-----";
     cout<<"\nDigite seu nome: ";
     cin>>nome;
     cout<<"\nDigite sua horas trabalhadas: ";
     cin>>hr;
     cout<<"\nQual a sua classe funcional: ";
     cin>>classe;
     switch (classe) {
            case 1:
                 SL=(hr*5)*0.89;
                 cout<<nome<<" seu salario sera "<<SL;
                 break;
            case 2:
                 SL=(hr*9)*0.89;
                 cout<<nome<<" seu salario sera "<<SL;
                 break;
            default:
                 cout<<"Classe Invalido";
                 break;
            }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
