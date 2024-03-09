class persona{

private:
    int codigo;
    string nombre;
    string direccion;
    string telefono;
 
 public:
    int getCodigo()
    {
        return this->codigo;
    }
    void setCodigo(int codigo)
    {
        this->codigo = codigo;
    }
    string getNombre()
    {
        return this->nombre;
    }
    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }
    string getDireccion()
    {
        return this->direccion;
    }
    void setDireccion(string direccion)
    {
        this->direccion = direccion;
    }
    string getTelefono()
    {
        return this->telefono;
    }
    void setTelefono(string telefono)
    {
        this->telefono = telefono;
    }



 
};