#include <stdio.h>

#define MAX_FUNCIONARIOS 100

// Função para inserir informações de um funcionário em um array
int inserirFuncionario(char nomes[][50], char cargo[][50], double salario[], int numFuncionarios){
    if (numFuncionarios > MAX_FUNCIONARIOS){
        printf("Limite de funcionarios alcançados.\n");
        return numFuncionarios;
    }

    printf("Digite o nome do funcionario: ");
    scanf("%s", nomes[numFuncionarios]);

    printf("Digite o cargo do funcionario: ");
    scanf("%s", cargo[numFuncionarios]);

    printf("Digite o salario do funcionario: ");
    scanf("%lf", &salario[numFuncionarios]);

    return numFuncionarios + 1;
}

void mostrarFuncionarios(char nomes[][50], char cargos[][20], double salarios[], int numFuncionarios){
    printf("Funcionarios:\n");
    for(int i = 0; i < numFuncionarios; i++){
        printf("Nome: %s, Cargo: %s, Salario: $.2lf\n", nomes[i], cargos[i], salarios[i]);
    }
}

int main(){
    char nomes[MAX_FUNCIONARIOS][50]; // Array para armazenar os nomes dos funcionários
    char cargos[MAX_FUNCIONARIOS][20]; // Array para armazenar os cargos dos funcionários
    char salarios[MAX_FUNCIONARIOS]; // Array para armazenar os salarios dos funcionários
    int numFuncionarios = 0; // Contador para o número de funcionários inseridos

    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Inserir funcionário\n");
        printf("2. Mostrar funcionários\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Chamar a função inserirFuncionario para adicionar um funcionário ao sistema
                numFuncionarios = inserirFuncionario(nomes, cargos, salarios, numFuncionarios);
                break;
            case 2:
                // Chamar a função mostrarFuncionarios para exibir as informações dos funcionários
                mostrarFuncionarios(nomes, cargos, salarios, numFuncionarios);
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção invalida.\n");
        }
    } while (opcao != 0); // Continuar o loop até que o usuário escolha sair (opção 0)

    return 0;
}