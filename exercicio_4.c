#include <stdio.h>

int Bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int main () {
    int data_1, data_2;

    printf("digite dois anos (ex: 2000 2024):\n");
    printf("obs: O primeiro ano deve ser menor que o segundo.\n");
    scanf("%d %d", &data_1, &data_2);

    if (data_1 >= data_2) {
        printf("erro o primeiro ano deve ser menor que o segundo.\n");
        return 1;
    }

    printf("anos bissextos entre %d e %d:\n", data_1, data_2);
    for (int ano = data_1 + 1; ano < data_2; ano++) {
        if (Bissexto(ano)) {
            printf("%d\n", ano);
        }
    }

    return 0;
}
