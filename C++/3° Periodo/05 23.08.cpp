#include<iostream>
using namespace std;
int main(){
     
     int num[5], soma, media;
     
     cout<<"\t\tAtividade PG-86 Atividade 75";
     cout<<"\tDada a Tabela de valores abaixo, calcule e imprima\na)Soma total dos valores;\nb) Media dos valores\nTABELA [10][20][30][40][50]";
     cout<<"\n===================================================";
     num[0]=10;
     num[1]=20;
     num[2]=30;
     num[3]=40;
     num[4]=50;
     
     soma=num[0]+num[1]+num[2]+num[3]+num[4];
     media=soma/5;
     
     cout<<"\nLetra A= "<<soma<<"\nLetra B= "<<media;
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
