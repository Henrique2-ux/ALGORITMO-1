/* Este algoritmo resolve equações do segundo grau na forma ax² + bx + c = 0.
 Ele le os coeficientes a, b e c do usuario, calcula o discriminante (delta)
 e informa se a equação nao tem raizes reais, tem uma raiz real unica ou duas reais distintas.*/

#include <stdio.h>
#include <math.h> 

int main() {
    float valor_de_a, valor_de_b, valor_de_c, delta, x1, x2;

    printf("Digite os três valores (a, b, c):\n");
    scanf("%f %f %f", &valor_de_a, &valor_de_b, &valor_de_c);

    if (valor_de_a == 0) {
        printf("Isso nao e uma equacao de segundo grau.\n");
        return 4;
    }

    delta = valor_de_b * valor_de_b - 4 * valor_de_a * valor_de_c;

    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } 
    else if (delta == 0) {
        x1 = -valor_de_b / (2 * valor_de_a);
        printf("Raiz unica: x = %.2f\n", x1);
    } 
    else {
        x1 = (-valor_de_b + sqrt(delta)) / (2 * valor_de_a);
        x2 = (-valor_de_b - sqrt(delta)) / (2 * valor_de_a);
        printf("As raizes sao: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}
