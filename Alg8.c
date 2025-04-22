#include <stdio.h>

int main (){

    int id, nota_1, nota_2, nota_3, media;

    printf("Qual seu id?");
    scanf("%d", &id);

    printf("Sua primeira nota:");
    scanf("%d", &nota_1);

    printf("Sua segunda nota:");
    scanf("%d", &nota_2);

    printf("Sua terceira nota:");
    scanf("%d", &nota_3);

   media = (nota_1 + nota_2 + nota_3) / 3 ;

    printf("Sua media e: %d", media );

    return 0;
}