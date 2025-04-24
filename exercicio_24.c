/*Este algoritmo que verifica se uma pessoa esta apta ao alistamento militar obrigatorio, 
 baseado em sua idade, sexo, nacionalidade e se possui alguma deficiencia grave.*/

#include <stdio.h>
int main() {
    int idade;
    char sexo;
    char nacionalidade[20];
    char deficiencia;

    printf("qual sua idade: ");
    scanf("%d", &idade);

    printf("qual seu sexo (M/F): ");
    scanf(" %c", &sexo); 

    printf("qual sua nacionalidade: ");
    scanf("%s", &nacionalidade);

    printf("tem alguma deficiencia grave? (S/N): ");
    scanf(" %c", &deficiencia);

    if (sexo == 'M' || sexo == 'm') {
        if ((idade >= 18 && idade <= 45) &&
            (deficiencia == 'N' || deficiencia == 'n')) {
            
            printf("resultado: apto ao alistamento militar obrigatorio.\n");
        }
         else {
            printf("resultado: Nao apto ao alistamento militar obrigatorio.\n");
        }
    } 
    else {
        printf("resultado: Nao apto ao alistamento militar obrigatorio.\n");
    }

    return 0;
}
