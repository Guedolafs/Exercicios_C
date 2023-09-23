#include <stdio.h>

int main() {
    // Declaração das variáveis
    int anoNasc, anoAtual, anoFuturo;

    //Solicita o ano de nascimento do usuário
    printf("\nDigite o seu ano de nascimento: ");
    scanf("%d", &anoNasc);

    //Calcula a idade do usuário em 2023
    anoAtual = 2023 - anoNasc; 

    //Calcula a idade do usuário daqui 50 anos
    anoFuturo = 2073 - anoNasc ;

    //Imprime a mensagem informando as 2 idades
    printf("Você tem %d anos hoje, e daqui 50 anos você teŕa %d anos.\n\n\n", anoAtual, anoFuturo);

    return 0;
}