/* Este algoritmo pede quatro numeros reais ao usuario, divide os dois primeiros em um grupo e os dois ultimos em outro,
  calcula a soma de cada grupo e, por fim, divide a primeira soma pela segunda, exibindo o resultado.*/

#include <stdio.h>
int main (){

    float valor1, valor2, valor3, valor4, soma1, soma2;
    float divisao;

    printf("Digite os dois primeiros numeros que serao somados:\n");
    scanf("%f %f", &valor1, &valor2);

    printf("Digite mais dois numeros:\n");
    scanf("%f %f", &valor3, &valor4);

    soma1 = valor1 + valor2;
    soma2 = valor3 + valor4;

    divisao = soma1 / soma2;

    printf("A soma dos dois primeiros é %.2f, a soma dos dois últimos é %.2f.\n", soma1, soma2);
    printf("O resultado da divisao entre as somas é: %.2f\n", divisao);
    
    return 0;
}
