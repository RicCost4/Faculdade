#include<iostream>
using namespace std;

void imprime(){
     cout<<"Bloco Imprime\n";
     for(int i=0; i<10; i++){
             cout<<"teste "<<i<<"\n";        
     }
     system("pause");
     system ("cls");
}

int soma(int x, int y){ //se declarar nenhum valor, tem que declarar na função.
    //int a =2, b=3;
    //return(2+3); >> pode fazer de duas formas o valor da return ^^
    return(x+y);
}

int main(){
     int a =2, b=3;
     
     cout<<"Teste Antes\n";
     system("pause");
     system ("cls");
     imprime();
     int x=soma(a,b);
     cout<<"Teste Depois\n\n";
     cout<<"Teste soma >> "<<x;
     cout<<"\n\n";
     system("pause");
     return(0);
}
