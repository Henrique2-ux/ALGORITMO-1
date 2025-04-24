/*Este algoritmo pede dois numeros inteiros ao usuario, calcula a soma deles e informa se a soma e igual, menor ou maior que 10.*/

#include <stdio.h>

int main() {

    int numero1, numero2, soma;

    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    if (soma = 10) {
        printf("A soma e %d e igual a 10.\n", soma);
    } 

    else if(soma < 10) {
        printf("A soma e %d e menor que 10.\n", soma);
    } 

    else{
        printf("A soma e %d e maior que 10.\n", soma);
    }
    
    return 0;
}
