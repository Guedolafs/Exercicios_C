#include <stdio.h>
#include <math.h>

int main() {
    // Declaração da variável para armazenar o raio
    float raio;

    // Solicita ao usuário o valor do raio
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    // Calcula o comprimento da esfera
    float comprimento = 2 * M_PI * raio;

    // Calcula a área da esfera
    float area = M_PI * pow(raio, 2);

    // Calcula o volume da esfera
    float volume = (3.0 / 4.0) * M_PI * pow(raio, 3);

    // Exibe os resultados
    printf("Comprimento da esfera: %.2f\n", comprimento);
    printf("Área da esfera: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
