class automovil : public vehiculo
{
private:
    int numPuertas;

public:
    automovil(string marca, string color, int modelo, int numPuertas) : vehiculo(marca, color, modelo)
    {

        this->numPuertas = numPuertas;
    }

    int getNumeroPuertas()
    {
        return this->numPuertas;
    }
    void setNumeroPuertas(int numPuertas)
    {
        this->numPuertas = numPuertas;
    }
};
