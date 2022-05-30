#include <iostream>

using namespace std;

int Suma(int num1, int num2)
{
    return num1+num2;
}
int Resta(int num1, int num2)
{
    return num1-num2;
}
float Multiplicacion(int num1, int num2)
{
    return num1*num2;
}
int Division(float num1, float num2)
{
    return num1/num2;
}

int main()
{
    int num1,num2;

    cout<<"-------CALCULADORA CON FUNCIONES"<<endl;
    cout<<"Ingrese Numero: ";
    cin>>num1;
    cout<<"Ingrese Numero: ";
    cin>>num2;

    int SUMA=(Suma(num1,num2));
    int RESTA=(Resta(num1, num2));
    int MULTIPLICACION=(Multiplicacion(num1, num2));
    float DIVISION=(Division(num1, num2));

    cout<<"Suma: "<<SUMA<<endl;
    cout<<"Resta: "<<RESTA<<endl;
    cout<<"Division: "<<DIVISION<<endl;
    cout<<"Multiplicacion: "<<MULTIPLICACION<<endl;

    return 0;
}
