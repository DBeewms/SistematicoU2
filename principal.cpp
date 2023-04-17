#include <iostream>
#include "funciones.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;

    cout << "Selecciona una opcion: " << endl;
    cout << "Opcion 2, tabla de multiplicar" << endl;
    cout << "Opcion 3, numero mayor entre varios numeros" << endl;
    cout << "Opcion 4, salir" << endl;
    cin >> opcion;

    do{
    switch (opcion)
    {
    case 2:
        tablaMultiplicar();
        break;
    case 3:
        numerosMayor();
        break;
    default:
        cout << "Opcion invalida";
        break;
    }
    }while(opcion!=4);
    
return 0;
}
