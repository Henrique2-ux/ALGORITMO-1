#include <stdio.h> 
int main (){

    int anos, meses, dias, resultado1, resultado2, resultado3;
    
    printf("Qual a sua idade?:");
    scanf("%d", &anos);

    resultado1 = anos * 365,25;
    resultado2 = anos * 12;
    resultado3 = anos * 1;

    printf("A sua idade em dias e meses e anos e: %d, %d e %d\n", resultado1, resultado2, resultado3);

    return 0;
}