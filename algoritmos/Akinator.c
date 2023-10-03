#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int options;

void mamifero() {
    char ops;
    printf("Seu animal é um Mamífero?\n[s] - Sim | [n] - Não");
    scanf(" %c", &ops);

    // Animal mamífero
    if (ops == 's') {
        printf("Seu animal tem quatro patas?\n[s] - Sim | [n] - Não");
        scanf(" %c", &ops);

        // animal quadrúpede
        if (ops == 's') {
            printf("Seu animal é carnívoro?\n[s] - Sim | [n] - Não");
            scanf(" %c", &ops);

            // animal carnívoro
            if (ops == 's') {
                printf("Seu animal é o leão.\n");
            } else if (ops == 'n') {
                printf("Seu animal é herbívoro?\n[s] - Sim | [n] - Não");
                scanf(" %c", &ops);

                // animal herbívoro
                if (ops == 's') {
                    printf("Seu animal é o cavalo.\n");
                } else {
                    printf("Esse animal não existe.\n");
                }
            }
        } else if (ops == 'n') {
            printf("Seu animal é bípede?\n[s] - Sim | [n] - Não");
            scanf(" %c", &ops);

            // animal bípede
            if (ops == 's') {
                printf("Seu animal é onívoro?\n[s] - Sim | [n] - Não");
                scanf(" %c", &ops);

                // Animal onívoro
                if (ops == 's') {
                    printf("Homem.\n");
                } else if (ops == 'n') {
                    printf("Macaco.\n");
                }
            } else if (ops == 'n') {
                printf("Seu animal é voador?\n[s] - Sim | [n] - Não");
                scanf(" %c", &ops);

                // Animal voador
                if (ops == 's') {
                    printf("Seu animal é um morcego.\n");
                } else if (ops == 'n') {
                    printf("Esse animal não existe.\n");
                }
            }
        }
    // animal aquatico
    } else if (ops == 'n') {
        printf("Seu animal é aquático?\n[s] - Sim | [n] - Não\n");
        scanf(" %c", &ops);

        if (ops == 's') {
            printf("Seu animal é uma baleia.\n");
        } else if (ops == 'n') {
            printf("Esse animal não existe.\n");
        }
    } else {
        printf("Opção inválida.\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("[1] - Iniciar | [0] - Sair\n");
    scanf("%d", &options);

    switch (options) {
        case 0:
            printf("Saindo...\n");
            break;
        case 1:
            mamifero();
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
