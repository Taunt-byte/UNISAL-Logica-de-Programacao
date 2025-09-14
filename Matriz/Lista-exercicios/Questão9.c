#include <stdio.h>

int main() {
    int mat[3][3], i, j, soma=0;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d", &mat[i][j]);

    for(i=1;i<3;i++)
        for(j=0;j<i;j++)
            soma += mat[i][j];

    printf("Soma dos elementos abaixo da diagonal principal: %d\n", soma);
    return 0;
}
