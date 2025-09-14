#include <stdio.h>

int main(){
    int vetor[5] = {10, 20, 30, 40, 50};
    printf("Elementos do vetor:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}