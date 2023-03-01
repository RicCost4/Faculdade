#include<iostream>
using namespace std;
int main(){
     
     int num, par;
     
     cout<<"Digite um numero \n";
     cin>>num;
     par=num%2;
     
     if (par == 0 ){
             cout<<"\nO numero selecionado (( "<<num<<" )) eh PAR";
     } else{
            cout<<"\nO numero selecionado  (( "<<num<<" )) eh IMPAR";
     }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
