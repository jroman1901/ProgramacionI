#include "cabecera.cpp"
#include "burbuja.cpp"

int main()
{
    int arr[] = {54, 37, 81, 12, 95, 6, 23,68,47,76,29,42};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array original: \n";
    imprimir(arr, n);
    burbuja(arr, n);
    cout << "Array ordenado en forma ascendente: \n";
    imprimir(arr, n);
    return 0;

}
