#include <iostream>
using namespace std;

void adivinarEdad(){
    int talla;
    int final;
    int edad;
    cout << "Ingresa la talla" << endl;
    cout << "Ingresa tu edad" << endl;
    cin >> talla;
    final = talla * (5+20) * 20 + 1015 - edad;
    cout << edad << endl;
    return;
}

void numerosMayor(){
    int cantidad;
    int num;
    int mayor = 0;
    int suma = 0;
    
    cout << "Cuantos numeros vas a analizar: " << endl;
    cin >> cantidad;
        for (int i = 1; i <= cantidad; i++){
        cout << "Ingrese el numero: " << endl;
        cin >> num;

        if(1 == i){ 
            mayor = num;

        }
            
        else if (num > mayor){ 
        mayor = num; 
        }
    
        suma += num;
        }
        cout << "El numero mayor es: "<< mayor << endl;
return;

}


void tablaMultiplicar(){
    int multiplicar;
    int numero;
    int i=1;
    cout << "Ingresa el numero y te dare su tabla de multiplicar : ";

    cin >> numero;

    cout << "La tabla del "<< numero <<" es :"<<endl;

    do{
    multiplicar = numero * i;
    cout<< numero << " x " << i << " = " << multiplicar <<endl;
    i++;
    }
    while(i<=10);

return;
}
    


