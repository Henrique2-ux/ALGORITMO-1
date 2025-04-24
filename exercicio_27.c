/*Este algoritmo que le um valor real do usuario e exibe esse valor formatado como numero inteiro (sem casas decimais).*/

#include <stdio.h>

int main() {
    float valor1;

    printf("Digite um valor real: ");
    scanf("%f", &valor1);

    printf("Valor convertido para inteiro: %2.f\n", valor1);

    return 0;
}
