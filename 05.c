#include <stdio.h>

int main() {
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);   // O espaço antes do %c evita problemas de leitura

    // A diferença entre maiúscula e minúscula na tabela ASCII é 32
    minuscula = maiuscula + 32;

    printf("A letra minuscula eh: %c\n", minuscula);

    return 0;
}
