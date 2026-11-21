#include <stdio.h>

int main() {
    int mat[3][3], i, j, soma=0;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d", &mat[i][j]);

    for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
            soma += mat[i][j];

    printf("Soma dos elementos acima da diagonal principal: %d\n", soma);
    return 0;
}
