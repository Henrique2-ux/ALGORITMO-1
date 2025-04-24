#include <stdio.h>
int main (){

    float peso, altura, imc;

    printf("Digite seu peso (kg) e altura (m):\n");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);
    
    return 0;
}