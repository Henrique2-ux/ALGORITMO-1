/*Este algoritmo pede dois numeros reais ao usuario, realiza a multiplicacao entre eles 
 e exibe o resultado da operacao.*/

#include <stdio.h>
 int main () {

   float valor1, valor2, multiplicar;

   printf("quais sao os dois valores? \n ");
   scanf("%f %f", &valor1, &valor2);

   multiplicar = valor1 * valor2;

   printf(" O resultado de multiplicar %1.f e %1.f: %1.f ", valor1, valor2, multiplicar);

    return 0;
 }