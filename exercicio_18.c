/*Este algoritmo le um texto fornecido pelo usuario, 
 e substitui todas as ocorrencias da letra 'o' por 'a'.
 apos modificar o texto, o programa exibe o resultado.*/
 
#include <stdio.h>

int main ( ) {

    char texto[100];

    printf("Digite o texto:\n");
    fgets(texto, sizeof (texto), stdin);

    for (int i =0; texto[i] != '\0'; i++){

        if (texto[i] == 'o'){
            texto[i] = 'a';
        }
    }

    printf("Texto modificado: %s", texto);

    return 0;
}