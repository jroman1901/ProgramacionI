#include "cabecera.cpp"
#include "calculadora.cpp"
int main()
{
    calculadora cal;
    int opcion;
    float x;
    float y;
    float respuesta;
    cout<<"BIENVENIDO A LA CALCULADORA"<<endl;
    cout<<"1. SUMAR"<<endl;
    cout<<"2. RESTAR"<<endl;
    cout<<"3. MULTIPLICAR"<<endl;
    cout<<"4. DIVIDIR"<<endl;
    cout<<"INGRESE UNA OPCIÓN"<<endl;
    cin>>opcion;

    switch(opcion)
    {
        case 1:
         cout<<"MENU SUMAR"<<endl;
         cout<<"INGRESE EL VALOR A"<<endl;
         cin>>x;
         cout<<"INGRESE EL VALOR A"<<endl;
         cin>>y;
         respuesta = cal.sumar(x,y);
         cout<<"LA SUMA ES:"<<respuesta<<endl;
        break;
        case 2:
        cout<<"MENU RESTART"<<endl;
         cout<<"INGRESE EL VALOR A"<<endl;
         cin>>x;
         cout<<"INGRESE EL VALOR A"<<endl;
         cin>>y;
         respuesta = cal.restar(x,y);
         cout<<"LA RESTA ES:"<<respuesta<<endl;

        break;

    }


    return 0;
}
