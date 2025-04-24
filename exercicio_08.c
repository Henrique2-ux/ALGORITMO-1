/* Este programa em C coleta informações pessoais do usuário: nome, idade, gênero e altura.
 Em seguida, exibe esses dados formatados na tela. Ele utiliza variáveis do tipo string, inteiro e float.*/

#include <stdio.h>

int main(){

    char nome[50];
    char genero[30];
    int idade;
    float altura;

    printf("Qual o seu nome? ");
    scanf("%s\n", &nome); 

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Qual o seu genero (masculino, feminino ou prefiro nao informar)? ");
    scanf("%s\n", &genero); 

    printf("Qual a sua altura (em metros)? ");
    scanf("%f", &altura);

    printf("\nSeus dados sao:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Genero: %s\n", genero);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}
