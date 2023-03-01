#include<iostream>
using namespace std;
int main(){
     
     float mat, por, dir, med, medp;
     cout<<"Exercicio 23, pg.70 da apostila Logica de programação.";
     cout<<"\n\n";
     cout<<"\t\tResultado do Concurso Publico";
     cout<<"\n\nDigite sua nota em Matematica: ";
     cin>>mat;
     cout<<"\n\nDigite sua nota da Lingua portuguesa: ";
     cin>>por;
     cout<<"\n\nDigite sua nota em Direito: ";
     cin>>dir;
     
     med= (mat+por+dir) / 3;
     medp= (mat*4+por*2+dir*3) /(4+2+3);
     
     
     cout<<"\nSua Media eh: "<< med;
     cout<<"\nSua Media Ponderada eh: "<< medp;
     cout<<"\n\n";
     system("pause");
     return(0);
}
