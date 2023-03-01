#include<iostream>
using namespace std;
int main(){
     
     int cont= 0, num= 0, imp;
     
     while (cont <= 10){
           imp = num%2;
           if (imp != 0){
                   cout<<"\nNum: "<<num;
           }
           num=num+1;
           cont++;
     }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
