#include <stdio.h>
int main (){

    int num, fatorial = 1;

    printf("Digite um número inteiro:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) fatorial *= i;

    printf("Fatorial de %d: %d\n", num, fatorial);
    
    return 0;
}