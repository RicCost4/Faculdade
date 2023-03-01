#include <iostream>
using namespace std;
int main() {
    float valor1, valor2, valor3, soma, media;
    cout<<"Primeiro valor: ";
    cin>>valor1;
    cout<<"Segundo e terceiro valores: ";
    cin>>valor2>>valor3;
    soma = valor1 + valor2 + valor3;
    media = soma / 3;
    cout<<"Media= " << media << " Soma = " << soma;
    system("pause");
    return 0;
}
