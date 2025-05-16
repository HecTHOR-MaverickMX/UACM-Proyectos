#include <stdio.h>

int main() {
    int numero1, numero2, numero3, numero4, numero5;

    printf("Ingresa el primer numero: ");
    scanf("%d", &numero1);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &numero2);

    printf("Ingresa el tercer numero: ");
    scanf("%d", &numero3);

    printf("Ingresa el cuarto numero: ");
    scanf("%d", &numero4);

    printf("Ingresa el quinto numero: ");
    scanf("%d", &numero5);

    if (numero1 % 2 == 0) {
        printf("El numero %d es PAR\n", numero1);
    } else {
        printf("El numero %d es IMPAR\n", numero1);
    }

    if (numero2 % 2 == 0) {
        printf("El numero %d es PAR\n", numero2);
    } else {
        printf("El numero %d es IMPAR\n", numero2);
    }

    if (numero3 % 2 == 0) {
        printf("El numero %d es PAR\n", numero3);
    } else {
        printf("El numero %d es IMPAR\n", numero3);
    }

    if (numero4 % 2 == 0) {
        printf("El numero %d es PAR\n", numero4);
    } else {
        printf("El numero %d es IMPAR\n", numero4);
    }

    if (numero5 % 2 == 0) {
        printf("El numero %d es PAR\n", numero5);
    } else {
        printf("El numero %d es IMPAR\n", numero5);
    }

    return 0;
}
