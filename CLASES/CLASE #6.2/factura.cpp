struct  Articulo
{
    string nombre;
    int cantidad;
    double precio;
};

class Factura
{
    private:
        string cliente;
        string fecha;
        Articulo *articulos;
        int cantidadArticulos;
        double montototal;
    public:
    Factura(string cliente,string fecha, int cantidaArticulos,double montoTotal)
    {
        this->cliente = cliente;
        this->fecha = fecha;
        this->cantidadArticulos = cantidaArticulos;
        this->montototal= montoTotal;
        articulos = new Articulo[100];

    }
    ~Factura() {
        delete[] articulos;  // Liberar memoria asignada para los artículos
    }

    void agregarArticulo(string nombre, int cantidad, double precio)
    {
        articulos[cantidadArticulos].nombre = nombre;
        articulos[cantidadArticulos].cantidad = cantidad;
        articulos[cantidadArticulos].precio = precio;
        cantidadArticulos++;

    }

    void mostrarFactura()
    {
        cout<<"Cliente"<<cliente<<endl;
        cout<<"Fecha:"<<fecha<<endl;
        cout<<"---------------------"<<endl;
        cout<<"Articulos"<<endl;
        for(int i=0; i<cantidadArticulos;i++)
        {
            cout<<articulos[i].nombre<< " --" <<articulos[i].cantidad<< "unidades a Q"<<articulos[i].precio<<endl;

        }
        cout<<"--------------------------"<<endl;
        cout<<"Monto total" <<montototal <<endl;

        
     }


};
