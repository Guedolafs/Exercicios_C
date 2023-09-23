#include <stdio.h>

int main() {
    // Declaração das variáveis
    float cotacaoDolar, valorDolar, valorReais;

    // Solicita ao usuário a cotação do dólar em reais
    printf("Digite a cotação do dólar em reais: ");
    scanf("%f", &cotacaoDolar);

    // Solicita ao usuário o valor em dólares
    printf("Digite o valor em dólares: ");
    scanf("%f", &valorDolar);

    // Calcula o valor em reais
    valorReais = cotacaoDolar * valorDolar;

    // Imprime o valor em reais
    printf("O valor em reais é: %.2f\n\n\n", valorReais);

    return 0;
}
