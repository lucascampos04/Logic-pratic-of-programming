#include <stdio.h>

int main(){
    int n1;
    int n2;

    printf("Numero 1: \n");
    scanf("%d", &n1);

    printf("Numero 2: \n");
    scanf("%i", &n2);

    int soma = n1 + n2;

    printf("O resultado da soma é: %d", soma);

    return 0;
}