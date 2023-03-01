#include<iostream>
using namespace std;
int main(){
     
     float kmh, ms;
     
     cout<<"\t\tAtividade 4 prova AV1 27/04/2021";
     cout<<"\n\n-----Conversao-----";
     cout<<"\nDigite sua Velocidade em Km/H: ";
     cin>>kmh;
     
     ms = kmh/3.6;
     cout<<"\nA sua distancia percorrida em m/s eh "<<ms;
     
     cout<<"\n\n";
     
     system("pause");
     return(0);
}
