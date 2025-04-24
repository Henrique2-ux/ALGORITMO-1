/*Este algoritmo faz a divisao de dois numeros inteiros fornecidos pelo usuario.
 Ele verifica se a divisao e possivel (nao divisao por zero) e se o resultado da divisao e par ou impar.*/

#include <stdio.h>
int main() {
    int valor1, valor2, dividir;

    printf("Quais serao os dois valores?\n");
    scanf("%d %d", &valor1, &valor2);

    if (valor2 == 0) {
        printf("Erro: divisao por zero nao e permitida.\n");
        return 1;
    }

    dividir = valor1 / valor2;

    if (dividir % 2 != 0) {
        printf("A divisao é %d e o resultado e impar.\n", dividir);
    } else {
        printf("A divisao é %d e o resultado e par.\n", dividir);
    }

    return 0;
}
