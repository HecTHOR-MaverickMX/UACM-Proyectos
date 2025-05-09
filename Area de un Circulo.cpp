#include <math.h>
#include <locale.h> 
#include <stdio.h>

//Este programa calcula el volumen de un cilindro dado su radio y altura

#define PI 3.14159265358979323846

int main(){
    setlocale(LC_CTYPE, "Spanish");
    double radio, altura, volumen;
    printf("radio de la circunferencia: ");
    scanf("%lf", &radio);
    volumen = PI * (radio * radio);
    printf("El volumen de la circunferencia es: %.2lf cm²", volumen);

   getchar();
   getchar(); 

    return 0;

}
