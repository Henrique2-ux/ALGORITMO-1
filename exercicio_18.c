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