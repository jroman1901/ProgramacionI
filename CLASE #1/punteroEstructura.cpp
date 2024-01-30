#include <iostream>
using namespace std;

struct Alumno {
    int id;
    string nombre;
    string direccion;
};

int main() {
    const int numEstudiantes = 3;

    // Declarar un arreglo dinámico de estudiantes
    Alumno* estudiantes = new Alumno[numEstudiantes];

    // Registrar los alumnos
    for (int i = 0; i < numEstudiantes; i++) {
        cout << "Ingrese el ID: ";
        cin >> estudiantes[i].id;
        cout << "Ingrese el nombre: ";
        cin >> estudiantes[i].nombre;
        cout << "Ingrese la dirección: ";
        cin >> estudiantes[i].direccion;
    }

    cout << "Alumnos ingresados con éxito" << endl;

    // Recorrer la estructura de nombres utilizando punteros
    for (int i = 0; i < numEstudiantes; i++) {
        Alumno* estudianteActual = &estudiantes[i];
        cout << "ID: " << estudianteActual->id << endl;
        cout << "NOMBRE: " << estudianteActual->nombre << endl;
        cout << "DIRECCION: " << estudianteActual->direccion << endl;
    }

    // Liberar la memoria asignada dinámicamente
    delete[] estudiantes;

    return 0;
}
