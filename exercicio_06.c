#include <stdio.h>
int main (){

    float valor1, valor2, soma;

    printf("Quais seram os dois valores somados? \n");
    scanf("%f, %f", &valor1, &valor2 );

    soma = valor1 + valor2;

    printf(" o resultado de %2.f e %2.f e %3.f ", valor1, valor2 , soma);

    return 0;

}