#include <stdio.h>

int main () {
    // Declaração das variáveis
    float salarioMinimo, salarioFuncionario, qtdSalarios;

    // Solicita ao usuário o valor do salário minimo
    printf("Informe o valor do salário minimo: ");
    scanf("%f", &salarioMinimo);

    // Solicita ao usuário o valor do salário dele
    printf("Informe o valor do seu salário: ");
    scanf("%f", &salarioFuncionario);

    //Calcula quantos salários mínimos o funcionário recebe
    qtdSalarios = salarioFuncionario / salarioMinimo;

    //Imprime na tela a quantidade de salários mínimos o funcionário recebe
    printf("Você recebe %.0f sálarios mínimos. \n\n", qtdSalarios);

    return 0;
}