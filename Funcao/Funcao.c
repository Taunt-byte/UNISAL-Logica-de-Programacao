#include <stdio.h>

// Declaração da função soma
int soma(int a, int b) {
    return a + b; // Usa os parâmetros recebidos
}

int main() {
    printf("A soma de A + B = %d\n", soma(5, 10)); // Chama a função soma com os valores 5 e 10
    return 0;
}