#include<iostream>
#include<math.h>
using namespace std;
int pot(int x, int y){
      int pot;
      pot= pow(x,y);
      return pot;
}

void potencia(int x, int y) {
     int n=0;
     n= n+x;
     for(int cont=1; cont<y; cont++){
             n=n*x;
  }
  cout<<"\nJa em conhecimento adquirido he: ";
  cout<<x<<" e "<<y<<" he "<<n;
}

int main(){
     int N1, N2, pot1, opcao;
     do{
          cout<<"Vamos calcular potencia...";
          cout<<"\n\nDigite 2 numeros X para a base e Y para o multiplicador.\n\nX: ";
          cin>>N1;
          cout<<"\nY: ";
          cin>>N2;
     
          pot1= pot(N1, N2);
     
          cout<<"A função pre-determinada em biblioteca he "<<pot1;
          potencia(N1, N2);
          cout<<"\nDeseja converte novamente: \n\t[0] - SIM\n\t[1] - NAO\n\nOpcao: ";
          cin>>opcao;
          system ("cls");
     }while(opcao == 0);
     cout<<"FIM DO PROGRAMA......";
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
