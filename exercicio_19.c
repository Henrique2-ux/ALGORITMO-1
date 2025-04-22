#include <stdio.h>
 int main () {

   float valor1, valor2, multiplicar;

   printf("Quais sao os dois valores? \n ");
   scanf("%f %f", &valor1, &valor2);

   multiplicar = valor1 * valor2;

   printf(" O resultado de multiplicar %1.f e %1.f: %1.f ", valor1, valor2, multiplicar);

    return 0;
 }