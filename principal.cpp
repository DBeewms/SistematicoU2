#include <iostream>
#include "funciones.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    int opcion;

    do{
    system("cls");
    
    cout << "Selecciona una opcion: " << endl;
    cout << "Opcion 1, adivinar edad" << endl;
    cout << "Opcion 2, tabla de multiplicar" << endl;
    cout << "Opcion 3, numero mayor entre varios numeros" << endl;
    cout << "Opcion 4, salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        adivinarEdad();
        break;
    case 2:
        tablaMultiplicar();
        system("pause");
        break;
    case 3:
        numerosMayor();
        system("pause");
        break;
    default:
        cout << "Opcion invalida";
        break;
    }
    }while(opcion!=4);
    
return 0;
}
