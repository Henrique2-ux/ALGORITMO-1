/*Este algoritmo pede ao usuario um numero real e exibe esse valor com duas casas decimais.*/

#include <stdio.h>

int main() {
    float valor;

    printf("Digite um valor real: ");
    scanf("%f", &valor);

    printf("O valor real digitado foi: %.2f\n", valor);

    return 0;
}
