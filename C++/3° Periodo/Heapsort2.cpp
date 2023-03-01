// Programa C ++ para implementação de Heap Sort
#include <iostream>
#include<conio.h>
using namespace std;

void heapsort(int a[], int n) {
   int i = n / 2, pai, filho, t;
   while(true) {
      if (i > 0) {
          i--;
          t = a[i];
      } else {
          n--;
          if (n <= 0) return;
          t = a[n];
          a[n] = a[0];
      }
      pai = i;
      filho = i * 2 + 1;
      while (filho < n) {
          if ((filho + 1 < n)  &&  (a[filho + 1] > a[filho]))
              filho++;
          if (a[filho] > t) {
             a[pai] = a[filho];
             pai = filho;
             filho = pai * 2 + 1;
          } else {
             break;
          }
      }
      a[pai] = t;
   }
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Programa de driver
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]); // forma de descobrir tamanho do array
    
    cout << "A matriz antes da ordenacao he \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    
    heapsort(arr, n);
    
    cout << "\nA matriz ordenada he \n";
    printArray(arr, n);
    
    cout<<"\n\nFim do Programa :)";
    getch();
    return(0);
}
