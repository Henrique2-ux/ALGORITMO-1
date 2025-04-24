/* Este algaritmo apresenta um menu de opcoes de alimentos,
 e dependendo da escolha do usuario, solicita informações adicionais,
como o tipo de molho ou a opção de salada. Ele utiliza a estrutura switch-case
para tomar decisoes com base nas escolhas do usuario. */

#include <stdio.h>
int main (){

    int opcao;

    printf("\nMENU\n");
    printf("1 - (Macarrao)\n");
    printf("2 - (Arroz e Feijao)\n");
    printf("3 - (Bife acebolado)\n");
    printf("4 - (Salada)\n");
    printf("5 - (So agua)\n");
    printf("Qual sera seu pedido? \n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1 : {
            int subopcao; 
            printf("Qual sera o molho? \n");
            printf("1 - (Molho vermelho)\n");
            printf("2 - (Molho branco)\n");
            scanf("%d", &subopcao);

            if(subopcao == 1){
                printf("Voce pediu Macarrao com molho vermelho. \n");
            }   
            else if (subopcao == 2){
                printf("Voce pediu Macarrao com molho branco. \n");
            }
            break;
        }
        case 2 : {
            printf("Voce pediu Arroz e Feijao. \n");
            break;
        }
        case 3 : {
            printf("Voce pediu Bife Acebolado. \n");
            break;
        }
        case 4 : {
            int subopcao2;
            printf("Qual tipo de salada?\n");
            printf("1 - (Tomate e Alface)\n");
            printf("2 - (Salada Completa)\n");
            scanf("%d", &subopcao2); 

            if(subopcao2 == 1){
                printf("Voce pediu Salada apenas com Tomate e Alface. \n");
            } 
            else if (subopcao2 == 2){
                printf("Voce pediu Salada Completa. \n");
            }
            break;
        }
        case 5 : {
            printf("Apenas Agua. \n");
            break;
        }
        default: {
            printf("Opcao invalida. Tente novamente. \n");
            break;
        }
    }
    
    return 0;
}
