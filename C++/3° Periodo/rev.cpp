#include<iostream>
using namespace std;

void mais(int x, int y){
     int soma;
     soma= x+y;
     cout<<"\nA soma dos numeros he >> "<<soma;
}

void menos(int x, int y){
     int sub;
     sub= x-y;
     cout<<"\nA subtracao dos numeros he >> "<<sub;
}

void vezes(int x, int y){
     int mult;
     mult= x*y;
     cout<<"\nA multiplicacao dos numeros he >> "<<mult;
}

void dividir(float x, float y){
     float div;
     div= x/y;
     cout<<"\nA divisao dos numeros he >> "<<div;
}
int main(){
     int a, b;
     
     cout<<"Digite um numero: ";
     cin>>a;
     cout<<"\nDigite outro numero: ";
     cin>>b;
     if(b != 0){
          
          cout<<"\nVoid";
          mais(a,b);
          menos(a,b);
          vezes(a,b);
          dividir(a,b);
          cout<<"\n";
          system("pause");
          system("cls");
     }else{
           
           cout<<"\nVoid";
           mais(a,b);
           menos(a,b);
           vezes(a,b);
           cout<<"\n";
           system("pause");
           system("cls");
     }
     cout<<"FIM.............";
     cout<<"\n\n";
     system("pause");
     return(0);
}
