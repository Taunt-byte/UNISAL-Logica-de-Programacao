#include <stdio.h>

int main() {
    int mat[3][3], i, soma=0;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &mat[i][j]);

    for(i=0;i<3;i++)
        soma += mat[i][i];

    printf("Soma da diagonal principal: %d\n", soma);
    return 0;
}
