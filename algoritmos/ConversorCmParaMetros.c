#include <stdio.h>

int main() {
    int centimetros = 0;
    double metros = 0.0;

    printf("Os centimetros so podem ser do numero 1 ao 9\n");
    printf("-------------------------------------------\n");

    printf("Centimetros: ");
    scanf("%d", &centimetros);

    while (centimetros < 1 || centimetros > 9) {
        printf("Erro!!! Tente novamente\n");
        printf("Centimetros: ");
        scanf("%d", &centimetros);
    }

    metros = centimetros * 0.01;
    printf("Resultado em metros: %lf\n", metros);

    return 0;
}
