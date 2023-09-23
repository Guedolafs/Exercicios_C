#include <stdio.h>

int main() {
    // Declaração da variável para armazenar o salário atual
    float salarioAtual;

    // Solicita ao usuário que insira o salário atual
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salarioAtual);

    // Calcula o novo salário com aumento de 25%
    float aumento = salarioAtual * 0.25; // 25% é equivalente a 0.25
    float novoSalario = salarioAtual + aumento;

    // Imprime o novo salário
    printf("O novo salário do funcionário com aumento é: %.2f\n\n\n", novoSalario);

    return 0;
}
