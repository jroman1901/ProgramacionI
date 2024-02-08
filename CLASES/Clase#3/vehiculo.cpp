class vehiculo
{
private:
    string marca;
    string color;
    int modelo;

public:
    vehiculo(string marca, string color, int modelo)
    {
        this->marca = marca;
        this->color = color;
        this->modelo = modelo;
    }

    void setMarca(string marca)
    {
        this->marca = marca;
    }

    string getMarca()
    {
        return marca;
    }

    void setColor(string color)
    {
        this->color = color;
    }

    string getColor()
    {
        return color;
    }

    void setModelo(int modelo)
    {
        this->modelo = modelo;
    }

    int getModelo()
    {
        return modelo;
    }
};