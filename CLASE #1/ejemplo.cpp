#include <iostream>
using namespace std;
struct vehiculo
{
    string marca;
    string color;
    int modelo;
};

void menu();
void Ingresar(vehiculo &vehiculo);
void Imprimir(vehiculo vehiculo);

int main()
{
    vehiculo vehiculo;
    int operacion=0;

    while (operacion != 3)
    {
        system("clear");     
        menu();
        cin >> operacion;
        switch (operacion)
        {
        case 1:
            
            Ingresar(vehiculo);
            break;
        case 2:
            
            Imprimir(vehiculo);
            break;
        case 3:
         cout<<"Gracias por utilizar el sistema."<<endl;
            break;
        default:
       
            break;
        }
    }
    return 0;
}

void menu()
{
    cout << "MENU PRINCIPAL DEL SISTEMA" << endl;
    cout << "1-Ingresar Datos de Vehiculos." << endl;
    cout << "2-Consultar datos de vehiculos." << endl;
    cout << "3-Salir del Sistema" << endl;
    cout <<"Ingrese una opción"<< endl;
}

void Ingresar(vehiculo &vehiculo)
{
    cout << "INGRESO DE DATOS DE VEHICULOS" << endl;
    cout << "Ingrese la marca" << endl;
    cin >> vehiculo.marca;
    cout << "Ingrese el color" << endl;
    cin >> vehiculo.color;
    cout << "Ingrese el modelo" << endl;
    cin >> vehiculo.modelo;
}
void Imprimir(vehiculo vehiculo)
{   
    system("clear");
    cout << "Marca " << vehiculo.marca << endl;
    cout << "Color " << vehiculo.color << endl;
    cout << "Modelo " << vehiculo.modelo << endl;
    getchar();
    getchar();
       
}

