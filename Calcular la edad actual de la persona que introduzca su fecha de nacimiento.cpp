#include <stdio.h>
#include <iostream>
#include <locale>

int main() {

    setlocale(LC_ALL, "Spanish");
    int anioNacimiento, mesNacimiento;
    int anioActual = 2025;
    int mesActual = 5; 
    int edad;

    printf("=== CALCULADORA DE EDAD (Sin switch/case) ===\n\n");

    printf("Ingrese su año de nacimiento (por ejemplo, 2004): ");
    scanf("%d", &anioNacimiento);

    printf("Ingrese el número de su mes de nacimiento (1 = Enero, ..., 12 = Diciembre): ");
    scanf("%d", &mesNacimiento);

   
    if (mesNacimiento < 1 || mesNacimiento > 12) {
        printf("Mes inválido. Debe ser entre 1 y 12.\n");
        return 1;
    }

    edad = anioActual - anioNacimiento;

    if (mesNacimiento > mesActual) {
        edad--;
    }

    printf("\nTu edad aproximada es de: %d años\n", edad);

    return 0;
}
