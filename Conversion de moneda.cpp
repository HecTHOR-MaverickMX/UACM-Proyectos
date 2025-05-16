#include <stdio.h>

int main() {
    float dolares, pesos;
    int opcion;
    float tipoCambio = 20.0; 

    
    printf("Bienvenido al convertidor de moneda\n");
    printf("Seleccione una opcion:\n");
    printf("1. Convertir de dolares a pesos mexicanos\n");
    printf("2. Convertir de pesos mexicanos a dolares\n");
    printf("3. Salir\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

 
    while (opcion < 1 || opcion > 3) {
        printf("Opcion invalida. Intente de nuevo:\n");
        printf("1. Convertir de dolares a pesos mexicanos\n");
        printf("2. Convertir de pesos mexicanos a dolares\n");
        printf("3. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);
    }

    
    if (opcion == 1) {
        printf("Ingrese la cantidad en dolares: ");
        scanf("%f", &dolares);
        pesos = dolares * tipoCambio;
        printf("Equivale a %.2f pesos mexicanos.\n", pesos);
    } else if (opcion == 2) {
        printf("Ingrese la cantidad en pesos mexicanos: ");
        scanf("%f", &pesos);
        dolares = pesos / tipoCambio;
        printf("Equivale a %.2f dolares.\n", dolares);
    } else {
        printf("Gracias por usar el convertidor\n");
    }

    return 0;
}
