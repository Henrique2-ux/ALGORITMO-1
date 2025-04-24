#include <stdio.h>
int main (){

    float raio, area;

    printf("Digite o raio do círculo:\n");
    scanf("%f", &raio);

    area = 3.14159 * raio * raio;

    printf("Área do círculo: %.2f\n", area);
    
    return 0;
}