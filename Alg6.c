#include <stdio.h> 
int main(){

    int numero_1, numero_2, numero_3;

    printf("Qual o valor do 1 numero inteiro?");
    scanf("%d", &numero_1);

    printf("Qual o valor do 2 numero inteiro?");
    scanf("%d", &numero_2);

    printf("Qual valor do 3 numero inteiro?");
    scanf("%d", &numero_3);

    printf("Os numeros inteiros sao: %d, %d e %d\n", numero_1, numero_2, numero_3);

    return 0;
}