#include<iostream>
using namespace std;
int main(){
     
     int sexo, con= 0, opc;
     float alt= 0, T_alt= 0, M_alt= 0, m_alt= 1000, media;
     string usr, nome1, nome2;
     
     do {
         cout<<"-------------------Cadastro de Pessoas-----------------------";
         cout<<"\n";
         cout<<"Qual o seu Nome, Altura e Sexo = 1 - Masculino e 2 - Feminino\n";
         cin>>usr>>alt>>sexo;
         if (sexo == 1 ) {
                  con= con+1;
                  T_alt=T_alt+alt;
                  if (alt > M_alt) {
                          nome1=usr;
                          M_alt=alt;
                  } 
                  if (alt < m_alt) {
                          nome2=usr;
                          m_alt=alt;
                  }
         }
         cout<<"\nVoce deseja cadastrar mais usuarios?\n\t[1]Continuar.\n\t[0]Finalizar.\n";
         cin>>opc;
     }
     while (opc != 0);
     media= T_alt/con;
     if (con != 0){
             cout<<"\nA media das alturas dos homens sao "<<media;
     }
     cout<<"\nA maior altura e do "<<string(nome1)<<" com "<<M_alt;
     cout<<"\nA menor altura e do "<<string(nome2)<<" com "<<m_alt;
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
