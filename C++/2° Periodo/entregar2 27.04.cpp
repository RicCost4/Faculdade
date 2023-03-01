#include<iostream>
using namespace std;
int main(){
     
     string nome;
     float h, kgs;
     char sexo;
     
     cout<<"\t\t-----Formulario-----";
     cout<<"\nQual o seu nome: ";
     cin>>nome;
     cout<<"\nQual a sua Altura: ";
     cin>>h;
     cout<<"\nQual o seu sexo (Digite M(Msculino) ou F(Femenino)): ";
     cin>>sexo;
     
     if(sexo == 'M' || sexo == 'm') {
             kgs = 72.7*h-58;
             cout<<"\n"<<nome<<" seu peso ideal eh "<<kgs<<"Kgs";
     }else {
           if(sexo == 'F' || sexo == 'f'){
                   kgs = 62.1*h-44.7;
                   cout<<"\n"<<nome<<" seu peso ideal eh "<<kgs<<"Kgs";
           }else {
                 cout<<"\n\nSexo nao confere, tente novamente";
           }
     }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
