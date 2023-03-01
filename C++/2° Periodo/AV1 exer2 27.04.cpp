#include<iostream>
using namespace std;
int main(){
     
     int n1, n2, n3, n4, n5, soma;
     float media;
     
     cout<<"\t\tAtividade 5 prova AV1 27/04/2021";
     cout<<"\n\nDigite um numero : ";
     cin>>n1;
     cout<<"\nDigite outro numero: ";
     cin>>n2;
     cout<<"\nDigite outro numero: ";
     cin>>n3;
     cout<<"\nDigite outro numero: ";
     cin>>n4;
     cout<<"\nDigite mais um numero: ";
     cin>>n5;
     
     soma = n1+n2+n3+n4+n5;
     media = soma/5;
     
     cout<<"\nOs numeros escolhidos sao "<<n1<<", "<<n2<<", "<<n3<<", "<<n4<<", "<<n5;
     cout<<"\nA soma deles eh "<<soma;
     cout<<"\nJa a media sao "<<media;
     
     cout<<"\n\n";
     
     system("pause");
     return(0);
}
