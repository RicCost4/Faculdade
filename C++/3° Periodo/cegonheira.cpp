#include<iostream>
#include<conio.h>
#include <stdio.h>
using namespace std;

const int MAXTAM = 3;

struct caminhao{
    string marca;
    string modelo;
    string cor;
    int chassi;
    int ano;
};

class TipoPilha{
      private:
              caminhao pilha[MAXTAM];
              int Inicio, Topo, Quantos;
      public:
              TipoPilha();
              int TipoPilha_Vazia();
              int TipoPilha_Cheia ();
              int TipoPilha_Tamanho();
              void TipoPilha_Empilhar(caminhao &Elemento);
              void TipoPilha_Desempilhar(caminhao &Elemento);
              void TipoPilha_Lista(caminhao &Elemento);
              void TipoPilha_TamanhoPilha();
              void TipoPilha_Pesquisa();
};

TipoPilha :: TipoPilha (){//construtor padrão
         Inicio = Topo = Quantos = 0;
}
//********************************************
int TipoPilha :: TipoPilha_Vazia (){
          return (Quantos == 0);
}
//********************************************
int TipoPilha :: TipoPilha_Cheia (){
          return(Quantos == MAXTAM);
}
//********************************************
int TipoPilha :: TipoPilha_Tamanho(){
          return(Quantos);
}
//********************************************
void TipoPilha :: TipoPilha_Empilhar(caminhao &Elemento){
     if (TipoPilha_Cheia()){
                            cout<<"Caminhao Cheiao\n";
                            getch();
     }else{
           pilha[Topo] = Elemento;
           cout<<"Veiculo "<<pilha[Topo].marca<<" "<<pilha[Topo].modelo<<" esta cadastrado nesta cegonheira!!!!\n";
           Quantos++;
           Topo++;
           getch();
     }
     return;
}

void TipoPilha :: TipoPilha_Desempilhar(caminhao &Elemento){
     if (TipoPilha_Vazia()){
                            cout<<"Cegonha Vazia\n";
                            getch();
     }else{
           Elemento = pilha[Topo-1];
           cout<<pilha[Topo-1].marca<<" "<<pilha[Topo-1].modelo<<" Retirado da Cegonha\n";
           Quantos--;
           Topo--;
           getch();
     }
     return;
}

void TipoPilha :: TipoPilha_Lista(caminhao &Elemento){
     if (TipoPilha_Vazia()){
                            cout<<"Cegonha Vazia\n";
                            getch();
     }else{
           cout<<"\t\tInformacao das cargas cadastrado nesta Cegonheira\n";
           for(int y =0; y < Quantos; y++){
                   cout<<"lote: "<<y+1<<"\n";
                   cout<<"Marca: "<<pilha[y].marca<<"\n";
                   cout<<"Modelo: "<<pilha[y].modelo<<"\n";
                   cout<<"Cor: "<<pilha[y].cor<<"\n";
                   cout<<"Chassi: "<<pilha[y].chassi<<"\n";
                   cout<<"Ano da Fabricacao: "<<pilha[y].ano;
                   cout<<"\n=============================";
           }
           getch();
     }
     return;
}

void TipoPilha :: TipoPilha_TamanhoPilha(){
     if (TipoPilha_Vazia()){
                            cout<<"Cegonha Vazia\n";
                            getch();
     }else{
           cout<<"Possui "<<Quantos<<" veiculos cadastrados nesta cegonheira";
           getch();
     }
     return;
}

void TipoPilha :: TipoPilha_Pesquisa(){
     if (TipoPilha_Vazia()){
                            cout<<"Cegonha Vazia\n";
                            getch();
     }else{
           cout<<"Funcao em Desenvolvimento :)";
           getch();
     }
     return;}

int main(){
     
     TipoPilha s;
     caminhao colocar[MAXTAM], remover[MAXTAM], informa[MAXTAM];
     string motorista;
     int registro, op, x, i, l;
     
     cout<<"\t=====Concessionaria Catalao=====\n";
     cout<<"Digite o Motorista e o Registro do caminhao para cadastro dos veiculos para transporte:\n";
     cin>>motorista>>registro;
     
     do{
        system("cls");
        cout<<"Motorista: "<<motorista<<"\nCegonheira: "<<registro;
        cout<<"\n\t=====Concessionaria Catalao=====\n\nDigite uma das opcao:\n\t1 -- Cadastrar veiculo";
        cout<<"\n\t2 -- Retirar veiculo\n\t3 -- Informaçao da Cegonheira\n\t4 -- Quantidade de veiculos na cegonheira\n\t5 -- Pesquisar cadastro\n: ";
        cin>>op;
        switch (op){
               case 1:
                    cout<<"Motorista: "<<motorista<<"\nCegonheira: "<<registro;
                    cout<<"\nCadastro dos Veiculos";
                    cout<<"\nDigite a marca do veiculo: ";
                    cin>>colocar[x].marca;
                    cout<<"\nDigite o modelo do veiculo: ";
                    cin>>colocar[x].modelo;
                    cout<<"\nDigite a cor do veiculo: ";
                    cin>>colocar[x].cor;
                    cout<<"\nDigite o chassi do veiculo: ";
                    cin>>colocar[x].chassi;
                    cout<<"\nDigite o o ano da fabricacao: ";
                    cin>>colocar[x].ano;
                    cout<<"\n=======================================";
                    s.TipoPilha_Empilhar(colocar[x]);
                    break;
               case 2:
                    cout<<"Motorista: "<<motorista<<"\nCegonheira: "<<registro<<"\n";
                    s.TipoPilha_Desempilhar(remover[i]);
                    break;
               case 3:
                    cout<<"Motorista: "<<motorista<<"\nCegonheira: "<<registro<<"\n";
                    s.TipoPilha_Lista(informa[l]);
                    break;
               case 4:
                    cout<<"Motorista: "<<motorista<<"\nCegonheira: "<<registro<<"\n";
                    s.TipoPilha_TamanhoPilha();
                    break;
               default:
                       cout<<"Motorista: "<<motorista<<"\nCegonheira: "<<registro<<"\n";
                       s.TipoPilha_Pesquisa();
        }
     }while (op == 1 || op == 2 || op == 3 || op == 4 || op == 5);
     
     system("pause");
     return(0);
}
