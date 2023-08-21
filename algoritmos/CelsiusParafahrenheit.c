#include <stdio.h>

int main(){
    float c, f;

    printf("Conversor de Graus Celsius para fahrenheit");

    printf("\nGraus celsius: ");
    scanf("%f", &c);;

    f = (c * 9 / 5) + 32;

    printf("\nConversão: %f", f, "F");


    return 0;
}