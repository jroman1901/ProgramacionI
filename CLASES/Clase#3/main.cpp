#include "cabecera.cpp"
#include "vehiculo.cpp"
int main()
{
    vehiculo mivehiculo("toyoya", "rojo", 2024);
    cout << "Marca: " << mivehiculo.getMarca() << endl;
    cout << "Color:" << mivehiculo.getColor() << endl;
    cout << "Modelo:" << mivehiculo.getModelo() << endl;

    return 0;
}
