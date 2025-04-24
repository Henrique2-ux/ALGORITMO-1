#include <stdio.h>
int main (){
    
    int valores[10];
    printf("Digite 10 valores inteiros:\n");

    for (int i = 0; i < 10; i++) scanf("%d", &valores[i]);
    printf("Valores digitados: ");

    for (int i = 0; i < 10; i++) printf("%d ", valores[i]);
    printf("\n");

    return 0;

}