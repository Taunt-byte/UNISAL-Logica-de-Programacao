#include <stdio.h>

// Declaração da função soma
int soma(int a, int b) {
    return a + b; // Usa os parâmetros recebidos
}

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &a, &b); // Lê os valores de A e B do usuário
    printf("A soma de A + B = %d\n", soma(a, b)); // Chama a função soma com os valores lidos
    return 0;
}