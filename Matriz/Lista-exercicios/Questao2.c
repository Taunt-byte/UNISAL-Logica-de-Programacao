#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int mat[10][10], i, j, num, count=0;
    srand(time(NULL));

    // Preencher matriz aleatória
    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
            mat[i][j] = rand() % 10;

    // Mostrar matriz
    printf("Matriz gerada:\n");
    for(i=0;i<10;i++){
        for(j=0;j<10;j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    printf("Digite um numero de 0 a 9: ");
    scanf("%d", &num);

    // Contar ocorrências e posições
    printf("Posicoes do numero %d:\n", num);
    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
            if(mat[i][j] == num){
                printf("Linha %d, Coluna %d\n", i, j);
                count++;
            }

    printf("O numero %d aparece %d vezes.\n", num, count);
    return 0;
}
