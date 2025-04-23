#include <stdio.h>

int eBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int main () {
    int data_1, data_2;

    printf("Digite dois anos (ex: 2000 2024):\n");
    printf("Obs: O primeiro ano deve ser menor que o segundo.\n");
    scanf("%d %d", &data_1, &data_2);

    if (data_1 >= data_2) {
        printf("Erro: o primeiro ano deve ser menor que o segundo.\n");
        return 1;
    }

    printf("Anos bissextos entre %d e %d:\n", data_1, data_2);
    for (int ano = data_1 + 1; ano < data_2; ano++) {
        if (ehBissexto(ano)) {
            printf("%d\n", ano);
        }
    }

    return 0;
}
