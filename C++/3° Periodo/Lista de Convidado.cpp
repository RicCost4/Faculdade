#include<conio.h>
#include<iostream>

using namespace std;

const int MAXTAM=3;

struct Convidado{
    string nome;
    string telefone;
    string empresa;
    string cargo;
};

class TipoLista{
private:
    Convidado Item [MAXTAM];
    int Primeiro, Ultimo, Quantos;
public:
    TipoLista(void);
    int Vazia(void);
    int Cheia(void);
    int Tamanho(void);
    void Inserir(Convidado *Elemento, int i);
    void ImprimeNome(string convidado);
    void ImprimePosicao(int num);
    void ListaConvidados(void);
    void RemoveNome(string convidado);
    void RemovePosicao(int num);
};

TipoLista :: TipoLista(void){
    Primeiro = Ultimo = Quantos = 0;
}

int TipoLista :: Vazia(void){
    return (Quantos == 0);
}

int TipoLista :: Cheia(void){
    return (Quantos == MAXTAM);
}

int TipoLista :: Tamanho(void){
    return (Quantos);
}

void TipoLista :: Inserir(Convidado *Elemento, int i){
    if (Cheia()){
        cout<<"Fila cheia.\n";
        getch();
    }
    else{
        i = i - 1;
        Item[i].nome=Elemento->nome;
        Item[i].telefone=Elemento->telefone;
        Item[i].empresa=Elemento->empresa;
        Item[i].cargo=Elemento->cargo;
        cout << "\nConvidado "<<Item[i].nome<<" na lista!!!\n";
        Quantos++;
        getch();
    }
}

void TipoLista :: ImprimeNome(string convidado){
     if(Vazia()){
                cout<<"Lista Vazia";
                getch();
     }else{
           int rol = 0;
           for(int y =0; y < MAXTAM; y++){
                   Item[y].nome;
                   if(Item[y].nome == convidado){
                                   cout<<"\nNome: "<<Item[y].nome<<"\n";
                                   cout<<"Telefone: "<<Item[y].telefone<<"\n";
                                   cout<<"Empresa: "<<Item[y].empresa<<"\n";
                                   cout<<"Cargo: "<<Item[y].cargo;
                                   cout<<"\n=============================\n";
                                   rol = 0;
                                   break;
                   }
                   rol++;
           }
           if (rol != 0){
                   cout<<"\nConvidado nao esta na lista!!";
           }
     }
     getch();
}

void TipoLista :: ImprimePosicao(int num){
     num = num-1;
     if(Vazia()){
                 cout<<"Lista Vazia";
                 getch();
     }else{
           for(int y =0; y < MAXTAM; y++){
                   if(y == num){
                        if(Item[y].nome == ""){
                                        cout<<"Posicao Vazia.";
                        }else{
                              cout<<"\nNome: "<<Item[y].nome<<"\n";
                              cout<<"Telefone: "<<Item[y].telefone<<"\n";
                              cout<<"Telefone: "<<Item[y].empresa<<"\n";
                              cout<<"Telefone: "<<Item[y].cargo;
                              cout<<"\n=============================\n";
                              break;
                        }
                   }
           }
           getch();
     }
}

void TipoLista :: ListaConvidados(void){
    if(Vazia()){
                cout<<"Lista Vazia";
                getch();
    }else{
          cout<<"\t\tInformacao dos convidados\n";
          for(int y =0; y < MAXTAM; y++){
                  Item[y].nome;
                  if(Item[y].nome == "" ){
                  }else{
                        cout<<y+1<<" Nome: "<<Item[y].nome<<"\n";
                        cout<<"  Telefone: "<<Item[y].telefone;
                        cout<<"\n=============================\n";
                  }
          }
          getch();
    }
}

void TipoLista :: RemoveNome(string convidado){
    if(Vazia()){
                cout<<"Lista Vazia";
                getch();
    }else{
          int rol = 0;
          for(int y =0; y < MAXTAM; y++){
                  Item[y].nome;
                  if(Item[y].nome == convidado){
                                  cout<<"\nNome: "<<Item[y].nome<<" Removido da Lista\n";
                                  Item[y].nome="";
                                  Item[y].telefone="";
                                  Item[y].empresa="";
                                  Item[y].cargo=="";
                                  cout<<"\n=============================\n";
                                  Quantos--;
                                  rol = 0;
                                  break;
                  }
                  rol++;
          }
          if (rol != 0){
                  cout<<"Convidado nao esta na lista!!";
          }
          getch();
    }

}

void TipoLista :: RemovePosicao (int num){
     num = num-1;
     if(Vazia()){
                 cout<<"Lista Vazia";
                 getch();
     }else{
           for(int y =0; y < MAXTAM; y++){
                   Item[y];
                   if(y == num){
                        if(Item[y].nome == ""){
                                        cout<<"\nPosicao Vazia, impossivel REMOVER!!!";
                        }else{
                              cout<<"\nNome: "<<Item[y].nome<<" Removido da Lista\n";
                              Item[y].nome="";
                              Item[y].telefone="";
                              Item[y].empresa="";
                              Item[y].cargo=="";
                              cout<<"\n=============================\n";
                              Quantos--;
                              break;
                        }
                   }
           }
           getch();
     }

}

//******************************************************************
int main(){
     
     Convidado colocar, informa[MAXTAM];
     TipoLista s;
     string pesquisar, remover;
     int x, l, t, op;
     do{
         cout<<"\t\t\tFila de convidados.\nDigite Opcao: \n\t1 - Inserir convidado em uma posicao na lista."
         <<"\n\t2 - Pesquisar convidado por nome.\n\t3 - Pesquisar convidado por posicao na lista."
         <<"\n\t4 - Listar convidados.\n\t5 - Remover convidado por nome."
         <<"\n\t6 - Remover convidado por posicoo na lista.\n\t7 - Imprimir numero de convidados "
         <<"\n\n8 - Encerrar\n:  ";
         cin>>op;
         cout<<"======================================";
         switch (op){
                case 1:
                     x = 0;
                     cout<<"\nInsira a posicao do Convidado a ser inserido: ";
                     cin>>x;
                     cout<<"\nDigite o Nome do convidado: ";
                     cin>>colocar.nome;
                     cout<<"\nDigite o seu Telefone: ";
                     cin>>colocar.telefone;
                     cout<<"\nDigite a empresa que trabalha: ";
                     cin>>colocar.empresa;
                     cout<<"\nDigite seu Cargo: ";
                     cin>>colocar.cargo;
                     cout<<"\n=======================================";
                     s.Inserir(&colocar, x);
                     system("cls");
                     break;
                case 2:
                     cout<<"\nInsira o nome do Convidado a ser Pesquisado: ";
                     cin>>pesquisar;
                     system("cls");
                     s.ImprimeNome(pesquisar);
                     break;
                case 3:
                     cout<<"\nInsira a posicao do Convidado a ser Pesquisado: ";
                     cin>>l;
                     cout<<"===============================================";
                     s.ImprimePosicao(l);
                     break;
                case 4:
                     s.ListaConvidados();
                     system("cls");
                     break;
                case 5:
                     cout<<"\nInsira o nome do Convidado a ser removido: ";
                     cin>>remover;
                     s.RemoveNome(remover);
                     system("cls");
                     break;
                case 6:
                     cout<<"Insira a posicao do Convidado a ser removido: ";
                     cin>>t;
                     s.RemovePosicao(t);
                     system("cls");
                     break;
                case 7:
                     cout<<"TAMANHO DA LISTA DE CONVIDADOS: "<<s.Tamanho()<<"\n";
                     system("cls");
                     break;
                }
         }while(op >= 1 && op <= 7);
    system("pause");
    return 0;
}

