#include<iostream>
using namespace std;
int main(){
     
     int x, y= 10;
     
     cout<<"==============================================================";
     cout<<"\nLancamento do Foquete Espacial 001.45 Star Force = BRASIL";
     cout<<"\nIniciar lancamento do Foquete Espacial\n\t{1}=Iniciar\n\t{0}=Cancelar\n";
     cout<<"==============================================================\n";
     cin>>x;
     if (x == 1) {
           while (y >= 0) {
                 y= y-1;
                 if (y == 9) {
                       cout<<"\n10.....\n\t\tTrancado as portas";
                 }
                 if (y == 8) {
                       cout<<"\n09.....\n\t\tLigando Sistemas";
                 }
                 if (y == 7) {
                       cout<<"\n08.....\n\t\tAtualizando Sistemas";
                 }
                 if (y == 6) {
                       cout<<"\n07.....\n\t\tConferindo combustivel\n\t\t0%\n\t\t15%\n\t\t45%";
                 }
                 if (y == 5) {
                       cout<<"\n06.....\n\t\tConferindo combustivel\n\t\t60%\n\t\t75%\n\t\t100........%";
                 }
                 if (y == 4) {
                       cout<<"\n05.....\n\t\tConferindo comunicacao";
                 }
                 if (y == 3) {
                       cout<<"\n04.....\n\t\tPreparar";
                 }
                 if (y == 2) {
                       cout<<"\n03.....\n\t\tPreparar";
                 }
                 if (y == 1) {
                       cout<<"\n02.....\n\t\tPreparar";
                 }
                 if (y == 0) {
                       cout<<"\n01.....\n\tPronto...\n\tlancar Foquete";
                 }
           }
     }
     else {
          cout<<"lancamento Cancelado, Aguardado Ordens!!!!!!";
     }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
