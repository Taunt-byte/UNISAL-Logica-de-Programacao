#include <stdio.h>

int main() {
    int mat[5][5], i, j;

    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            mat[i][j] = (i == j) ? 1 : 0;

    printf("Matriz 5x5:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
