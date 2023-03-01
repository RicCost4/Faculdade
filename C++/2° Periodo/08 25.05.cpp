#include<iostream>
using namespace std;
int main(){
     
     int opc, cont=0;
     float salT= 0, horT, Vhor, salB, Msal= 0;
     string usr, nome1, sexo;
     
     do {
         cout<<"-------------------Cadastro de Pagamento-----------------------";
         cout<<"\n";
         cout<<"Cadastro "<<++cont;
         cout<<"\n";
         cout<<"Digite o seu Nome, Horas Trabalhadas e o Valor das Horas Trabalhadas e sexo\n";
         cin>>usr>>horT>>Vhor>>sexo;
         
         salB=horT*Vhor;
         salT= salT+salB;
         if (salB > Msal) {
            nome1=usr;
            Msal=salB;
         }
         cout<<"\nVoce deseja cadastrar mais usuarios?\n\t[1]Continuar.\n\t[0]Finalizar.\n";
         cin>>opc;
         system ("cls");
     }
     while (opc != 0);
     cout<<"\nA soma dos salarios da empresa e "<<salT;
     cout<<"\nO maior salario e do "<<nome1<<" com "<<Msal;
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
