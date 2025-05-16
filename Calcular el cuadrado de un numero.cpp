#include <Stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    
    float numero, cuadrado;
    
    printf("Ingrese el numero a calcular: ");
    scanf("%f", &numero);
    
    cuadrado = (numero * numero);
    
    printf("El cuadrado de %.2f es: %.2f\n", numero, cuadrado);
    return 0;
}
