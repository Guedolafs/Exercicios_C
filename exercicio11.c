#include <stdio.h>

int main() {
    // Declaração da variável para armazenar o número fornecido pelo usuário
    int numero;

    // Solicita ao usuário o número para a tabuada
    printf("Informe um número: ");
    scanf("%d", &numero);

    // Calcula e exibe a tabuada de multiplicação
    printf("Tabuada de %d:\n", numero);
    
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
