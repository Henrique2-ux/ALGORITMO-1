/* Este algaritmo pede dois numeros reais do usuario, realiza a media (divisao por 2),
 e verifica se o resultado da operacao e um numero inteiro. 
 Ele compara o resultado com a parte inteira e exibe a mensagem correspondente. */

#include <stdio.h>
int main (){

    float numero1, numero2, divisao;
    int resultado_inteiro;

    printf("Quais os dois numeros?\n");
    scanf("%f %f", &numero1, &numero2);

    divisao = (numero1 + numero2) / 2;
    resultado_inteiro = (int)divisao;  

    if (divisao == resultado_inteiro) {
        printf("A divisao e inteira\nResultado: %.2f\n", divisao);
    } else {
        printf("A divisao nao e inteira\nResultado: %.2f\n", divisao);
    }

    return 0;
}
