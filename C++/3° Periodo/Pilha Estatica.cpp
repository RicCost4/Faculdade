#include<iostream>
#include<conio.h>
using namespace std;

const int MAXTAM = 3;

class TipoPilha{
      private:
              int pilha[MAXTAM];
              int Inicio, Topo, Quantos;
      public:
              TipoPilha();
              int TipoPilha_Vazia();
              int TipoPilha_Cheia ();
              int TipoPilha_Tamanho();
              void TipoPilha_Enpilhar(int &Elemento);
              void TipoPilha_Desenpilhar(int &Elemento);
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
void TipoPilha :: TipoPilha_Enpilhar(int &Elemento){
          if (TipoPilha_Cheia()){
                                 cout<<"Pilha Cheia\n";
                                 getch();
          }else{
                pilha[Topo] = Elemento;
                cout<<"Elemento "<<pilha[Topo]<<" na Pilha!!!!\n";
                Quantos++;
                Topo++;
                getch();
          }
          return;
}

void TipoPilha :: TipoPilha_Desenpilhar(int &Elemento){
          if (TipoPilha_Vazia()){
                                 cout<<"Pilha Vazia\n";
                                 getch();
          }else{
                Elemento = pilha[Topo-1];
                cout<<pilha[Topo-1]<<" Retirado da Pilha\n";
                Quantos--;
                Topo--;
                getch();
          }
          return;
}

int main(){
     
     TipoPilha s;
     int i, x, op;
     
     do{
        system("cls");
        cout<<"\t=====PILHA ESTATICA=====\n\nDigite uma opcao:\n\t1 -- Enpilhar\n\t2 -- Desenpilhar: ";
        cin>>op;
        
        if(op == 1){
              cout<<"Digite um item ha ser inserido na pilha: ";
              cin>>x;
              cout<<"\n=======================================";
              s.TipoPilha_Enpilhar(x);
        }
        if(op == 2){
              s.TipoPilha_Desenpilhar(i);
        }
     }while (op == 1 || op == 2);
     
     system("pause");
     return(0);
}
