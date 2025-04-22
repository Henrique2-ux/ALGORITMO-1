#include <stdio.h>
int main (){

    int opcao;

    printf(" \n MENU \n 1 - ( Macarrao ) \n 2 - ( Arroz e Feijao ) \n 3 - ( Bife acebolado ) \n 4 - ( Salada ) \n 5 - ( So agua ) \n Qual sera seu pedido? \n ");
    scanf("%d" , &opcao);

    switch(opcao){

        case 1 : {
            int subopcao; 
            printf("Qual sera o molho? \n");
            printf("1 - (Molho vermelho)");
            printf("2 - (molho branco)\n");
            scanf("%d", &subopcao);

            if(subopcao == 1){
                printf(" voce pediu Macarrao com molho vermelho. \n");
            }   
            else if (subopcao == 2){
                printf(" voce pediu Macarrao com molho branco. \n");
            }
             break;
        }
        case 2 :{
            printf(" voce pediu Arroz e Feijao. \n");
            break;
        }
        case 3 :{
            printf(" voce pediu Bife Acebolado. \n");
            break;
        }
        case 4 :{
            int subopcao2;
            printf("Qual tipo de salada?\n 1 - (Tomate e Alface) \n 2 - (Salada Completa)\n");
            scanf("%d", subopcao2);

            if(subopcao2 == 1){

                printf(" voce pediu Salada apenas com Tomate e Alface. \n");

             } 
             else if (subopcao2 == 2){

                printf("voce pediu Salada Completa. \n");

             }
            break;
        }
        case 5 :{

            printf("Apenas Agua. \n");

        }
    }
    
    return 0;
}