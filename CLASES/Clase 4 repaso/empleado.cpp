class Empleado {
public:
    string nombre;
    double salario;

    Empleado(string nombre, double salario) {
        this->nombre = nombre;
        this->salario = salario;
    }

    double calcular_salario_anual() {
        return salario * 12;
    }
    double calcular_salario_dia() {
        return salario / 30;
    }

};