#include <math.h>
#include <cmath>
#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_CTYPE, "Spanish");
    double lado, area;
    printf("Lado del triangulo: ");
    scanf("%lf", &lado); 
    area = lado * lado * sqrt(3) / 4;
    printf("El area del triangulo es: %.4lf cm²", area);

   getchar();
   getchar(); 

    return 0;

}
