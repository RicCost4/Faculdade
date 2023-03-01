// Programa C ++ para implementação de Heap Sort
#include <iostream>
#include<conio.h>
using namespace std;

// Para heapificar uma subárvore enraizada com o nó i que é
// um índice em arr []. n é o tamanho da pilha
void heapify(int *arr, int n, int i)
{
    int largest = i; // Inicializar o maior como raiz
    int l = 2 * i + 1; // esquerda = 2*i + 1
    int r = 2 * i + 2; // direita = 2*i + 2

	// Se o filho esquerdo for maior que a raiz
	if (l < n && arr[l] > arr[largest])
        largest = l;
	 //Se a criança direita é maior do que a maior até 	agora
    if (r < n && arr[r] > arr[largest])
        largest = r;

    //Se o maior não for raiz
    if (largest != i) {
        swap(arr[i], arr[largest]);

        //Montar recursivamente a subárvore afetada
        heapify(arr, n, largest);
    }
}
// função principal para fazer heap sort
void heapSort(int *arr, int n)
{
    // Montar heap (reorganizar matriz)
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }

    // Um por um extraia um elemento da pilha(heap)
    for (int i = n - 1; i >= 0; i--) {
        // Mova a raiz atual para o fim
        swap(arr[0], arr[i]);

        //chamar max heapify no heap reduzido
        heapify(arr, i, 0);
    }
}

/*Uma função utilitária para imprimir um array de tamanho n */
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Programa de driver
int main()
{
    int arr[] = { 24, 7, 19, 80, 8, 4, 92, 21, 1, 49};
    
    cout << "A matriz antes da ordenacao he \n";
    for (int i = 0; i < 6; ++i)
        cout << arr[i] << " ";
    
    int n = sizeof(arr) / sizeof(arr[0]);  // forma de descobrir tamanho do array
    heapSort(arr, n);
    
    cout << "\nA matriz ordenada he \n";
    printArray(arr, n);
    
    cout<<"\n\nFim do Programa :)";
    getch();
    return(0);
}
