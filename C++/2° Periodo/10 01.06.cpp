#include<iostream>
using namespace std;
int main(){
     
     string nome, sexo, sex, ano, tur, opc;
     int cont= 0, idade, turno, serie, man= 0, tar= 0, noi= 0, pri= 0, seg= 0, ter= 0, mul= 0, Tfem= 0, Tmas= 0;
     
     do{
         cont= cont+1;
         cout<<"Cadastro Estacio";
         cout<<"\nDigite seu Nome: ";
         cin>>nome;
         cout<<"Qual o seu Sexo:\n\tM - Masculino.\n\tF - Feminino.  ";
         cin>>sexo;
         if(sexo == "F" || sexo == "f"){
              Tfem= Tfem+1;
              sex= "Feminino";
         } else if(sexo == "M" || sexo == "m"){
              Tmas= Tmas+1;
              sex= "Masculino";
         } else {
                cout<<"\nOpcao INVALIDO, Digite Novamente seu Sexo:\n\tM - Masculino.\n\tF - Feminino.  ";
                cin>>sexo;
         }
         cout<<"Sua Idade: ";
         cin>>idade;
         cout<<"Seu Turno:\n\t1-Manha.\n\t2-Tarde.\n\t3-Noite  ";
         cin>>turno;
         if(turno == 1){
              man= man+1;
              tur= "da Manha";
         }else if(turno == 2){
               tar= tar+1;
               tur= "da Tarde";
         }else if(turno == 3){
               noi= noi+1;
               tur= "da Noite";
         }else {
               cout<<"\nOpcao INVALIDO, Digite Novamente seu Turno:\n\t1-Manha.\n\t2-Tarde.\n\t3-Noite  ";
               cin>>turno;
         }
         cout<<"Sua Serie:\n\t1- Primeiro Ano.\n\t2- Segundo Ano.\n\t3- Terceiro Ano.  ";
         cin>>serie;
         if(serie == 1){
              pri= pri+1;
              ano= "do Primeiro Ano";
         }else if(serie == 2){
               seg= seg+1;
               ano= "do Segundo Ano";
               if(sexo == "F" || sexo == "f"){
                       mul= mul+1;
               }
         }else if(serie == 3){
               ter= ter+1;
               ano= "do Terceiro Ano";
         }else {
               cout<<"\nOpcao INVALIDO, Digite Novamente sua Serie:\n\t1- Primeiro Ano.\n\t2- Segundo Ano.\n\t3- Terceiro Ano.  ";
               cin>>serie;
         }
         cout<<"\nCadastro "<<cont<<" - "<<nome<<", Idade= "<<idade<<", do Sexo "<<sex<<", "<<ano<<", do Turno "<<tur;
         
         cout<<"\nDeseja cadastrar mais usuario?\n\tS- SIM.\n\tN- NAO. ";
         cin>>opc;
         system ("cls");
     }while(opc != "n" && opc != "N");
     
     cout<<"\nAlunos matriculados no Turno da Noite: "<<noi;
     cout<<"\nAlunos matriculados na Terceira Serie: "<<ter;
     cout<<"\n"<<mul<<" Mulheres matriculados na Segunda Serie.";
     cout<<"\nAlunos Matriculados.\n["<<Tmas<<"] Homens.\n["<<Tfem<<"] Mulheres.";
     cout<<"\n\n";
     system("pause");
     return(0);
}

