#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cartela[5][5], i, j, num, existe;

    srand(time(NULL));

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            do {
                existe = 0;
                num = rand() % 100;
                for(int x=0;x<=i;x++)
                    for(int y=0;y<5;y++)
                        if(cartela[x][y] == num) existe = 1;
            } while(existe);
            cartela[i][j] = num;
            printf("%2d ", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}
