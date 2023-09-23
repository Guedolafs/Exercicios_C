#include <stdio.h>

int main() {
    // Declaração do vetor para armazenar as notas
    float notas[3];

    // Solicita ao usuário que insira as notas usando um loop for
    for (int i = 0; i < 3; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Calcula a soma das notas
    float soma = 0.0;
    for (int i = 0; i < 3; i++) {
        soma += notas[i];
    }

    // Calcula a média
    float media = soma / 3;

    // Imprime a média
    printf("Média das notas: %.2f\n", media);

    return 0;
}
