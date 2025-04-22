#include <stdio.h>
int main (){

    float valor1, valor2, valor3, valor4, soma1,soma2;
    float divisao;

    printf("Os dois numeros que seram somados. \n");
    scanf("%f %f", &valor1, &valor2);

    printf("mais dois numeros inteiros \n ");
    scanf("%f %f", &valor3, &valor4);

    soma1 = valor1 + valor2;
    soma2 = valor3 + valor4;

    divisao = soma1 / soma2;

    printf("O resultado de %d e %d: %3.f " , soma1, soma2, divisao);
    
    return 0;

} 