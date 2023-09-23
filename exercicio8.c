#include <stdio.h>

int main () {
    //Declara as variáveis
    float pesoPessoa, pesoEngordar, pesoEmagrecer;

    //Solicita ao usuário o seu peso
    printf("Digite o seu peso: ");
    scanf("%f", pesoPessoa);

    //Calcula o peso da pessoa se engordar 15% ou emagrecer 20%
    pesoEngordar = pesoPessoa * 0.15;
    pesoEmagrecer = pesoPessoa * 0.20;

    //Imprime os pesos corretos
    printf("O seu peso é %f. Caso você engordar 0.15x o seu peso passa a ser %f, e caso você emagreça 0.20x seu peso passa a ser %f \n\n.", pesoPessoa, pesoEngordar, pesoEmagrecer);

    return 0;
}