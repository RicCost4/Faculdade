#include<iostream>
using namespace std;

void teste(){
     int x= -3; 
     cout<<x<<"\n";
}
int main(){
     
     int x = 5;
     
     cout<<x<<"\n";
     
     {
          int x = 10;
          cout<<x<<"\n";              
     }
     
     teste();
          
     cout<<"\n\n";
     system("pause");
     return(0);
}
