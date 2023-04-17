#include <iostream>
using namespace std;

int main () {
    int cantidad, num;
    int mayor = 0;
    int suma = 0;
    
    cout<<"Cuantos numeros: ";
    cin>> cantidad;
        for (int i = 1; i <= cantidad; i++){
        cout<<"Ingrese el numero: ";
        cin>>num;

        if(1 == i){ 
            mayor = num;

        }
            
        else if (num > mayor){ 
        mayor = num; 
        }
    
        suma += num;
        }
        cout<<"El numero mayor es: "<<mayor<<endl;

        return 0;
    }


