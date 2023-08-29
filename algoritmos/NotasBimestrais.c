#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float notas[4];
    float media = 0;
    int i;

    for (i = 0; i < 4; i++){
        printf("Nota %d : \n", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media /= 4;

    for (i = 0; i < 4; i++) {
        printf("Nota %d : %.2f\n", i+1, notas[i]);
    }

    if (media > 8){
        printf("APROVADO!\n");
        return 0;
    }
    printf("REPROVADO!\n");


    system("pause");
    return 0;
}