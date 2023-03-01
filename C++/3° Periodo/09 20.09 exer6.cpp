#include<iostream>
using namespace std;

int soma(int x, int y){
      int soma;
      soma= x+y;
      return soma;
}

int subt(int x, int y){
      int subt;
      subt= x-y;
      return subt;
}
int mult(int x, int y){
      int mult;
      mult= x*y;
      return mult;
}
float div(float x, float y){
      float div;
      div= x/y;
      return div;
}
int media (int x, int y, int z){
      int media; 
      media= (x+y+z)/3;
      return media;
}
int main(){
     
     int opcao, cal, mais, adic, subtr, menos, multi, multiplicar, divi, Tmedia;
     float N1, N2, N3, dividir;
     do{
           cout<<"Vamos calcular\nDigite 3 numeros e selecione as opcoes:\n";
           cin>>N1>>N2>>N3;
           system ("cls");
           if(N1==0 || N2== 0 || N3==0){
                    cout<<"\nAgora, voce quer:\n\t[0] - Somar.\n\t[1] - Subtrair\n\t[2] - Multiplicar\nopcao: ";
                    cin>>cal;
                    if(cal == 0){
                           cout<<"\nOs numeros selecionados.\n\tX - "<<N1<<"\n\tY - "<<N2<<"\n\tZ - "<<N3;
                           cout<<"\nVoce escolheu soma, quais numeros quer somar:\n\tOpc: 1 - X+Y\n\tOpc: 2 - X+Z\n\tOpc: 3 - Y+Z\nOpcao: ";
                           cin>>mais;
                           switch (mais){
                                  case 1:
                                       adic=soma(N1, N2);
                                       cout<<"\nNumero selecionados: "<<N1<<" e "<<N2;
                                       cout<<"\nA soma dos numeros selecionado sao "<<adic;
                                       Tmedia= media(N1, N2, N3);
                                       cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                       break;
                                  case 2:
                                       adic=soma(N1, N3);
                                       cout<<"\nNumero selecionados: "<<N1<<" e "<<N3;
                                       cout<<"\nA soma dos numeros selecionado sao "<<adic;
                                       Tmedia= media(N1, N2, N3);
                                       cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                       break;
                                  default:
                                          adic=soma(N2, N3);
                                          cout<<"\nNumero selecionados: "<<N2<<" e "<<N3;
                                          cout<<"\nA soma dos numeros selecionado sao "<<adic;
                                          Tmedia= media(N1, N2, N3);
                                          cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                           }
                    }else if(cal == 1){
                          cout<<"\nOs numeros selecionados.\n\tX - "<<N1<<"\n\tY - "<<N2<<"\n\tZ - "<<N3;
                          cout<<"\nVoce escolheu subtrair, quais numeros quer subtrair:\n\tOpc: 1 - X-Y\n\tOpc: 2 - X-Z\n\tOpc: 3 - Y-Z";
                          cout<<"\n\tOpc: 4 - Y-X\n\tOpc: 5 - Z-X\n\tOpc: 6 - Z-Y\nOpcao: ";
                          cin>>subtr;
                          switch (subtr){
                                 case 1:
                                      menos=subt(N1, N2);
                                      cout<<"\nNumero selecionados: "<<N1<<" e "<<N2;
                                      cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                      Tmedia= media(N1, N2, N3);
                                      cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                      break;
                                 case 2:
                                      menos=subt(N1, N3);
                                      cout<<"\nNumero selecionados: "<<N1<<" e "<<N3;
                                      cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                      Tmedia= media(N1, N2, N3);
                                      cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                      break;
                                 case 3:
                                      menos=subt(N2, N3);
                                      cout<<"\nNumero selecionados: "<<N2<<" e "<<N3;
                                      cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                      Tmedia= media(N1, N2, N3);
                                      cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                      break;
                                 case 4:
                                      menos=subt(N2, N1);
                                      cout<<"\nNumero selecionados: "<<N2<<" e "<<N1;
                                      cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                      Tmedia= media(N1, N2, N3);
                                      cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                      break;
                                 case 5:
                                      menos=subt(N3, N1);
                                      cout<<"\nNumero selecionados: "<<N3<<" e "<<N1;
                                      cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                      Tmedia= media(N1, N2, N3);
                                      cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                      break;
                                 default:
                                         menos=subt(N3, N2);
                                         cout<<"\nNumero selecionados: "<<N3<<" e "<<N2;
                                         cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                         Tmedia= media(N1, N2, N3);
                                         cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                         break;
                                         
                          }
                    }else if(cal == 2){
                                cout<<"\nOs numeros selecionados.\n\tX - "<<N1<<"\n\tY - "<<N2<<"\n\tZ - "<<N3;
                                cout<<"\nVoce escolheu multiplicar, quais numeros quer multiplicar:\n\tOpc: 1 - X*Y\n\tOpc: 2 - X*Z\n\tOpc: 3 - Y*Z\nOpcao: ";
                                cin>>multi;
                                switch (multi){
                                       case 1:
                                            multiplicar=mult(N1, N2);
                                            cout<<"\nNumero selecionados: "<<N1<<" e "<<N2;
                                            cout<<"\nA multiplicacao dos numeros selecionado sao "<<multiplicar;
                                            Tmedia= media(N1, N2, N3);
                                            cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                            break;
                                       case 2:
                                            multiplicar=mult(N1, N3);
                                            cout<<"\nNumero selecionados: "<<N1<<" e "<<N3;
                                            cout<<"\nA multiplicacao dos numeros selecionado sao "<<multiplicar;
                                            Tmedia= media(N1, N2, N3);
                                            cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                            break;
                                       default:
                                               multiplicar=mult(N2, N3);
                                               cout<<"\nNumero selecionados: "<<N2<<" e "<<N3;
                                               cout<<"\nA multiplicacao dos numeros selecionado sao "<<multiplicar;
                                               Tmedia= media(N1, N2, N3);
                                               cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                }
                    }else{
                          cout<<"Opcao INVALIDA, reinicie a operação...";
                    }
           }else{
                 cout<<"\nAgora, voce quer:\n\t[0] - Somar.\n\t[1] - Subtrair\n\t[2] - Dividir\n\t[3] - Multiplicar\nopcao: ";
                 cin>>cal;
                 if(cal == 0){
                        cout<<"\nOs numeros selecionados.\n\tX - "<<N1<<"\n\tY - "<<N2<<"\n\tZ - "<<N3;
                        cout<<"\nVoce escolheu soma, quais numeros quer somar:\n\tOpc: 1 - X+Y\n\tOpc: 2 - X+Z\n\tOpc: 3 - Y+Z\nOpcao: ";
                        cin>>mais;
                        switch (mais){
                               case 1:
                                    adic=soma(N1, N2);
                                    cout<<"\nNumero selecionados: "<<N1<<" e "<<N2;
                                    cout<<"\nA soma dos numeros selecionado sao "<<adic;
                                    Tmedia= media(N1, N2, N3);
                                    cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                    break;
                               case 2:
                                    adic=soma(N1, N3);
                                    cout<<"\nNumero selecionados: "<<N1<<" e "<<N3;
                                    cout<<"\nA soma dos numeros selecionado sao "<<adic;
                                    Tmedia= media(N1, N2, N3);
                                    cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                    break;
                               default:
                                       adic=soma(N2, N3);
                                       cout<<"\nNumero selecionados: "<<N2<<" e "<<N3;
                                       cout<<"\nA soma dos numeros selecionado sao "<<adic;
                                       Tmedia= media(N1, N2, N3);
                                       cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                        }
                 }else if(cal == 1){
                       cout<<"\nOs numeros selecionados.\n\tX - "<<N1<<"\n\tY - "<<N2<<"\n\tZ - "<<N3;
                       cout<<"\nVoce escolheu subtrair, quais numeros quer subtrair:\n\tOpc: 1 - X-Y\n\tOpc: 2 - X-Z\n\tOpc: 3 - Y-Z";
                       cout<<"\n\tOpc: 4 - Y-X\n\tOpc: 5 - Z-X\n\tOpc: 6 - Z-Y\nOpcao: ";
                       cin>>subtr;
                       switch (subtr){
                              case 1:
                                   menos=subt(N1, N2);
                                   cout<<"\nNumero selecionados: "<<N1<<" e "<<N2;
                                   cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                   Tmedia= media(N1, N2, N3);
                                   cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                   break;
                              case 2:
                                   menos=subt(N1, N3);
                                   cout<<"\nNumero selecionados: "<<N1<<" e "<<N3;
                                   cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                   Tmedia= media(N1, N2, N3);
                                   cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                   break;
                              case 3:
                                   menos=subt(N2, N3);
                                   cout<<"\nNumero selecionados: "<<N2<<" e "<<N3;
                                   cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                   Tmedia= media(N1, N2, N3);
                                   cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                   break;
                              case 4:
                                   menos=subt(N2, N1);
                                   cout<<"\nNumero selecionados: "<<N2<<" e "<<N1;
                                   cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                   Tmedia= media(N1, N2, N3);
                                   cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                   break;
                              case 5:
                                   menos=subt(N3, N1);
                                   cout<<"\nNumero selecionados: "<<N3<<" e "<<N1;
                                   cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                   Tmedia= media(N1, N2, N3);
                                   cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                   break;
                              default:
                                      menos=subt(N3, N2);
                                      cout<<"\nNumero selecionados: "<<N3<<" e "<<N2;
                                      cout<<"\nA subtracao dos numeros selecionado sao "<<menos;
                                      Tmedia= media(N1, N2, N3);
                                      cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                      break;
                       }
                 }else if(cal == 2){
                       cout<<"\nOs numeros selecionados.\n\tX - "<<N1<<"\n\tY - "<<N2<<"\n\tZ - "<<N3;
                       cout<<"\nVoce escolheu divisao, quais numeros quer dividir:\n\tOpc: 1 - X/Y\n\tOpc: 2 - X/Z\n\tOpc: 3 - Y/Z";
                       cout<<"\n\tOpc: 4 - Y/X\n\tOpc: 5 - Z/X\n\tOpc: 6 - Z/Y\nOpcao: ";
                       cin>>divi;
                       switch (divi){
                              case 1:
                                   dividir=div(N1, N2);
                                   cout<<"\nNumero selecionados: "<<N1<<" e "<<N2;
                                   cout<<"\nA divisao dos numeros selecionado sao "<<dividir;
                                   Tmedia= media(N1, N2, N3);
                                   cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                   break;
                              case 2:
                                   dividir=div(N1, N3);
                                   cout<<"\nNumero selecionados: "<<N1<<" e "<<N3;
                                   cout<<"\nA divisao dos numeros selecionado sao "<<dividir;
                                   Tmedia= media(N1, N2, N3);
                                   cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                   break;
                              case 3:
                                   dividir=div(N2, N3);
                                   cout<<"\nNumero selecionados: "<<N2<<" e "<<N3;
                                   cout<<"\nA divisao dos numeros selecionado sao "<<dividir;
                                   Tmedia= media(N1, N2, N3);
                                   cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                   break;
                              case 4:
                                   dividir=div(N2, N1);
                                   cout<<"\nNumero selecionados: "<<N2<<" e "<<N1;
                                   cout<<"\nA divisao dos numeros selecionado sao "<<dividir;
                                   Tmedia= media(N1, N2, N3);
                                   cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                   break;
                              case 5:
                                   dividir=div(N3, N1);
                                   cout<<"\nNumero selecionados: "<<N3<<" e "<<N1;
                                   cout<<"\nA divisao dos numeros selecionado sao "<<dividir;
                                   Tmedia= media(N1, N2, N3);
                                   cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                   break;
                              default:
                                      dividir=div(N3, N2);
                                      cout<<"\nNumero selecionados: "<<N3<<" e "<<N2;
                                      cout<<"\nA divisao dos numeros selecionado sao "<<dividir;
                                      Tmedia= media(N1, N2, N3);
                                      cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                       }
                }else if(cal == 3){
                      cout<<"\nOs numeros selecionados.\n\tX - "<<N1<<"\n\tY - "<<N2<<"\n\tZ - "<<N3;
                      cout<<"\nVoce escolheu multiplicar, quais numeros quer multiplicar:\n\tOpc: 1 - X*Y\n\tOpc: 2 - X*Z\n\tOpc: 3 - Y*Z\nOpcao: ";
                      cin>>multi;
                      switch (multi){
                             case 1:
                                  multiplicar=mult(N1, N2);
                                  cout<<"\nNumero selecionados: "<<N1<<" e "<<N2;
                                  cout<<"\nA multiplicacao dos numeros selecionado sao "<<multiplicar;
                                  Tmedia= media(N1, N2, N3);
                                  cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                  break;
                             case 2:
                                  multiplicar=mult(N1, N3);
                                  cout<<"\nNumero selecionados: "<<N1<<" e "<<N3;
                                  cout<<"\nA multiplicacao dos numeros selecionado sao "<<multiplicar;
                                  Tmedia= media(N1, N2, N3);
                                  cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                                  break;
                             default:
                                     multiplicar=mult(N2, N3);
                                     cout<<"\nNumero selecionados: "<<N2<<" e "<<N3;
                                     cout<<"\nA multiplicacao dos numeros selecionado sao "<<multiplicar;
                                     Tmedia= media(N1, N2, N3);
                                     cout<<"\nja a media dos 3 numeros selecionado sao "<<Tmedia;
                      }
                }else{
                      cout<<"\nOpcao INVALIDA, reinicie a operação...";
                }
           }
          cout<<"\nDeseja calcular novamente: \n\t[0] - SIM\n\t[1] - NAO\n\nOpcao: ";
          cin>>opcao;
          system ("cls");
     }while(opcao == 0);
     cout<<"FIM DO PROGRAMA......";
     cout<<"\n\n";
     system("pause");
     return(0);
}
