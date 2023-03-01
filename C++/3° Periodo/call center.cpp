#include<iostream>
#include<conio.h>
using namespace std;

const int MAXTAM = 3;
struct cadastro{
    string nome;
    string nat_sol;
    int cpf;
    int data_nasc;
};

cadastro cliente[MAXTAM];
int Frente = 0, Tras = 0, Quantos = 0;
//********************************************
int TipoFila_Vazia (){
    return Quantos == 0;
}
//********************************************
int TipoFila_Cheia (){
    return(Quantos == MAXTAM);
}
//********************************************
int TipoFila_Tamanho(){
    return(Quantos);
}
//********************************************
void TipoFila_Enfileirar(cadastro &fila){
     if (TipoFila_Cheia()){
        cout<<"Fila Cheia\n";
        getch();
     }else{
           cliente[Tras] = fila;
           cout<<"Cliente "<<cliente[Tras].nome<<" na FILA!!!!\n";
           Quantos++;
           Tras = (Tras + 1) % MAXTAM;
           getch();
     }
     return;
}

void TipoFila_Procurar(cadastro &fila){
     if (TipoFila_Vazia ()){
        cout<<"Fila Vazia\n";
        getch();
     }else{
           cout<<"\t\tInformação de cliente";
           cout<<"\n\tNome: "<<cliente[Frente].nome;
           cout<<"\n\tCPF: "<<cliente[Frente].cpf;
           cout<<"\n\tData de Nascimento: "<<cliente[Frente].data_nasc;
           cout<<"\n\tMotivo do Atendimento: "<<cliente[Frente].nat_sol;
           getch();
     }
     return;
}

void TipoFila_Desenfileirar(cadastro &fila){
     if (TipoFila_Vazia()){
        cout<<"Fila Vazia\n";
        getch();
     }else{
           fila = cliente[Frente];
           cout<<"\t\tAtendimento";
           cout<<"\n\tNome: "<<cliente[Frente].nome<<"\tMotivo do Atendimento: "<<cliente[Frente].nat_sol;
           getch();
           system("cls");
           cout<<"\n\nUsuario em atendimento\n\n";
           getch();
           system("cls");
           cout<<cliente[Frente].nome<<" Retirado da Fila\n";
           Quantos--;
           Frente = (Frente + 1) % MAXTAM;
           getch();
     }
     return;
}

void TipoFila_Get(cadastro &fila){
    if (TipoFila_Vazia()){
        cout<<"Fila Vazia\n";
        getch();
     }else{
           cout<<"Proximo da Fila\n";
           cout<<cliente[Frente].nome<<"\tMotivo do Atendimento: "<<cliente[Frente].nat_sol;
           getch();
     }
     return;
}
int main(){
     
     int x=0, op;
     cadastro colocar[MAXTAM], remover[MAXTAM];
     
     do{
        system("cls");
        cout<<"\t=====CALL CENTER=====\n\nDigite uma opcao:\n\t1 -- Cadastrar\n\t2 -- Atender\n\t3 -- Proximo cliente: ";
        cin>>op;
        
        if(op == 1){
              cout<<"Cadastro para entrar na fila";
              cout<<"\nDigite seu nome: ";
              cin>>colocar[x].nome;
              cout<<"\nDigite seu CPF: ";
              cin>>colocar[x].cpf;
              cout<<"\nDigite sua Data de Nascimento: ";
              cin>>colocar[x].data_nasc;
              cout<<"\nDigite o motivo do atendimento:\n\tSUPORTE.\n\tRECLAMACAO\n\tSOLICITACAO\n\tOUTROS.\n\t: ";
              cin>>colocar[x].nat_sol;
              cout<<"\n=======================================";
              TipoFila_Enfileirar(colocar[x]);
        }
        if(op == 2){
              TipoFila_Desenfileirar(remover[x]);
        }
        if (op == 3){
               TipoFila_Get(colocar[x]);
        }
        x++;
     }while (op == 1 || op == 2 || op == 3);
     
     system("pause");
     return(0);
}
