#include <stdio.h>

int main() {
    int dia;

    // Solicita ao usuário que insira um número de 1 a 7 representando um dia da semana.
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);

    // Utiliza a estrutura de controle 'switch' para exibir o dia da semana correspondente.
    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido. Insira um número de 1 a 7.\n");
    }

    return 0;
}
