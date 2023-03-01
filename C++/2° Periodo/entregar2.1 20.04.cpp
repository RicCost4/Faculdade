#include<iostream>
using namespace std;
int main(){
     
     // identificando o tipo da variavel.
     float mat, por, dir, med, medp;
     // mostrando o contexto do programa.
     cout<<"Exercicio 25, pg.71 da apostila Logica de programação.";
     cout<<"\n\n";
     // mostra o titulo do programa.
     cout<<"\t\tResultado do Concurso Publico";
     // comando de entrada dos dados associado com suas variaveis.
     cout<<"\n\nDigite sua nota em Matematica: ";
     cin>>mat;
     cout<<"\n\nDigite sua nota da Lingua portuguesa: ";
     cin>>por;
     cout<<"\n\nDigite sua nota em Direito: ";
     cin>>dir;
     // parte do processo dos dados do programa.
     med= (mat+por+dir) / 3;
     medp= (mat*4+por*2+dir*3) /(4+2+3);
     
     // mostrando a saida dos resultados com base nos processos feito 
     // com a entradados dados.
     cout<<"\nSua Media eh: "<< med;
     cout<<"\nSua Media Ponderada eh: "<< medp;
     cout<<"\n\n";
     system("pause");
     return(0);
}
