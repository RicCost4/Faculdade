#include<iostream>
using namespace std;
int main(){
     
     int num[30];
     
     cout<<"\t\tAtividade PG-86 Atividade 74";
     cout<<"\tFaca um algoritimo que:\na)Preencha um vetor com 30 ocorrencia de zeros;\nb) Preencha este mesmo vetor com 1,2,3...30";
     cout<<"\n===================================================";
     cout<<"\nLetra A";
     for (int i=0; i<30; i++){
         num[i]=0;
         cout<<"\nPos: "<<i<<" = "<<num[i];
     }
     cout<<"\n===================================================";
     cout<<"\nLetra B";
     for (int i=0; i<30; i++){
         num[i]=i+1;
         cout<<"\nPos: "<<i<<" = "<<num[i];
     }
     cout<<"\n\n";
     system("pause");
     return(0);
}
