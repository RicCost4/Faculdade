#include<iostream>
#include<conio.h>
using namespace std;
int main(){
     
     int x=33, *ptr=&x;
     
     cout<<x<<"\t"<<&x<<"\t"<<ptr<<"\t"<<&ptr<<"\t"<<*ptr;
     
     cout<<"\n\nFim do Programa :)";
     getch();
     return(0);
}
