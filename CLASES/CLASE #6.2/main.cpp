#include "cabecera.cpp"
#include "factura.cpp"

int main()
{
    Factura factura("JOSE VINICIO ","2024-03-15",3,200);
    factura.agregarArticulo("Laptop", 2, 800);
    factura.agregarArticulo("Mouse", 1, 20);
    factura.agregarArticulo("Teclado", 1, 50);
    factura.mostrarFactura();
    return 0;

}

// mejoras que pueda ingresar la factura por medio del a consola
// y que pueda guardar la factura en formato archivo.

