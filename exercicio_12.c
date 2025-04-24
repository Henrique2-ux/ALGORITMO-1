/* Este algoritmo pede ao usuario que digite ate 10 caracteres, 
 e depois exibe os caracteres digitados na mesma ordem. */

#include <stdio.h>

int main (){

    char texto[10]; 
    int palavras = 0;
    char c; 

    printf("Digite ate 10 caracteres: \n");

    while (palavras < 10) {
        c = getchar(); 

        if (c == '\n') { 
            break;
        }

        texto[palavras] = c;  
        palavras++;  
    }

    texto[palavras] = '\0'; 

  
    printf("Voce digitou: %s", texto);

    return 0;
}
