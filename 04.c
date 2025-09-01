#include <stdio.h>

int main() {
    double total = 780000.00;   // Valor total do prêmio
    double g1, g2, g3;

    g1 = total * 0.46;          // 46% para o primeiro
    g2 = total * 0.32;          // 32% para o segundo
    g3 = total - (g1 + g2);     // O restante vai para o terceiro

    printf("Primeiro ganhador: R$ %.2lf\n", g1);
    printf("Segundo ganhador: R$ %.2lf\n", g2);
    printf("Terceiro ganhador: R$ %.2lf\n", g3);

    return 0;
}
