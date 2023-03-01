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
//separação---------------------------
float soma(float x, float y){
    return(x+y);
}
float sub(float x, float y){
    return(x-y);
}
float mult(float x, float y){
    return(x*y);
}
float div(float x, float y){
    return(x/y);
}
int main(){
     float a, b, x, y, z, w;
     
     cout<<"Digite um numero: ";
     cin>>a;
     cout<<"Digite outro numero: ";
     cin>>b;
     if(b != 0){
          x=soma(a,b);
          y=sub(a,b);
          z=mult(a,b);
          w=div(a,b);
          cout<<"Funsao";
          cout<<"\nSoma >> "<<x<<"\nSubtrasao >> "<<y<<"\nMultiplicasao >> "<<z<<"\nDivisao >> "<<w;
          //separação---------------------
          cout<<"\n\n\tVoid";
          mais(a,b);
          menos(a,b);
          vezes(a,b);
          dividir(a,b);
          cout<<"\n";
          system("pause");
          cout<<"\n\n";
     }else{
           x=soma(a,b);
           y=sub(a,b);
           z=mult(a,b);
           cout<<"Funsao";
           cout<<"\nSoma >> "<<x<<"\nSubtrasao >> "<<y<<"\nMultiplicasao >> "<<z;
           //separação--------------------
           cout<<"\n\n\tVoid";
           mais(a,b);
           menos(a,b);
           vezes(a,b);
           cout<<"\n";
           system("pause");
           cout<<"\n\n";          
     }
     return(0);
}
