#include "cabecera.cpp"
#include "persona.cpp"
#include "colores.cpp"
#include "archivo.cpp"

int main()
{
    persona p[5];
    int codigo;
    string dato;
    cout << "MENU DE REGISTRO DE PERSONAS" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el codigo" << endl;
        cin >> codigo;
        p[i].setCodigo(codigo);

        cout << "Ingrese el nombre" << endl;
        cin >> dato;
        p[i].setNombre(dato);

        cout << "Ingrese el direccion" << endl;
        cin >> dato;
        p[i].setDireccion(dato);

        cout << "Ingrese el telefono" << endl;
        cin >> dato;
        p[i].setTelefono(dato);

        cout << "================" << endl;
    }
    archivo file;
    file.guardarArchivo(p);

    return 0;
}
