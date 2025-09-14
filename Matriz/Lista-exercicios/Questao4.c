#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float mat[100][100], max, min, soma=0;
    int i, j, linMax, colMax, linMin, colMin;

    srand(time(NULL));

    // Preencher matriz
    for(i=0;i<100;i++)
        for(j=0;j<100;j++){
            mat[i][j] = (float)rand() / RAND_MAX;
            soma += mat[i][j];
        }

    max = mat[0][0];
    min = mat[0][0];
    linMax = colMax = linMin = colMin = 0;

    // Encontrar máximo e mínimo
    for(i=0;i<100;i++)
        for(j=0;j<100;j++){
            if(mat[i][j] > max){
                max = mat[i][j];
                linMax = i; colMax = j;
            }
            if(mat[i][j] < min){
                min = mat[i][j];
                linMin = i; colMin = j;
            }
        }

    printf("Max: %.4f na posicao [%d][%d]\n", max, linMax, colMax);
    printf("Min: %.4f na posicao [%d][%d]\n", min, linMin, colMin);
    printf("Valor medio da matriz: %.4f\n", soma/(100*100));

    return 0;
}
