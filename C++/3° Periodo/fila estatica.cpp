#include<iostream>
#include<conio.h>
using namespace std;

const int MAXTAM = 10;

int Item [MAXTAM];
int Frente, Tras, Quantos;

void TipoFila (){//construtor padrão
         Frente = Tras = Quantos = 0;
}
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
void TipoFila_Enfileirar(int &Elemento){
     if (TipoFila_Cheia()){
        cout<<"Fila Cheia\n";
        getch();
     }else{
           Item[Tras] = Elemento;
           cout<<"Elemento "<<Item[Tras]<<" na FILA!!!!\n";
           getch();
           Quantos++;
           Tras = (Tras + 1) % MAXTAM; //avançar ou reiniciar
     }
     return;
}

void TipoFila_Desenfileirar(int &Elemento){
     if (TipoFila_Vazia()){
        cout<<"Fila Vazia\n";
        getch();
     }else{
           Elemento = Item[Frente];
           cout<<Item[Frente]<<" Retirado da Fila\n";
           Quantos--;
           Frente = (Frente + 1) % MAXTAM; //avançar ou reiniciar
           getch();
     }
     return;
}

int main(){
     
     int n, i, x, op;
     
     do{
        system("cls");
        cout<<"\t=====FILA ESTATICA=====\n\nDigite uma opcao:\n\t1 -- Enfileirar\n\t2 -- Desenfileirar: ";
        cin>>op;
        
        if(op == 1){
              cout<<"Digite um item ha ser inserido na fila: ";
              cin>>x;
              cout<<"\n=======================================";
              TipoFila_Enfileirar(x);
        }
        if(op == 2){
              TipoFila_Desenfileirar(i);
        }
     }while (op == 1 || op == 2);
     
     system("pause");
     return(0);
}
