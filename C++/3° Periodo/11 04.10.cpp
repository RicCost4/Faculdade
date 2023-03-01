#include<iostream>
#include<conio.h>
using namespace std;
int main(){
     
     int x, y=100, *apnt=&y;
     
     cout<<"Digite um numero: ";
     cin>>x;
     
     cout<<"Clique para continuar...";
     getch();
     system ("cls");
     
     cout<<"\tValores....";
     cout<<"\nValor de X = "<<x<<", valor de Y = "<<y;
     cout<<"\nEnderesso de memoria de X = "<<&x;
     cout<<"\nEnderesso de memoria de y = "<<&y;
     cout<<"\n\n\tApontadores....";
     cout<<"\nValor do ponteiro de Y = "<<apnt;
     cout<<"\nEnderesso de memoria do ponteiro de y = "<<&apnt;
     cout<<"\nConteudo da celula do ponteiro de Y = "<<*apnt;
     
     cout<<"\n\nFim do Programa :)";
     getch();
     return(0);
}
