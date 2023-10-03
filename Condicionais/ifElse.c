#include <stdio.h>


int main(){
    // if = se
    // else = se não

    int idade;
    printf("Idade :");
    scanf("%d", &idade);

    // se o valor da variavel 'idade' for maior que 18 o printf dentro do if será exibido no terminal.
    // se não, o printf de dentro do else sera imprimido

    if (idade >= 18){
        printf("Você tem mais de 18 anos");
    } else{
        printf("Você tem menos de 18 anos");
    }


    return 0;
}