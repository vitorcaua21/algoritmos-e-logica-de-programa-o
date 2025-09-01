#include <stdio.h>   // Biblioteca para entrada e saída de dados

int main() {
    int a, b, c;          // Variáveis para guardar os 3 números
    int resultado;        // Variável para guardar a soma dos quadrados

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);   // Lê os 3 números digitados

    resultado = (a * a) + (b * b) + (c * c);  // Calcula a soma dos quadrados

    printf("A soma dos quadrados eh: %d\n", resultado); // Mostra o resultado

    return 0;  // Indica que o programa terminou bem
}
