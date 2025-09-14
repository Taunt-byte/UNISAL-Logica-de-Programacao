#include <stdio.h>

int main() {
    int mat[3][3], vetor[3] = {0,0,0}, i, j;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d", &mat[i][j]);

    for(j=0;j<3;j++)
        for(i=0;i<3;i++)
            vetor[j] += mat[i][j];

    printf("Vetor soma das colunas: ");
    for(i=0;i<3;i++)
        printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}
