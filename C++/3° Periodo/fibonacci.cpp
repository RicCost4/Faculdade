#include <iostream>
#include <conio.h>
using namespace std;

int fibonacci(int n){
    if(n == 1 || n == 2){
         return(1);
    }else{
          return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(void){
    
    int x;
    
    cout<<"\t=====Programa para calcula seguencia Fibonacci\n\n";
    cout<<"Digite a quantatidade de termos da seguencia de Fibonacci: ";
    cin>>x;
    if(x>0){
            cout<<"A seguencia de Fibonaccia eh: "<<x<<" e: "<<fibonacci(x);
    }else{
          cout<<"Numero INVALIDO!!!! "<<x;
    }
    
    getch();
    return(0);
    
}
