#include<iostream>
using namespace std;
int main(){
     
     string nome, sexo, opc, cad;
     int cont, ConS= 0, ConN= 0, femS= 0, femN= 0, total= 0;
     float por;
     
     for (cont= 0; cont < 10; cont++) {
         cout<<"------Formulario de Pesquisa de Satisfacao-----";
         cout<<"\n|      Digite seu nome:  ";
         cin>>nome;
         cout<<"|      Seu Sexo: \n|\tF - Feminino.\n|\tM - Masculino.  ";
         cin>>sexo;
         cout<<"|      Voce gostou do novo Produto Lancado:\n|\tS - Sim.\n|\tN - Nao.  ";
         cin>>opc;

         if (sexo == "F" || sexo == "f"){
               total= total+1;
               if(opc == "s" || opc == "S"){
                      femS= femS+1;
               }
               if(opc == "n" || opc == "N"){
                      femN= femN+1;
               }
               por= (femS*100)/total;
         }
         if(opc == "s" || opc == "S"){
              ConS= ConS+1;
         }
         if(opc == "n" || opc == "N"){
              ConN= ConN+1;
         }
         system ("cls");
     }
     cout<<"-----------------Tabela de Controle de Dados--------------------------------";
     cout<<"\n|            Usuarios que Digitaram SIM["<<ConS<<"]                        |";
     cout<<"\n|            Usuarios que Digitaram NAO["<<ConN<<"]                        |";
     cout<<"\n|"<<por<<"% das mulheres disseram SIM do total de "<<total<<" funcionarias.       |";
     cout<<"\n----------------------------------------------------------------------------";
     cout<<"\n\n";
     system("pause");
     return(0);
}
