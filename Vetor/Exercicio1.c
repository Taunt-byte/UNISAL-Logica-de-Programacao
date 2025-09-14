/* Pedimos a 40 alunos que avaliassem a comida da cantina
e dessem notas que fossem de 1 a 10 (1 significa horrorosa
e 10 excelente). Coloque as 40 respostas em um array de
inteiros e resuma os resultados da pesquisa. */

#include <stdio.h>

int main(){
    int respostas[] = { 1, 2, 6, 4, 8,
5, 9, 7, 8, 10,
1, 6, 3, 8, 6,
10, 3, 8, 2, 7,
6, 5, 7, 6, 8,
6, 7, 5, 6, 6,
5, 6, 7, 5, 4,
8, 6, 8, 10, 6};
    int total = 0;
    float media;
    int maior = respostas[0];
    int menor = respostas[0];

    for(int i = 0; i < 40; i++){
        total += respostas[i];
        if(respostas[i] > maior){
            maior = respostas[i];
        }
        if(respostas[i] < menor){
            menor = respostas[i];
        }
    }

    media = total / 40.0;

    printf("Total de respostas: %d\n", total);
    printf("Media das respostas: %.2f\n", media);
    printf("Maior nota: %d\n", maior);
    printf("Menor nota: %d\n", menor);

    return 0;
}