#include <stdio.h>

int main() {
    int nota;

    // Solicita ao usuário que insira sua nota e a armazena na variável 'nota'.
    printf("Digite a sua nota (0-1 000): ");
    scanf("%d", &nota);

    // Utiliza a estrutura de controle condicional "else if" para avaliar a nota.
    if (nota >= 90) {
        printf("Sua nota é A\n"); // Se a nota for maior ou igual a 90, imprime "A".
    } else if (nota >= 80) {
        printf("Sua nota é B\n"); // Se a nota for maior ou igual a 80, imprime "B".
    } else if (nota >= 70) {
        printf("Sua nota é C\n"); // Se a nota for maior ou igual a 70, imprime "C".
    } else if (nota >= 60) {
        printf("Sua nota é D\n"); // Se a nota for maior ou igual a 60, imprime "D".
    } else {
        printf("Sua nota é F\n"); // Se nenhuma das condições acima for atendida, imprime "F".
    }

    return 0;
}
