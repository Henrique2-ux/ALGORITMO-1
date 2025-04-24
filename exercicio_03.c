/* Este algoritmo pede ao usuário tres numeros inteiros,
 armazena cada um em uma variavel distinta e exibe os valores
 informando quais foram atribuídos a  cada variavel A, B e C.*/

#include <stdio.h>
int main(){

    int numero_1, numero_2, numero_3;

    printf("Digite o primeiro valor inteiro (A): ");
    scanf("%d", &numero_1);

    printf("Digite o segundo valor inteiro (B): ");
    scanf("%d", &numero_2);

    printf("Digite o terceiro valor inteiro (C): ");
    scanf("%d", &numero_3);

    printf("Os valores digitados foram: %d (A), %d (B) e %d (C)\n", numero_1, numero_2, numero_3);

    return 0;
}
