#include <stdio.h>

int main() {
    int A[4][4], B[4][4], C[4][4], i, j;

    printf("Digite os elementos da matriz A:\n");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d", &A[i][j]);

    printf("Digite os elementos da matriz B:\n");
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d", &B[i][j]);

    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            C[i][j] = (A[i][j] > B[i][j]) ? A[i][j] : B[i][j];

    printf("Matriz resultante (maiores valores):\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
