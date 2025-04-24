/*Este algoritmo que calcula o numero de Fibonacci em uma posicao especifica.
 A sequencia de Fibonacci e dada por: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
 A formula recursiva e: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2).*/

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
    printf("Digite a posicao da sequencia: ");
    scanf("%d", &posicao);

    if (posicao < 0) {
        printf("Posicao invalida. Digite um numero inteiro nao negativo.\n");
        return 1;
    }

    printf("Fibonacci(%d) = %d \n", posicao, fib(posicao));
    return 0;
}
