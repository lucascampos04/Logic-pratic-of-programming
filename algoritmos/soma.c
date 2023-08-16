#include <stdio.h>

int main(){
    double n1 = 0;
    double n2 = 0;

    printf("Numero 1: \n");
    scanf("%lf", &n1);

    printf("Numero 2: \n");
    scanf("%lf", &n2);

    double soma = n1 + n2;

    printf("O resultado da soma é: %lf", soma);

    return 0;
}