#include<iostream>
#include<math.h>
using namespace std;
int main(){
     
     int opc, n1, n2, soma, sub, mult, rdiv, divr, cal;
     float div, pot;
     
     do {
           cout<<"\n\n-----CALCULADORA-----";
           cout<<"\nDigite um numero: ";
           cin>>n1;
           cout<<"\nDigite outro numero: ";
           cin>>n2;
           cout<<"\n\n---------------------------------";
           if(n2 != 0){
                 cout<<"\nEscolha uma operação\n[1]Soma\n[2]Subtrair";
                 cout<<"\n[3]Multiplicar\n[4]Divisao\n[5]Resto da Div";
                 cout<<"\n[6]Div Real\n[7]potencia.";
                 cout<<"\nOpcao: ";
                 cin>>cal;
                 switch (cal) {
                        case 1:
                             soma = n1+n2;
                             cout<<"Resultado: "<<soma;
                             break;
                        case 2:
                             sub = n1-n2;
                             cout<<"Resultado: "<<sub;
                             break;
                        case 3:
                             mult = n1*n2;
                             cout<<"Resultado: "<<mult;
                             break;
                        case 4:
                             div = n1/n2;
                             cout<<"Resultado: "<<div;
                             break;
                        case 5:
                             rdiv = n1%n2;
                             cout<<"Resultado: "<<rdiv;
                             break;
                        case 6:
                             divr = n1/n2;
                             cout<<"Resultado: "<<divr;
                             break;
                        case 7:
                             pot=pow(n1,n2);
                             cout<<"Resultado: "<<pot;
                             break;
                        default:
                        cout<<"Valor Invalido";
                        break;
                 }
           }
           else{
                cout<<"\nEscolha uma operação\n[1]Soma\n[2]Subtrair\n[3]Multiplicar\n[4]Potencia.";
                cout<<"\nOpcao: ";
                cin>>cal;
                switch (cal) {
                       case 1:
                            soma = n1+n2;
                            cout<<"Resultado: "<<soma;
                            break;
                       case 2:
                            sub = n1-n2;
                            cout<<"Resultado: "<<sub;
                            break;
                       case 3:
                            mult = n1*n2;
                            cout<<"Resultado: "<<mult;
                            break;
                       case 4:
                            pot=pow(n1,n2);
                            cout<<"Resultado: "<<pot;
                            break;
                       default:
                               cout<<"Valor Invalido";
                               break;
                       }
           }
           cout<<"\nDeseja continuar na calculador?\n[1]Continuar.\n[0]Finalizar. ";
           cin>>opc;
     }
     while (opc != 0);
     cout<<"Fim da Calculadora......";
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
