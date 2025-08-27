#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int avaliacoes[40];
    int i , frequencia[40]= {0};

    printf("Notas dos alunos:\n");
    srand(time(NULL));// Inicializa o gerador de numeros aleatorios
    for(i=0; i<40; i++) {// Loop para gerar 40 notas
        avaliacoes[i] = rand() % 11; // Gera notas entre 0 e 10
        printf("%d ", avaliacoes[i]);// Imprime a nota gerada
        frequencia[avaliacoes[i]]++;// Incrementa a frequencia da nota correspondente
    }
    printf("\nFrequencia das notas:\n");
    for(i=0; i<=10; i++) {// Percorre as notas de 0 a 10
        printf("Nota %d: %d ", i, frequencia[i]);// Imprime a frequencia de cada nota
    }
    return 0;
}
