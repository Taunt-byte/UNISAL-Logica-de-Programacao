#include <stdio.h>

int main() {
    float A[2][3], B[2][3], C[2][3];
    int i, j;

    // Entrada das matrizes
    printf("Digite os elementos da matriz A (2x3):\n");
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%f", &A[i][j]);

    printf("Digite os elementos da matriz B (2x3):\n");
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%f", &B[i][j]);

    // Soma
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            C[i][j] = A[i][j] + B[i][j];

    // Impressão
    printf("Matriz resultante da soma:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
            printf("%.2f ", C[i][j]);
        printf("\n");
    }
    return 0;
}
