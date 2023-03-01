#include<iostream>
using namespace std;
int main(){
     
     bool x;
     int y;
     
     y= 0;
     x=false;
     
     while (y < 6) {
           x= !x;
           y= y+1;
           if (x) {
                  cout<<y;
           }
           else {
                cout<<-y;
           }
     }
     
     cout<<"\n\n";
     system("pause");
     return(0);
}
