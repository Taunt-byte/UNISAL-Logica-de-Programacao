#include <stdio.h>

int main() {
    int M, i, j;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &M);

    int mat[M][M], transposta[M][M];

    printf("Digite os elementos da matriz:\n");
    for(i=0;i<M;i++)
        for(j=0;j<M;j++)
            scanf("%d", &mat[i][j]);

    // Transposta
    for(i=0;i<M;i++)
        for(j=0;j<M;j++)
            transposta[j][i] = mat[i][j];

    // Imprimir transposta
    printf("Matriz transposta:\n");
    for(i=0;i<M;i++){
        for(j=0;j<M;j++)
            printf("%d ", transposta[i][j]);
        printf("\n");
    }

    return 0;
}
