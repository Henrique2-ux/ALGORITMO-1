/* Este programa calcula a resistencia equivalente de dois resistores em paralelo.
 A formula usada e: 1/esistencia_equivalente = 1/resistencia_1 + 1/resistencia_2, ou seja, resistencia_equivalente = (resistencia_1 * resistencia_2) / (resistencia_1 + resistencia_2).*/

#include <stdio.h>

int main() {
    float resistor_1, resistor_2, resistor_equivalente;

    printf("digite o valor do primeiro resistor (em ohms): ");
    scanf("%f", &resistor_1);

    printf("digite o valor do segundo resistor (em ohms): ");
    scanf("%f", &resistor_2);

    if (resistor_1 <= 0 || resistor_2 <= 0) {
        printf("os valores das resistencias devem ser positivos e diferentes de zero.\n");
        return 1;
    }

    resistor_equivalente = (resistor_1 * resistor_2) / (resistor_1 + resistor_2);

    printf("a resistencia equivalente do circuito em paralelo: %.2f ohms \n", resistor_equivalente);

    return 0;
}
