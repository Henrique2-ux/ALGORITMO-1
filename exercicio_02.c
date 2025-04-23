#include <stdio.h> 
int main(){

    char genero;
    float altura, media;

    printf("Qual seu genero ? \n");
    printf("M - (Masculino) \n");
    printf("F - (Feminino) \n");
    scanf("%c", &genero);

    printf("Qual sua altura?(em metros) \n");
    scanf("%f", &altura);

    if (genero == 'M'){
        media = 1.75;
    }

    else if (genero == 'F'){
        media = 1.62;
    }

    if (altura > media){
        printf("Esta acima da media brasileira. \n");
    }

    if (altura == media){
        printf("Esta na media brasileira. \n");
    }

    if (altura < media){
        printf("Esta a baixo da media brasileira. \n");
    }

    return 0;
}
