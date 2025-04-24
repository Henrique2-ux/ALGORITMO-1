#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    char continuar;

    do {
        printf("\nDigite o que deseja fazer: \n");
        printf("1 - Apresentar dois pontos que representam x e y\n");
        printf("2 - Apresentar 3 numeros inteiros sendo A, B e C\n");
        printf("3 - Calcular sua idade em anos, meses e dias\n");
        printf("4 - Inserir as 3 notas do estudante\n");
        printf("5 - Inserir 3 valores reais\n");
        printf("6 - Inserir 2 valores inteiros\n");
        printf("7 - Inserir o id, suas 3 notas e a media\n");
        printf("8 - Inserir a Altura e genero do usuario\n");
        printf("9 - Inserir o horario inicial e final de um jogo\n");
        printf("10 - Apresentar um conjunto de 4 numeros inteiros\n");
        printf("11 - Apresentar um valor real\n");
        printf("12 - Apresentar 10 valores inteiros\n");
        printf("13 - Apresentar 4 caracteres\n");
        printf("14 - Apresentar 2 numeros inteiros, 1 numero real e 3 caracteres\n");
        printf("15 - Verificar se um número é par ou ímpar\n");
        printf("16 - Calcular área de um círculo\n");
        printf("17 - Verificar se um número é positivo, negativo ou zero\n");
        printf("18 - Calcular o fatorial de um número\n");
        printf("19 - Verificar se um ano é bissexto\n");
        printf("20 - Calcular o IMC de uma pessoa\n");
        printf("21 - Verificar se três valores formam um triângulo válido\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int x, y;
                printf("Digite dois pontos (x e y): ");
                scanf("%d %d", &x, &y);
                printf("Pontos digitados: (%d, %d)\n", x, y);
                break;
            }
            case 2: {
                int A, B, C;
                printf("Digite três números inteiros: ");
                scanf("%d %d %d", &A, &B, &C);
                printf("A = %d, B = %d, C = %d\n", A, B, C);
                break;
            }
            case 3: {
                int idade;
                printf("Digite sua idade em anos: ");
                scanf("%d", &idade);
                printf("Anos: %d, Meses: %d, Dias: %.0f\n", idade, idade * 12, idade * 365.25);
                break;
            }
            case 4: {
                float n1, n2, n3;
                printf("Digite 3 notas: ");
                scanf("%f %f %f", &n1, &n2, &n3);
                printf("Media: %.2f\n", (n1 + n2 + n3) / 3);
                break;
            }
            case 5: {
                float a, b, c;
                printf("Digite 3 valores reais: ");
                scanf("%f %f %f", &a, &b, &c);
                printf("Valores: %.2f, %.2f, %.2f\n", a, b, c);
                break;
            }
            case 6: {
                int a, b;
                printf("Digite 2 inteiros: ");
                scanf("%d %d", &a, &b);
                printf("Valores: %d, %d\n", a, b);
                break;
            }
            case 7: {
                int id;
                float n1, n2, n3;
                printf("ID: ");
                scanf("%d", &id);
                printf("Notas: ");
                scanf("%f %f %f", &n1, &n2, &n3);
                printf("Media do ID %d: %.2f\n", id, (n1 + n2 + n3) / 3);
                break;
            }
            case 8: {
                float altura;
                char genero;
                printf("Digite a altura: ");
                scanf("%f", &altura);
                printf("Genero (M/F): ");
                scanf(" %c", &genero);
                printf("Altura: %.2f, Gênero: %c\n", altura, genero);
                break;
            }
            case 9: {
                int inicio, fim;
                printf("Horario inicial e final: ");
                scanf("%d %d", &inicio, &fim);
                printf("Duração: %d horas\n", fim - inicio);
                break;
            }
            case 10: {
                int v[4];
                printf("Digite 4 inteiros: ");
                for (int i = 0; i < 4; i++) scanf("%d", &v[i]);
                printf("Valores: %d %d %d %d\n", v[0], v[1], v[2], v[3]);
                break;
            }
            case 11: {
                float val;
                printf("Digite um valor real: ");
                scanf("%f", &val);
                printf("Valor: %.2f\n", val);
                break;
            }
            case 12: {
                int v[10];
                printf("Digite 10 inteiros: ");
                for (int i = 0; i < 10; i++) scanf("%d", &v[i]);
                for (int i = 0; i < 10; i++) printf("%d ", v[i]);
                printf("\n");
                break;
            }
            case 13: {
                char c1, c2, c3, c4;
                printf("Digite 4 caracteres: ");
                scanf(" %c %c %c %c", &c1, &c2, &c3, &c4);
                printf("Caracteres: %c %c %c %c\n", c1, c2, c3, c4);
                break;
            }
            case 14: {
                int a, b;
                float r;
                char x, y, z;
                printf("Digite 2 inteiros, 1 real e 3 caracteres: ");
                scanf("%d %d %f %c %c %c", &a, &b, &r, &x, &y, &z);
                printf("Valores: %d, %d, %.2f, %c, %c, %c\n", a, b, r, x, y, z);
                break;
            }
            case 15: {
                int n;
                printf("Digite um número inteiro: ");
                scanf("%d", &n);
                printf("%d é %s\n", n, (n % 2 == 0) ? "par" : "ímpar");
                break;
            }
            case 16: {
                float raio;
                printf("Digite o raio do círculo: ");
                scanf("%f", &raio);
                printf("Área: %.2f\n", 3.14159 * raio * raio);
                break;
            }
            case 17: {
                int n;
                printf("Digite um número: ");
                scanf("%d", &n);
                if (n > 0) printf("Positivo\n");
                else if (n < 0) printf("Negativo\n");
                else printf("Zero\n");
                break;
            }
            case 18: {
                int n, fat = 1;
                printf("Digite um número para calcular o fatorial: ");
                scanf("%d", &n);
                for (int i = 2; i <= n; i++) fat *= i;
                printf("Fatorial de %d é %d\n", n, fat);
                break;
            }
            case 19: {
                int ano;
                printf("Digite um ano: ");
                scanf("%d", &ano);
                if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
                    printf("Ano bissexto\n");
                else
                    printf("Ano não bissexto\n");
                break;
            }
            case 20: {
                float peso, altura;
                printf("Digite peso (kg) e altura (m): ");
                scanf("%f %f", &peso, &altura);
                float imc = peso / (altura * altura);
                printf("IMC: %.2f\n", imc);
                break;
            }
            case 21: {
                int a, b, c;
                printf("Digite três lados de um triângulo: ");
                scanf("%d %d %d", &a, &b, &c);
                if (a + b > c && a + c > b && b + c > a)
                    printf("Triângulo válido\n");
                else
                    printf("Não é um triângulo válido\n");
                break;
            }
            default:
                printf("Opção inválida.\n");
        }

        printf("\nDeseja continuar? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    return 0;
}
