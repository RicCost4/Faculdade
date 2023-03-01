#include<iostream>
using namespace std;

float CxF(float x){//Celsius para Fahrenheit
      float y;
      y= x*1.8+32;
      return y;
}

float CxK(float x){//Celsius para Kelvin
      float y;
      y= x+273;
      return y;
}

float FxK(float x){//Fahrenheit para Kelvin
      float y;
      y= (x-32)*0.55+273;
      return y;
}

float FxC(float x){//Fahrenheit para Celsius
      float y;
      y= (x-32)*0.55;
      return y;
}

float KxC(float x){//Kelvin para Celsius
      float y;
      y= x-273;
      return y;
}

float KxF(float x){//Kelvin para Fahrenheit
      float y;
      y= 1.8*(x-273)+32;
      return y;
}
int main(){
     
     int tem, opcao, Cfahr, Ckelv, Fkelv, Fcels, Kcels, Kfahr;
     float cels, fahr, kelv; 
     
     do{
           cout<<"Qual Temperatura deseja converte: \n\t[0] = Celsius.\n\t[1] = Fahrenheit.\n\t[2] = Kelvin.\nOpcao: ";
           cin>>tem;
           system ("cls");
           if(tem == 0){
                  cout<<"Digite a temperatura em Celsius: ";
                  cin>>cels;
                  Cfahr= CxF(cels);
                  Ckelv= CxK(cels);
                  cout<<"\n\n"<<cels<<"C equivale em Fahrenheit "<<Cfahr<<"F";
                  cout<<"\n\n"<<cels<<"C equivale em Kelvin "<<Ckelv<<"K";
           }else if(tem == 1){
                 cout<<"Digite a temperatura em Fahrenheit: ";
                 cin>>fahr;
                 Fkelv= FxK(fahr);
                 Fcels= FxC(fahr);
                 cout<<"\n\n"<<fahr<<"F equivale em Celsius "<<Fcels<<"C";
                 cout<<"\n\n"<<fahr<<"F equivale em Kelvin "<<Fkelv<<"K";
           }else if(tem == 2){
                 cout<<"Digite a temperatura em Kelvin: ";
                 cin>>kelv;
                 Kfahr= KxF(kelv);
                 Kcels= KxC(kelv);
                 cout<<"\n\n"<<kelv<<"K equivale em Fahrenheit "<<Kfahr<<"F";
                 cout<<"\n\n"<<kelv<<"K equivale em Celsius "<<Kcels<<"C";
           }else{
                 cout<<"Opcao INVALIDA, escolha entre 0, 1 ou 2...\nConverta novamente";
           }
           cout<<"\nDeseja converte novamente: \n\t[0] - SIM\n\t[1] - NAO\n\nOpcao: ";
           cin>>opcao;
           system ("cls");
     }while(opcao == 0);
     cout<<"FIM DO PROGRAMA......";
     cout<<"\n\n";
     system("pause");
     return(0);
}
