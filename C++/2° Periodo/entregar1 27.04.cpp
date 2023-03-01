#include<iostream>
using namespace std;
int main(){
     
     string nome;
     int id;
     float sal;
     char sexo;
     
     cout<<"\t-------FORMULARIO-------";
     cout<<"\n\nQual o seu nome: ";
     cin>>nome;
     cout<<"\n\nQual o sua idade: ";
     cin>>id;
     cout<<"\n\nQual o seu salario em CLT: ";
     cin>>sal;
     cout<<"\n\nQual o seu sexo {Digite M(Masculino) e F(Femenino)}: ";
     cin>>sexo;
     cout<<"\n\n";
     if(sexo == 'M' || sexo == 'm') {
             cout<< nome<<" voce tem "<< id <<" anos";
     }else {
           if(sexo == 'F' || sexo == 'f') {
             cout<< nome<<" recebe "<< sal;
           }else {
                 cout<<"\n\nSexo nao confere, tente novamente";
           }
     }
                     
     cout<<"\n\n";
     
     system("pause");
     return(0);
}
