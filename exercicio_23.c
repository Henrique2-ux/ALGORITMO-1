#include <stdio.h>

int fib(int posicao) {
    if (posicao < 2) return posicao;

    int anterior = 0, atual = 1, proximo;
    for (int i = 2; i <= posicao; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return atual;
}

int main() {
    int posicao;
    printf("Digite a posição da sequência: ");
    scanf("%d", &posicao);

    if (posicao < 0) {
        printf("Posição inválida. Digite um número inteiro não negativo.\n");
        return 1;
    }

    printf("Fibonacci(%d) = %d\n", posicao, fib(posicao));
    return 0;
}
