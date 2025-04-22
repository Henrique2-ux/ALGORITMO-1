#include <stdio.h> 
int main(){
    int segmento1, segmento2, segmento3;

    printf("Qual o 1 valor do segmento? \n");
    scanf("%d", &segmento1);

    printf("Qual o 2 valor do segmento? \n ");
    scanf("%d", &segmento2);

    printf("Qual o 3 valor do segmento? \n ");
    scanf("%d", &segmento3);

    if ( (segmento1 + segmento2 > segmento3) && (segmento1 + segmento3 > segmento2) &&  (segmento2 + segmento3 > segmento1)) {

        printf("E um triangulo \n");

    }   if (segmento1 == segmento2 && segmento2 == segmento3){

            printf("E um triangulo Equilatero \n");

        }   else if (segmento1 == segmento2  || segmento2 == segmento3 || segmento3 == segmento1 ) {

            printf("E um triangulo Isosceles \n");

        } else {

            printf ("E um triangulo escaleno. \n");
        }

    return 0;

}
