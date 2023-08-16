#include <stdio.h>

int main()
{
    // Tipo --------- Tamanho(byte) --------+
    // char               1                 |
    // int                2                 |
    // float              4                 |
    // double             8                 |
    // +------------------------------------+

    // 1 byte = 1.024 megabytes

    char string[100] = "Lucas";
    int inteiro = 10;
    float numeroReal = 1.5f;
    double numero_Real_Com_2x_Mais_Memoria = 3.0;

    // Como imprimir na tela essas variaveis ?

    printf("String: %s \n", string);
    printf("Inteiro: %d \n", inteiro);
    printf("Numero Real: %f \n", numeroReal);
    printf("Numero Real:%f \n", numero_Real_Com_2x_Mais_Memoria);

    // O que signifa essas "%" ?

    printf("| Caractere  | Significado                            |\n");
    printf("|------------|----------------------------------------|\n");
    printf("|   %%d      | Inteiro (decimal)                      |\n");
    printf("|   %%f      | Número de ponto flutuante (float)      |\n");
    printf("|   %%c      | Caractere (char)                       |\n");
    printf("|   %%s      | String (array de caracteres)           |\n");
    printf("|   %%x      | Inteiro hexadecimal                    |\n");
    printf("|   %%o      | Inteiro em base octal                  |\n");
    printf("|   %%p      | Ponteiro                               |\n");
    printf("|   %%e      | Notação científica                     |\n");
    printf("|-----------------------------------------------------|\n");

    return 0;
}