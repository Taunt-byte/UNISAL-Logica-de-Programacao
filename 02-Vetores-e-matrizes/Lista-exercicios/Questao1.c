
/*
* @file Questao1.c
* @brief Programa para calcular a soma de duas matrizes reais de dimensão 2x3.
* @author Lucas Neves da Silva
* @date 15/11/2026
*
* Este programa demonstra como declarar, preencher, manipular e imprimir matrizes
* bidimensionais em linguagem C. São utilizadas duas matrizes de entrada (A e B)
* e uma terceira matriz (C) para armazenar o resultado da soma dos elementos
* correspondentes.
*/

#include <stdio.h> // Biblioteca responsável pelas funções de entrada e saída.

/* Função principal do programa */
int main() {

    // Declaração de três matrizes reais (float) com 2 linhas e 3 colunas.
    // A e B armazenam os valores informados pelo usuário.
    // C armazena o resultado da soma entre as duas matrizes.
    float A[2][3], B[2][3], C[2][3];

    // Declaração das variáveis de controle dos laços de repetição.
    // i representa o índice das linhas e j representa o índice das colunas.
    int i, j;

    // Solicita ao usuário os elementos que irão compor a matriz A.
    printf("Digite os elementos da matriz A (2x3):\n");

    // Primeiro laço percorre as duas linhas da matriz A.
    for(i = 0; i < 2; i++)

        // Segundo laço percorre as três colunas de cada linha.
        for(j = 0; j < 3; j++)

            // Recebe um número real e armazena na posição A[i][j].
            // O operador & fornece o endereço de memória da posição.
            scanf("%f", &A[i][j]);

    // Solicita ao usuário os elementos que irão compor a matriz B.
    printf("Digite os elementos da matriz B (2x3):\n");

    // Percorre todas as linhas e colunas da matriz B.
    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)

            // Lê um número real e armazena na posição correspondente da matriz B.
            scanf("%f", &B[i][j]);

    // Realiza a soma dos elementos correspondentes das matrizes A e B.
    // O resultado de cada operação é armazenado na matriz C.
    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)

            // Soma os elementos da mesma posição nas matrizes A e B.
            // Exemplo: C[0][0] = A[0][0] + B[0][0].
            C[i][j] = A[i][j] + B[i][j];

    // Exibe uma mensagem antes de apresentar a matriz resultante.
    printf("Matriz resultante da soma:\n");

    // Percorre todas as linhas da matriz C para imprimir os resultados.
    for(i = 0; i < 2; i++) {

        // Percorre as três colunas da linha atual.
        for(j = 0; j < 3; j++)

            // Imprime o elemento da posição atual com duas casas decimais.
            printf("%.2f ", C[i][j]);

        // Quebra a linha após imprimir os três elementos,
        // mantendo a organização visual da matriz.
        printf("\n");
    }

    // Finaliza a execução do programa indicando que ocorreu tudo corretamente.
    return 0;
}
