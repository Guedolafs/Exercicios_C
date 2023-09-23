#include <stdio.h>
#include <math.h>

int main() {
    // Declare as variáveis para os catetos e a hipotenusa
    double a, b, c;

    // Receba os valores dos catetos do usuário
    printf("Digite o valor do primeiro cateto: ");
    scanf("%lf", &a);

    printf("Digite o valor do segundo cateto: ");
    scanf("%lf", &b);

    // Calcule a hipotenusa usando o Teorema de Pitágoras
    c = sqrt(a*a + b*b);
    

    // Apresente o valor da hipotenusa
    printf("O valor da hipotenusa (c) é: %.2lf. \n\n", c);

    return 0;
}
