#include <stdio.h>

int main () {
    // Declaração das variáveis
    float tempCelsius, tempFah;

    // Solicita ao usuário a temperatura em Celsius
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &tempCelsius);
    
    // Converte a temperatura de Celsius para Fahrenheit
    tempFah = (tempCelsius * 1.8) + 32;

    // Exibe a temperatura em Fahrenheit para o usuário
    printf("A temperatura convertida para Fahrenheit é de %.1f. \n\n.", tempFah);

    return 0;
}
