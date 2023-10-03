#include <stdio.h>
#include <locale.h>

// Função para realizar a operação de soma e exibir o resultado.
float soma(float n1, float n2){
    float resultado = n1 + n2;
    printf("Resultado : %.2f", resultado);
    return resultado;
}

// Função para realizar a operação de subtração e exibir o resultado.
float subtracao(float n1, float n2){
    float resultado = n1 - n2;
    printf("Resultado : %.2f", resultado);
    return resultado;
}

// Função para realizar a operação de multiplicação e exibir o resultado.
float multiplicacao(float n1, float n2){
    float resultado = n1 * n2;
    printf("Resultado : %.2f", resultado);
    return resultado;
}

// Função para realizar a operação de divisão e exibir o resultado.
float divisao(float n1, float n2){
    float resultado = n1 / n2;
    printf("Resultado : %.2f", resultado);
    return resultado;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int options;
    float numero1, numero2;

    // Mostra opções para o usuário.
    printf("Soma [1] | Subtração [2] | Multiplicação [3] | Divisão [4]\n");
    printf("Escolha : ");
    scanf("%d", &options);

    switch (options) {
        case 1:
            printf("Numero 1 : ");
            scanf("%f", &numero1); // Lê o valor de 'numero1' a partir do usuário.

            printf("Numero 2 : ");
            scanf("%f", &numero2); // Lê o valor de 'numero2' a partir do usuário.

            soma(numero1, numero2); // Chama a função de soma, passando 'numero1' e 'numero2'.
            break;
        case 2:
            printf("Numero 1 : ");
            scanf("%f", &numero1); // Lê o valor de 'numero1' a partir do usuário.

            printf("Numero 2 : ");
            scanf("%f", &numero2); // Lê o valor de 'numero2' a partir do usuário.

            subtracao(numero1, numero2); // Chama a função de subtração, passando 'numero1' e 'numero2'.
            break;
        case 4:
            printf("Numero 1 : ");
            scanf("%f", &numero1); // Lê o valor de 'numero1' a partir do usuário.

            printf("Numero 2 : ");
            scanf("%f", &numero2); // Lê o valor de 'numero2' a partir do usuário.

            divisao(numero1, numero2); // Chama a função de divisão, passando 'numero1' e 'numero2'.
            break;

        default:
            printf("Número inválido. Insira um número de 1 a 4.\n");
            break;
    }

    return 0;
}

// Uma função é um bloco de código reutilizável que executa uma tarefa específica.
// No código acima, definimos quatro funções (soma, subtracao, multiplicacao e divisao)
// para realizar operações matemáticas diferentes. Isso ajuda a manter o código organizado
// e facilita a reutilização de código em várias partes do programa.