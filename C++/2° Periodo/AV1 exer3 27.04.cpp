#include<iostream>
using namespace std;
int main(){
     
     int n1, n2, soma, sub, mult, rdiv, divr, cal;
     float div, pot;
     
     cout<<"\t\tAtividade 6 prova AV1 27/04/2021";
     cout<<"\n\n-----CALCULADORA-----";
     cout<<"\nDigite um numero: ";
     cin>>n1;
     cout<<"\nDigite outro numero: ";
     cin>>n2;
     cout<<"\n\n---------------------------------";
     cout<<"\nEscolha uma opera��o\n[1]Soma\n[2]Subtrair";
     cout<<"\n[3]Multiplicar\n[4]Divisao\n[5]Resto da Div";
     cout<<"\n[6]Div Real\n[7]potencia.";
     cout<<"\nOpcao: ";
     cin>>cal;
     
     if(n2 != 0){
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
                 pot = n1^n2;
                 cout<<"Resultado: "<<pot;
                 break;
            default:
                 cout<<"Valor Invalido";
                 break;
            }
     }
     else{
          cout<<"\nSegundo Numero nao pode ser 0";
          cout<<"\nTente Novamente";
          cout<<"\n\n";
     }
     
     
     cout<<"\n\n";
     
     system("pause");
     return(0);
}
