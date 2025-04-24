/* Este algoritmo pede ao usuario tres notas reais (pontos em uma avaliacao),
 calcula a media dessas notas e exibe o resultado para o usuario.

 A media e calculada somando as tres notas e dividindo o total por 3.*/

#include <stdio.h>  

int main () {

    float nota1, nota2, nota3, media;

    printf("Quais sao as 3 notas? \n ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);  

    media = (nota1 + nota2 + nota3) / 3;

    printf("Sua media e: %.1f \n", media);

    return 0; 
}
