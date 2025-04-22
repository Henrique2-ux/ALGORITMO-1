#include <stdio.h>
int main (){

    float numero1, numero2, divisao;
    int resultado_inteiro;

    printf("Quais os dois numeros?\n");
    scanf("%f %f", &numero1 , &numero2);

    divisao = (numero1 + numero2) / 2;
    resultado_inteiro = divisao;

    if((divisao == resultado_inteiro)){

        printf("A divisao e inteira \n Resultado: %.2f \n", divisao);

    } else {

        printf("A divisao nao e inteira \n Resultado: %.2f \n.", divisao);
    }

    return 0;
}