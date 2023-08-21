#include <stdio.h>

int main(){
    float salario,aumento;

    printf("Valor salario: ");
    scanf("%f", &salario);

    printf("\nValor do aumento: ");
    scanf("%f", &aumento);

    aumento = aumento / 100;
    salario = salario * aumento + salario;

    printf("Salario Final: %f", salario);
    printf("\nAumento aplicado: %f", aumento);

    return 0;
}
