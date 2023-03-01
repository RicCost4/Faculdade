#include<iostream>
using namespace std;
int main(){
     
     float saldo, dep, ret, dep1, ret1, tdep, tret;
     cout<<"Exercicio 24, pg.70 da apostila Logica de programação.";
     cout<<"\n\n";
     saldo= 100.00;
     cout<<"\t\tBem-Vindo ao Banco CITYBANK";
     cout<<"\nSaldo Atual: "<< saldo;
     cout<<"\nDigite um valor para Deposito: ";
     cin>>dep;
     saldo= saldo+dep;
     cout<<"\nDigite um valor para Retirada: ";
     cin>>ret;
     saldo= saldo-ret;
     cout<<"\nDigite outro valor para Deposito: ";
     cin>>dep1;
     saldo= saldo+dep1;
     cout<<"\nDigite outro valor para Retirada: ";
     cin>>ret1;
     saldo= saldo-ret1;
     tdep= dep+dep1;
     tret= ret+ret1;
     cout<<"\n-------------------------------------";
     cout<<"\n\n";
     cout<<"\t\t--Resumo das Transaçoes do dia--";
     cout<<"\nTotal de Deposito hoje: "<< tdep;
     cout<<"\nTotal de Retiradas hoje: "<< tret;
     cout<<"\nSeu Saldo hoje: "<< saldo;
     cout<<"\nAgradecemos sua visita, volte sempre :):)";
     cout<<"\n\n";
     
     system("pause");
     return(0);
}
