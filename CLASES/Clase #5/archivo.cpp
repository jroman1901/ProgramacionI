class archivo{

public:
    void guardarArchivo(persona p[])
    {
        ofstream archivo("base.txt");
        if (archivo.is_open())
        {
            for (int i = 0; i < 5; i++)
            {
                archivo << "Codigo: " << p[i].getCodigo() << endl;
                archivo << "Nombre: " << p[i].getNombre() << endl;
                archivo << "Direccion: " << p[i].getDireccion() << endl;
                archivo << "Telefono: " << p[i].getTelefono() << endl;
                archivo << "================" << endl;
            }
            archivo.close();
            cout<< "Datos guardados correctamente en 'datos_personas.txt'" << endl;
        }
        else
        {
            cout << "Error al abrir el archivo"<<endl;
        }
    }
};