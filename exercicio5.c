#include <stdio.h>

int main () {
    // Declaração das variáveis 
    float area, diagonalMenor, diagonalMaior;

    // Solicita ao usuário que insira o valor da diagonal menor
    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &diagonalMenor);

    // Solicita ao usuário que insira o valor da diagonal maior
    printf("Digite o valor da diagonal maior: ");
    scanf("%f", &diagonalMaior);

    // Calcula a aŕea do losangulo
    area = (diagonalMaior * diagonalMenor) / 2;

    //Informa a área do losangulo para o usuário
    printf("O valor da área é %.2f: \n\n", area);

    return 0;
}