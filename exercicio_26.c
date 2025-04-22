#include <stdio.h>

int main() {

    int numero1, numero2, soma;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    if (soma = 10) {
        printf("A soma é %d e igual a 10.\n", soma);
    } 

    else if(soma < 10) {
        printf("A soma é %d e menor que 10.\n", soma);
    } 

    else{
        printf("A soma é %d e maior que 10.\n", soma);
    }
    
    return 0;
}
