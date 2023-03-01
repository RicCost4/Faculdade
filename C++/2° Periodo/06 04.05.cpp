#include<iostream>
using namespace std;
int main(){
     
     string nome;
     float HT, SB;
     int cargo, turno;
     
     cout<<"\t\tAtividade 35 da apostila LOGICA de PROGRAMACAO pg 73";
     cout<<"\n\n-----Calculo Salarial da PADARIA DA JUCRECIA-----";
     cout<<"\nDigite seu nome: ";
     cin>>nome;
     cout<<"\nDigite sua horas trabalhadas: ";
     cin>>HT;
     cout<<"\nQual o codigo do seu cargo: ";
     cin>>cargo;
     switch (cargo) {
            case 1:
                 cout<<"Qual o seu turno: ";
                 cin>>turno;
                 switch (turno) {
                        case 1:
                               SB= (HT*5)*1.03;
                               cout<<"\n"<<nome<<" seu salario Base sera R$"<<HT*5;
                               cout<<"\n"<<nome<<" seu salario Bruto sera R$"<<SB;
                               break;
                        case 2:
                               SB= (HT*5)*1.04;
                               cout<<"\n"<<nome<<" seu salario Base sera R$"<<HT*5;
                               cout<<"\n"<<nome<<" seu salario Bruto sera R$"<<SB;
                               break;
                        case 3:
                               SB= (HT*5)*1.05;
                               cout<<"\n"<<nome<<" seu salario Base sera R$"<<HT*5;
                               cout<<"\n"<<nome<<" seu salario Bruto sera R$"<<SB;
                               break;
                        default:
                                cout<<"\nTurno Invalido";
                                break;
                        }
                 break;
            case 2:
                 cout<<"Qual o seu turno: ";
                 cin>>turno;
                 switch (turno) {
                        case 1:
                               SB= (HT*8)*1.03;
                               cout<<"\n"<<nome<<"\n seu salario Base sera R$"<<HT*5;
                               cout<<"\n"<<nome<<"\n seu salario Bruto sera R$"<<SB;
                               break;
                        case 2:
                               SB= (HT*8)*1.04;
                               cout<<"\n"<<nome<<" seu salario Base sera R$"<<HT*5;
                               cout<<"\n"<<nome<<" seu salario Bruto sera R$"<<SB;
                               break;
                        case 3:
                               SB= (HT*8)*1.05;
                               cout<<"\n"<<nome<<" seu salario Base sera R$"<<HT*5;
                               cout<<"\n"<<nome<<" seu salario Bruto sera R$"<<SB;
                               break;
                        default:
                                cout<<"\nTurno Invalido";
                                break;
                        }
                 break;
            default:
                 cout<<"Cargo Invalido";
                 break;
            }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
