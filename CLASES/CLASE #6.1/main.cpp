#include "cabecera.cpp"
#include "selectionSort.cpp"

int main()
{
    //ordenamiento de seleccion
   int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array original: \n";
     imprimir(arr, size);
    
    ordenamientoSeleccion(arr, size);
    
    cout << "Array ordenado en forma ascendente: \n";
    imprimir(arr, size);


}
