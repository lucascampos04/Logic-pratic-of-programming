#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nameOffice[50];
    float salary;
    int optionsoffice = 0;
    float newSallaryBonusApplied;

    printf("Nome Funcionario : ");
    scanf("%s", nameOffice);

    printf("Salario: ");
    scanf("%f", &salary);

    printf("%s, tem os seguintes bonus disponiveis:\n", nameOffice);
    printf("[1] - Aumento de 10%%\n");
    printf("[2] - Se promovido a Senior\n");

    scanf("%d", &optionsoffice);

    switch (optionsoffice) {
        case 1:
            newSallaryBonusApplied = salary + (salary * 0.10);
            printf("Novo salario : %.2f\n", newSallaryBonusApplied);
            break;
        case 2:
            printf("%s foi promovido de pleno para senior.\n", nameOffice);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    system("pause");

    return 0;
}
