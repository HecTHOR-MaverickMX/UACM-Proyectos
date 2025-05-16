#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdio.h>

// vamos a crear un programa que imprima los dias de la semana acorde al numero que se le pase del 1 al 7 

using namespace std;
int main() {
    int dia;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia;
    
    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Numero invalido. Debe ser del 1 al 7." << endl;
    }
    
    return 0;
}