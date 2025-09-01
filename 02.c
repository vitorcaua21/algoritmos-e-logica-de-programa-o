#include <stdio.h>

int main() {
    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);   // Lê o número digitado

    // Sucessor do triplo: (3 * n + 1)
    // Antecessor do dobro: (2 * n - 1)
    resultado = (3 * n + 1) + (2 * n - 1);

    printf("O resultado eh: %d\n", resultado);

    return 0;
}
