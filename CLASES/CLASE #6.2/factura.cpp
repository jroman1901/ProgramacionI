struct  Articulo
{
    string nombre;
    int cantidad;
    double precio;
};

class Factura
{
    private:  // atributos
        string cliente;
        string fecha;
        Articulo *articulos;  
        int cantidadArticulos;
        int indice;
        double montototal;
    public:
    Factura(string cliente,string fecha, int cantidaArticulos,double montoTotal)
    {
        this->cliente = cliente;
        this->fecha = fecha;
        this->cantidadArticulos = cantidaArticulos;
        this->montototal= montoTotal;
        articulos = new Articulo[100];
        this->indice =0;

    }
    // destructor de la clase factura
    ~Factura() {
        delete[] articulos;  // Liberar memoria asignada para los artículos
    }

    void agregarArticulo(string nombre, int cantidad, double precio)
    {
        articulos[indice].nombre = nombre;
        articulos[indice].cantidad = cantidad;
        articulos[indice].precio = precio;
        indice++;

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
