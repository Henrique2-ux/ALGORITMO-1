#include <stdio.h>
int main (){

    int numero;

    printf("Digite um número inteiro:\n");
    scanf("%d", &numero);

    printf("%d é %s\n", numero, (numero % 2 == 0) ? "par" : "ímpar");
    
    return 0;
}