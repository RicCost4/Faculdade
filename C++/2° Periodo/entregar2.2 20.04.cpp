#include<iostream>
using namespace std;
int main(){
     
     // identificando o tipo da variavel.
     float saldo, dep, ret, dep1, ret1, tdep, tret;
     // mostrando o contexto do programa.
     cout<<"Exercicio 25, pg.71 da apostila Logica de programação.";
     cout<<"\n\n";
     // identificado o primeiro valor da variavell que sera modificada no programa.
     saldo= 100.00;
     // mostra a tela incial do programa.
     cout<<"\t\tBem-Vindo ao Banco CITYBANK";
     cout<<"\nSaldo Atual: "<< saldo;
     // inicio dos comandos de entrada do programa mais a modificação da variavel 'saldo'.
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
     // processamentos dos dados.
     saldo= saldo-ret1;
     tdep= dep+dep1;
     tret= ret+ret1;
     // tela final do programa mostrando a saida dos resultados com base nos processos feito 
     // com a entradados dados.
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
