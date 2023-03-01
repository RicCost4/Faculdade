#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std; 

struct Aluno{
    int matricula;
    int nota;
    string nome;
};


int main () {
    
    int y;
    Aluno alunos[y];
    
    cout<<"Quantos alunos vão ser cadastrados: ";
    cin>>y;
    for (int x=0; x<y; x++){
        cout << "--------------ALUNO " << x+1 << "--------------\n\n";
        cout << " Insira o nome: ";
        cin >> alunos[x].nome;
        cout << " Matricula do aluno: ";
        cin>>alunos[x].matricula;
        cout << " Insira o nota: ";
        cin >> alunos[x].nota;
        cout << "\n--------------ALUNO " << x+1 << " CADASTRADO--------------\n\n";
        cout << " ALUNO: " << x+1  << "\n MATRICULA: " << alunos[x].matricula << "\n NOME: " << alunos[x].nome << "\n NOTA: " << alunos[x].nota << "\n\n";
        cout<<"\n\tClique para continuar o cadastro....";
        getch();
        system("cls");
    }
system("cls");
cout<<"Programa finalizado.\n\tClique para finalizar o cadastro....";
getch();
    return 0;
}
