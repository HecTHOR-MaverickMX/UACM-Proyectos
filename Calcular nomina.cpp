#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "Spanish");

    // Variables
    int diasTrabajados, horas, horasExtra;
    float sueldoExtra, sueldoNeto, totalSueldo;
    int impuesto = 145;

    // Entrada de datos
    printf("¿Cuántos días trabajaste?: ");
    scanf("%d", &diasTrabajados);

    printf("¿Cuántas horas trabajaste?: ");
    scanf("%d", &horas);

    printf("¿Cuántas horas extras trabajaste?: ");
    scanf("%d", &horasExtra);

    printf("¿Cuál es el pago por cada hora extra?: ");
    scanf("%f", &sueldoExtra);

    printf("¿Cuál es tu sueldo neto?: ");
    scanf("%f", &sueldoNeto);

    // Cálculo del sueldo total
    totalSueldo = sueldoNeto + (horasExtra * sueldoExtra) - impuesto;

    // Salida del resultado
    printf("El sueldo total es de: %.2f\n", totalSueldo);

    return 0;
}
