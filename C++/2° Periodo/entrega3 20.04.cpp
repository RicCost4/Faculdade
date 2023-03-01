#include<iostream>
using namespace std;
int main(){
     
     int n1, n2, soma, sub, mul, rdiv, qdiv;
     float div, pot;
     cout<<"Exercicio 26, pg.71 da apostila Logica de programação.";
     cout<<"\n\n";
     cout<<"Digite um numero: ";
     cin>>n1;
     cout<<"Digite outro numero: ";
     cin>>n2;
     cout<<"\n\n";
     
     soma= n1+n2;
     sub= n1-n2;
     mul= n1*n2;
     pot= n1^n2;
     
     
     cout<<"--Resultados--";
     cout<<"\nA soma de "<< n1<<" e de "<< n2<<" e igual a "<< soma;
     cout<<"\nA subtraçao de "<< n1<<" e de "<< n2<<" e igual a "<< sub;
     cout<<"\nA multiplicaçao de "<< n1<<" e de "<< n2<<" e igual a "<< mul;
     cout<<"\nA potencia de "<< n1<<" e de "<< n2<<" e igual a "<< pot;
     
     if(n2 != 0){
        div= n1/n2;
        rdiv= n1%n2;
        qdiv= n1/n2;
        cout<<"\nA divisao real de "<< n1<<" e de "<< n2<<" e igual a "<< div;
        cout<<"\nO resto da divisao de "<< n1<<" e de "<< n2<<" e igual a "<< rdiv;
        cout<<"\nO quociente inteiro da divisao de "<< n1<<" e de "<< n2<<" e igual a "<< qdiv;
        cout<<"\n\n";
     }
     else{
          cout<<"\nNao existe divisão por 0";
          cout<<"\n\n";
     }
     
     system("pause");
     return(0);
}
