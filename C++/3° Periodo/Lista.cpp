#include<iostream>
#include<conio.h>
using namespace std;

const int MAXTAM = 10;
class TipoLista {
      private:
              string Item[MAXTAM];
              int Primeiro, Ultimo, Quantos;
      public:
             TipoLista(void);
             int Vazia(void);
             int Tamanho(void);
             void Inserir(string Elemento); //no fim
             void InsPos(string Elemento, int Posicao);
             void Retirar(string Elemento); //do inicio
             void RetPos(int Posicao);
}; //fim da classe TipoLista

TipoLista :: TipoLista(void){ //construtor padr�o
          Primeiro = Ultimo = Quantos = 0;
}
//********************************************
int TipoLista :: Vazia(void){
    return(Primeiro == Ultimo);
}
//********************************************
int TipoLista :: Tamanho(void){
    return(Quantos);
}
//********************************************
void TipoLista :: Inserir(string Elemento){
     if(Ultimo >= MAXTAM){
               cout<<"Lista Cheia.\n";
     }else{
           Item[Ultimo++] = Elemento;
           Quantos++;
     }
     return;
}
//********************************************
void TipoLista :: InsPos(string Elemento, int Posicao){
     if(Ultimo >= MAXTAM){
               cout<<"Lista Cheia.\n";
     }else{
     // A parti da posi��o informada, jogo todos os elementos um posi��o para
     // tras e depois coloco o elemento informado na posi��o solicitada.
           for(int i = Ultimo; i >= Posicao; i--){
                   Item[i+1] = Item[i];
           }
     }
     Item[Posicao] = Elemento;
     Ultimo++;
     Quantos++;
     return;
}
//********************************************
void TipoLista :: Retirar(string Elemento){
     if(Vazia()){
                 cout<<"Lista Vazia.\n";
     }else{
           Elemento = Item[Primeiro];
           Ultimo--;
           Quantos--;
           for(int i = Primeiro; i < Ultimo; i++){
                   Item[i] = Item[i+1];
           }
     }
}
//********************************************
void TipoLista :: RetPos(int Posicao){
     // A parti da posi��o informada, jogo todos os elementos um posi��o para
     // frente.
     if(Vazia()){
                 cout<<"Lista Vazia.\n";
     }else{
           Ultimo--;
           Quantos--;
           for(int i = Posicao; i < Ultimo; i++){
                   Item[i] = Item[i+1];
           }
     }
}
//********************************************
int main(){
     
     int n, i;
     TipoLista lista;
     
     //Verificandose a lista esta vazia
     if(lista.Vazia()){
                       cout<<"A lista esta vazia.";
     }else{
           cout<<"A lista nao esta vazia.";
     }
     
     //Adicionando elementos na lista
     cout<<"Adicionando elementos na Lista";
     lista.Inserir("Luis");
     lista.Inserir("Teste");
     
     //Verificando se a lista esta vazia
     if(lista.Vazia()){
                       cout<<"A lista esta vazia.";
     }else{
           cout<<"A lista nao esta vazia.";
     }
     
     //Adicionando elemento na segunda posi��o da Lista
     cout<<"Adicionando elemento na segunda posicao";
     lista.InsPos("2Linha", 2);
     
     //Verificando se a lista esta vazia
     if(lista.Vazia()){
                       cout<<"A lista esta vazia.";
     }else{
           cout<<"A lista nao esta vazia.";
     }
     
     //Removendo os elementos da lista
     cout<<"Removendo elementos da Lista";
     lista.Retirar("2Linha");
     
     //Verificando se a lista esta vazia
     if(lista.Vazia()){
                       cout<<"A lista esta vazia.";
     }else{
           cout<<"A lista nao esta vazia.";
     }
     
     //Removendo os Elementos da Lista
     cout<<"Removendo elementos da Lista";
     lista.RetPos(1);
     lista.RetPos(3);
     
     //Verificando se a lista esta vazia
     if(lista.Vazia()){
                       cout<<"A lista esta vazia.";
     }else{
           cout<<"A lista nao esta vazia.";
     }
     
     cout<<"\n\nFim do Programa :)";
     getch();
     return(0);
}

