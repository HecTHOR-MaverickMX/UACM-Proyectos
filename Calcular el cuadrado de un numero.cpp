#include <Stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
// Este programa calcula el cuadrado de un numero
// y lo imprime en pantalla
// El programa pide al usuario que ingrese un numero
// y luego calcula el cuadrado de ese numero
// El programa utiliza la funcion pow() de la libreria cmath
// para calcular el cuadrado del numero


int main() {
    
    float numero, cuadrado;
    
    printf("Ingrese el numero a calcular: ");
    scanf("%f", &numero);
    
    cuadrado = (numero * numero);
    
    printf("El cuadrado de %.2f es: %.2f\n", numero, cuadrado);
    return 0;
}