#include <stdio.h>//Alg que tem como entrada a altura e o sexo 
int main (){
    float altura;
    int genero;

    printf("Qual sua altura?");
    printf("\n");
    scanf("%f", &altura);

    printf(" \n Qual seu genero? (masculino ou feminino) \n");
    printf("\n");
    scanf("%d", &genero);

    printf("A sua altura e: %.2f e o seu genero e: %d\n", altura, genero);

    return 0;
}