#include <stdio.h>

int main () {
    float valor1, valor2;
    char caracter1, caracter2, caracter3, caracter4, caracter5;

    printf("Declare 2 numeros reais e 5 caracteres (ex: 1.2 3.4 a b c d e): \n");
    scanf("%f %f %c %c %c %c %c", &valor1, &valor2, &caracter1, &caracter2, &caracter3, &caracter4, &caracter5);

    printf("\nVoce declarou:\n");
    printf("Dois numeros reais: %.2f e %.2f\n", valor1, valor2);
    printf("Cinco caracteres: %c %c %c %c %c\n", caracter1, caracter2, caracter3, caracter4, caracter5);

    return 0;
}
