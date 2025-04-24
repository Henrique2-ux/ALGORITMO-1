/* Este algoritmo pede ao usuario digite 6 numeros e, em seguida, exibe esses numeros.*/

#include <stdio.h>

int main() {
    int numeros[6];

    printf("Digite 6 números para o sorteio:\n");

    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Números digitados:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
