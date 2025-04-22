#include <stdio.h>

int main() {
    float Resistor_1, Resistor_2, Resistor_equivalente;

    printf("Digite o valor do primeiro resistor (em ohms): ");
    scanf("%f", &Resistor_1);

    printf("Digite o valor do segundo resistor (em ohms): ");
    scanf("%f", &Resistor_2);

    if (Resistor_1 <= 0 || Resistor_2 <= 0) {
        printf("Os valores das resistências devem ser positivos e diferentes de zero.\n");
        return 1;
    }

    Resistor_equivalente = (Resistor_1 * Resistor_2) / (Resistor_1 + Resistor_2);

    printf("A resistência equivalente do circuito em paralelo: %.2f ohms \n", Resistor_equivalente);

    return 0;
}
