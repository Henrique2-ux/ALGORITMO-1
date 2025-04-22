#include <stdio.h>

int main(){

    int n;

    printf("quantos numeros seram ordenados ? \n");
    scanf("%d", &n);

    printf("Digite os %d numeros: \n", n);

    int numeros[n];

    for (int i = 0; i < n;  i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < n -1; i++) {
        for (int j = 0; j < n - i - 1; j++){
            if (numeros[j] > numeros[j + 1]) {

                int temp = numeros[j + 1];
                numeros[j] = numeros [j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
   
    printf("Os numeros em ordem crescente: \n");
    for (int i = 0; i < n; i++){
        printf("%d", numeros[i]);
    }

    printf("\n");

    return 0;
}