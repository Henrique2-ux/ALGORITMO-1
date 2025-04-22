#include <stdio.h>
int main(){

    char nome[50];
    char genero[30];
    int  idade;
    float altura;

    printf("Qual o seu nome? ");
    scanf("%s", nome); 

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Qual o seu genero (masculino, feminino ou prefiro nao informar)? ");
    scanf("%s", &genero); 

    printf("Qual a sua altura (em metros)? ");
    scanf("%f", &altura);

    printf("Seus dados sao:\n nome :%s \n idade: %d \n genero: %s \n altura: %.2f metros ", nome , idade , genero, altura);

    return 0;
}