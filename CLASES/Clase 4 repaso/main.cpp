#include "cabecera.cpp"
#include "empleado.cpp"
int main() {
    // Crear empleados
    Empleado juan("Juan", 50000);
    Empleado maria("Maria", 60000);
    Empleado carlos("Carlos", 55000);

    // Listar empleados y sus salarios anuales
    cout << "Empleados:" << endl;
    cout << "Nombre: " << juan.nombre << ", Salario anual: " << juan.calcular_salario_anual() << endl;
    cout << "Nombre: " << maria.nombre << ", Salario anual: " << maria.calcular_salario_anual() << endl;
    cout << "Nombre: " << carlos.nombre << ", Salario anual: " << carlos.calcular_salario_anual() << endl;

    return 0;
}