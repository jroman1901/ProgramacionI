#include <iostream>
using namespace std;
struct alumno{
    int id;
    string nombre;
    string direccion;
};


int main()
{
    //Declarar un arreglo de estudiantes y asignarles valores
    alumno estudiantes[3];
    // registrar los alumnos
    for (int  i = 0; i < 3; i++)
    {
       cout<<"Ingrese el id"<<endl;
       cin>>estudiantes[i].id;
       cout<<"Ingrese el nombre"<<endl;
       cin>>estudiantes[i].nombre;
       cout<<"Ingrese la direccion"<<endl;
       cin>>estudiantes[i].direccion;
    }
    cout<<"nombre ingresados con exito"<<endl;
    //recorrer la estrcutrua de nombres
     for (int  i = 0; i < 3; i++)
    {               
        cout << "ID: " << estudiantes[i].id <<endl;
        cout << "NOMBRE: " << estudiantes[i].nombre <<endl;
        cout << "DIRECCION: " << estudiantes[i].direccion <<endl;
    }

return 0;

}