#include <iostream>

using namespace std;

int main()
{
    int derecho = 0;
    int proceso = 0;
    int fisica = 0;
    int calculo = 0;
    int programacion = 0;

    cout << "Ingresa la nota de Derecho Informatico: " <<endl;
    cin >> derecho;
    cout << "Ingresa la nota de Proceso administrativo: " <<endl;
    cin >> proceso;
    cout << "Ingresa la nota de Fisica 1: " <<endl;
    cin >> fisica;
    cout << "Ingresa la nota de Calculo 1: " <<endl;
    cin >> calculo;
    cout << "Ingresa la nota de Programacion: " <<endl;
    cin >> programacion;

    cout << "Derecho Informatico: " <<endl;
    switch(derecho)
    {
    case 100:
        cout << "Felicidades, usted obtuvo una nota perfecta!! " << endl;
        break;
    default:
        if(derecho >= 61){
            cout << "Bien hecho, usted aprobo el curso de Derecho Informatico" << endl;
        }
        else{
            cout << "Lo sentimos, usted reprobo el curso de Derecho Informatico" << endl;
        }
    }
    cout << "Proceso Administrativo: " <<endl;
    switch(proceso)
    {
    case 100:
        cout << "Felicidades, usted obtuvo una nota perfecta!! " << endl;
        break;
    default:
        if(proceso >= 61){
            cout << "Bien hecho, usted aprobo el curso de Proceso Administrativo" << endl;
        }
        else{
            cout << "Lo sentimos, usted reprobo el curso de Proceso Administrativo" << endl;
        }
    }
    cout << "Fisica 1: " <<endl;
    switch(fisica)
    {
    case 100:
        cout << "Felicidades, usted obtuvo una nota perfecta !! " << endl;
        break;
    default:
        if(fisica >= 61){
            cout << "Bien hecho, usted aprobo el curso de Fisica 1" << endl;
        }
        else{
            cout << "Lo sentimos, usted reprobo el curso de Fisica 1" << endl;
        }
    }

cout << "Calculo 1 " <<endl;
    switch(calculo)
    {
    case 100:
        cout << "Felicidades, usted obtuvo una nota perfecta !! " << endl;
        break;
    default:
        if(calculo >= 61){
            cout << "Bien hecho, usted aprobo el curso de Calculo 1" << endl;
        }
        else{
            cout << "Lo sentimos, usted reprobo el curso de Calculo 1 " << endl;
        }
    }
    cout << "Programacion : " <<endl;
    switch(programacion)
    {
    case 100:
        cout << "Felicidades, usted obtuvo una nota perfecta!! " << endl;
        break;
    default:
        if(programacion >= 61){
            cout << "Bien hecho, usted aprobo el curso de Programación " << endl;
        }
        else{
            cout << "Lo sentimos, usted reprobo el curso de Programación " << endl;
        }
    }
    cout << " Gracias, fin " << endl;


return 0;
}

