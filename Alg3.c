#include <stdio.h> 
int main (){
    
    int lado_1, lado_2, lado_3;

    printf("Qual o primeiro numero inteiro?:");
    scanf("%d", &lado_1);

    printf("Qual o segundo numero inteiro?:");
    scanf("%d", &lado_2);

    printf("Qual o terceiro numero inteiro?:");
    scanf("%d", &lado_3);

    printf("Os lados do triangulo sao: %d, %d e %d\n", lado_1, lado_2, lado_3);
    
    return 0;
}
