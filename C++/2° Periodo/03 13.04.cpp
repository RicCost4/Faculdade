#include<iostream>
using namespace std;
int main(){
     
     float fah, cel;
     cout<<"Exercicio 22, pg 70 da apostila Logica de programação.";
     cout<<"\n\n";
     cout<<"\t\tConverso de Temperatura";
     cout<<"\n\nDigite ha Temperatura em Fahrenheit(F): ";
     cin>>fah;
     
     cel=(fah-32)/1.8;
     
     cout<<"\nA Temperatura em Celsius eh: "<< cel;
     cout<<"\n\n";
     system("pause");
     return(0);
}
