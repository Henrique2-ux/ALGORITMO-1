#include <stdio.h>
int main() {
    int valor1, valor2, dividir;

    printf("Quais serão os dois valores?\n");
    scanf("%d %d", &valor1, &valor2);

    if (valor2 == 0) {
        printf("Erro: divisão por zero não é permitida.\n");
        return 1;
    }

    dividir = valor1 / valor2;

    if (dividir % 2 != 0) {
        printf("A divisão é %d e o resultado é ímpar.\n", dividir);
    } else {
        printf("A divisão é %d e o resultado é par.\n", dividir);
    }

    return 0;
}
