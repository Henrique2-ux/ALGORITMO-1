#include <stdio.h>
int main (){

    float a, b, c;

    printf("Digite os três lados do triângulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)

    printf("Forma um triângulo válido\n");

    else printf("Não forma um triângulo\n");
    
    return 0;
}