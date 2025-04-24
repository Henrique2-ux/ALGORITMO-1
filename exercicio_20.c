/* Este algaritmo ordena as letras fornecidas pelo usuario em ordem crescente usando o algoritmo de ordenacao Bubble Sort.
 O programa le uma string de 5 letras, realiza a ordenação e exibe a string ordenada.*/

#include <stdio.h>
#include <string.h>

    void bubbleSort (char str[], int tamanho) {
        
        for ( int i = 0; i < tamanho -1; i++) {
            for (int j = 0; j < tamanho - i - 1; j++ ){
                if (str[j] > str[j + 1]) {

                    char temp = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = temp;
                }
            }
        }
    }
  
int main(){

    char letras[6];

    printf("digite as 5 letras que seram ordenadas (sem espaco). \n");
    fgets(letras, sizeof(letras), stdin);

    letras[strcspn(letras, "\n")] = '\0';
    int tamanho = strlen(letras);

    if (tamanho != 5){

        printf(" ERRO !! \n ");
        return 1;
    }

    bubbleSort(letras, tamanho);

    printf("ordenadas: %s \n", letras);

    return 0;
}



   
  