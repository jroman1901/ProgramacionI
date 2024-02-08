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
    vehiculo auto;
    int operacion =0;
    
    while(operacion!=3)
    {
        system("clear"); //mac
        menu();
        cin>>operacion;
        switch (operacion)
        {
            case 1:
               Ingresar(auto);
               break;
            case 2:
               Imprimir(auto);
               break;
            case 3:
             cout<<"Gracias por utilizar el programa."<<endl;
             break;
            default:
                break;
       
        }


    }

    return 0;
}

void menu()
{
    cout<<"MENU PRINCIPAL DEL SISTEMA"<<endl;
    cout<<"1. Ingreso de datos del vehiculo"<<endl;
    cout<<"2. Consulta de vehiculos"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Ingrese una opcion: ";
}

void Ingresar(vehiculo &vehiculo)
{
   cout<<"Menu ingreso de vehiculos"<<endl;
   cout<<"Ingrese la marca"<<endl;
   cin>>vehiculo.marca;
   cout<<"Ingrese el color"<<endl;
   cin>>vehiculo.color;
   cout<<"Ingrese el modelo"<<endl;
   cin>>vehiculo.modelo;
}

void Imprimir(vehiculo vehiculo)
{
    system("clear"); 
    cout<<"Marca: "<<vehiculo.marca<<endl;
    cout<<"Color: "<<vehiculo.color<<endl;
    cout<<"Modelo: "<<vehiculo.modelo<<endl;
    getchar();
    getchar();
    
}


