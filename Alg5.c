#include <stdio.h>
int main(){
    
    int dias, resultado;

    printf("Qual sua idade?");
    scanf("%d", &dias);

    resultado = dias * 365,25;

    printf("O numero da sua idade em dias: %d ", resultado);

    return 0;
}