#include<iostream>
using namespace std;
int main(){
     
     string nome;
     int DDD, tel, T_tel, Imp_L;
     float Vtb, acreL, acreI, total, Tar_I;
     
     cout<<"\t\tAtividade 37 da apostila LOGICA de PROGRAMACAO pg 73";
     cout<<"\n\n-----Calculo Tarifario do servico da TELEMAR-----";
     cout<<"\nDigite seu Nome: ";
     cin>>nome;
     cout<<"\nDigite seu DDD: ";
     cin>>DDD;
     cout<<"\nDigite o numero do seu telefone *sem caractere*: ";
     cin>>tel;
     if (DDD == 31 || DDD == 32 || DDD == 33 || DDD == 34 || DDD == 35 || DDD == 37 || DDD == 38) {
        cout<<"Qual o seu Servico telefonico.\nResidencial: 1\nComercial: 2\n: ";
        cin>>T_tel;
        switch (T_tel) {
               case 1:
                    Vtb= 38.14;
                    acreL= 0;
                    
                    cout<<"Digite a tarifa Interurbano: ";
                    cin>>Tar_I;
                    acreI= Tar_I*1.05;
                    cout<<"Digite a quantidade de impulso local: ";
                    cin>>Imp_L;
                    if (Imp_L >= 101){
                       acreL= (Imp_L-100)*0.15;
                       }
                    total= Vtb+acreL+acreI;
                    cout<<"\n----Resumo da Conta do mes----";
                    cout<<"\n\nUsuario: "<<nome;
                    cout<<"\nTelefone:("<<DDD<<") "<<tel;
                    cout<<"\nTipo de Telefone: Residencial.";
                    cout<<"\nValor do servico: R$ "<<Vtb;
                    cout<<"\nImpulsos Local: "<<Imp_L;
                    cout<<"\nAcrescimos Local: R$ "<<acreL;
                    cout<<"\nInterubanos: "<<acreI;
                    cout<<"\n---------------------------------";
                    cout<<"\nValor Total: R$ "<<total;
                    break;
               case 2:
                    Vtb= 64.69;
                    acreL= 0;
                    
                    cout<<"Digite a tarifa Interurbano: ";
                    cin>>Tar_I;
                    acreI= Tar_I*1.05;
                    cout<<"Digite a quantidade de impulso local: ";
                    cin>>Imp_L;
                    if (Imp_L >= 101){
                       acreL= (Imp_L-100)*0.15;
                       }
                    total= Vtb+acreL+acreI;
                    cout<<"\n----Resumo da Conta do mes----";
                    cout<<"\n\nUsuario: "<<nome;
                    cout<<"\nTelefone:("<<DDD<<") "<<tel;
                    cout<<"\nTipo de Telefone: Residencial.";
                    cout<<"\nValor do servico: R$ "<<Vtb;
                    cout<<"\nImpulsos Local: "<<Imp_L;
                    cout<<"\nAcrescimos Local: R$ "<<acreL;
                    cout<<"\nInterubanos: "<<acreI;
                    cout<<"\n---------------------------------";
                    cout<<"\nValor Total: R$ "<<total;
                    break;
               default:
                       cout<<"\nCodigo Invalido";
                       break;
               }
     }else {
           cout<<"\n\nUsuario: "<<nome;
           cout<<" Telefone:("<<DDD<<") "<<tel;
           cout<<"\nnao confere com o nossos servicos, tente novamente";
     }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
