#include "cabecera.cpp"
#include "vehiculo.cpp"
#include "automovil.cpp"
int main()
{
 
    automovil miAuto("Toyota", "Rojo", 2022, 4);
    cout << "Marca: " << miAuto.getmarca() << endl;
    cout << "Color: " << miAuto.getColor() << endl;
    cout << "Modelo: " << miAuto.getModelo() << endl;
    cout << "Número de puertas: " << miAuto.getNumeroPuertas() << endl;
    return 0;
}
