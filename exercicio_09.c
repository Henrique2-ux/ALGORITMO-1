/* Este algaritmo pede dois números inteiros do usuario,
 verifica se cada um deles e par ou impar e exibe o resultado correspondente na tela. */

#include <stdio.h>
int main(){

    int numero1, numero2;

    printf("Quais os dois numeros?\n");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 % 2 == 0) {
        printf("O numero (%d) e par.\n", numero1);
    } else {
        printf("O numero (%d) e impar.\n", numero1);
    }  
    
    if (numero2 % 2 == 0) {
        printf("O numero (%d) e par.\n", numero2);
    } else {
        printf("O numero (%d) e impar.\n", numero2);
    }

    return 0;
}

