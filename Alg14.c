#include <stdio.h>
int main (){

    int n1, n2; float real; char ch1, ch2, ch3;

    printf("Digite 2 inteiros, 1 real e 3 caracteres:\n");
    scanf("%d %d %f %c %c %c", &n1, &n2, &real, &ch1, &ch2, &ch3);

    printf("Inteiros: %d, %d | Real: %.2f | Caracteres: %c %c %c\n", n1, n2, real, ch1, ch2, ch3);
    
    return 0;
}