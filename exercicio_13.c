/* Este algoritmo calcula a idade de uma pessoa em meses, com base no ano de nascimento 
 e no ano atual fornecido pelo usuario.*/

#include <stdio.h>
int main (){

    int anonascimento, anodehoje, meses;  

    printf("Em que ano voce nasceu e em que ano estamos?\n");
    scanf("%d %d", &anonascimento, &anodehoje);  

    
    meses = (anodehoje - anonascimento) * 12;


    printf("A sua idade de acordo com o ano que voce nasceu %d e: %d meses\n", anonascimento, meses);

    return 0;
}
