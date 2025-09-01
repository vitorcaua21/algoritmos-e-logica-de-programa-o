#include <stdio.h>
#include <math.h>   // Necessário para usar sqrt() (raiz quadrada)

int main() {
    double a, b, hipotenusa;

    printf("Digite os valores dos catetos a e b: ");
    scanf("%lf %lf", &a, &b);   // Lê dois números reais (double)

    hipotenusa = sqrt((a * a) + (b * b));  // Aplica a fórmula: raiz de (a² + b²)

    printf("A hipotenusa eh: %.2lf\n", hipotenusa); // Mostra com 2 casas decimais

    return 0;
}
