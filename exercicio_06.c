/* Este algoritmo pede dois valores reais (float) ao usuario,
 realiza a soma entre eles e exibe o resultado formatado na tela.*/

#include <stdio.h>
int main (){

    float valor1, valor2, soma;

    printf("Quais serao os dois valores somados? \n");
    scanf("%f %f", &valor1, &valor2); 

    soma = valor1 + valor2;

    printf("O resultado de %.2f e %.2f é %.2f\n", valor1, valor2 , soma); 
    return 0;
}
