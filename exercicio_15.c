#include <stdio.h> 
int main (){

    float nota1, nota2, nota3, media;

    printf("Quais sao as 3 notas? \n ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua media e: %1.f \n " , media);

    return 0;
}