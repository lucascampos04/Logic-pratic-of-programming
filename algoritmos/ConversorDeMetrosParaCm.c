#include <stdio.h>

int main(){
    double centimetros = 0.0;
    double metros = 0.0;

    printf("Conversor de metros para centimetros\\n");
    printf("Os metros só podem estar no intervalo de 1 a 9\n");
    printf("-------------------------------------------------\n");
    printf("Metros: ");
    scanf("%lf", &metros);

    while(metros < 1 || metros > 9){
        printf("Erro, tente novamente");
        printf("Os metros só podem estar no intervalo de 1 a 9\n");
        printf("Metros: ");
        scanf("%lf", &metros);
    }

    centimetros = metros * 100;
    printf("Resultado em centimetros: %lf", centimetros);

    return 0;
}