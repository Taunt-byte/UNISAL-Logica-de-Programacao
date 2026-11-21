
/*
 * @file exemplo1.c
 * @brief Demonstração de ponteiros e acesso à memória em C.
 * @author Lucas Neves da Silva
 * @date 15/11/2026
 *
 * OBJETIVO:
 * Demonstrar como utilizar ponteiros para acessar uma variável
 * por meio do seu endereço de memória.
 *
 * CONCEITOS ESTUDADOS:
 * - Declaração de variáveis inteiras.
 * - Declaração de ponteiros.
 * - Operador de endereço (&).
 * - Operador de desreferência (*).
 * - Associação entre uma variável e um ponteiro.
 * - Impressão de endereços e valores utilizando printf().
 *
 * OBSERVAÇÃO:
 * Em C, os argumentos de funções são passados por valor.
 * Quando utilizamos ponteiros, podemos passar o endereço de uma
 * variável, permitindo que a função acesse e modifique seu valor.
 */

#include <stdio.h> // Biblioteca necessária para utilizar printf().

/*
 * FUNÇÃO PRINCIPAL
 *
 * A função main() é o ponto de entrada do programa.
 * É nela que as instruções serão executadas.
 */
int main() {

    // =========================================================
    // 1. DECLARAÇÃO DAS VARIÁVEIS
    // =========================================================

    int a;
    /*
     * Declara uma variável do tipo inteiro.
     *
     * Neste momento, a variável ainda não recebeu um valor
     * inicial definido pelo programador.
     *
     * A variável 'a' possui um espaço reservado na memória
     * para armazenar um número inteiro.
     */

    int *aPtr;
    /*
     * Declara um ponteiro para inteiro.
     *
     * O asterisco (*) indica que aPtr é uma variável
     * capaz de armazenar o endereço de uma variável inteira.
     *
     * IMPORTANTE:
     * aPtr não armazena diretamente o número inteiro.
     * Ele armazena um endereço de memória.
     */

    // =========================================================
    // 2. ATRIBUIÇÃO DE VALORES
    // =========================================================

    a = 7;
    /*
     * Atribui o valor 7 à variável 'a'.
     *
     * Agora:
     * - O conteúdo de 'a' é 7.
     * - A variável possui um endereço próprio na memória.
     */

    aPtr = &a;
    /*
     * O operador & (E comercial) obtém o endereço de memória
     * de uma variável.
     *
     * Portanto:
     *
     * &a = endereço de memória da variável 'a'.
     *
     * Esse endereço é armazenado dentro do ponteiro aPtr.
     *
     * Agora, aPtr aponta para a variável 'a'.
     *
     * Podemos representar a relação assim:
     *
     * aPtr --------> a
     *                7
     *
     * O ponteiro não recebe o valor 7.
     * Ele recebe o endereço onde o valor 7 está armazenado.
     */

    // =========================================================
    // 3. EXIBIÇÃO DOS ENDEREÇOS DE MEMÓRIA
    // =========================================================

    printf("O endereco de a e %p\n"
           "o valor de aPtr e %p \n\n", &a, (void *)aPtr);

    /*
     * Vamos analisar esse printf() por partes.
     *
     * %p:
     * Especificador de formato utilizado para exibir
     * um endereço de memória.
     *
     * &a:
     * Obtém o endereço da variável 'a'.
     *
     * (void *)aPtr:
     * Converte o ponteiro para void*, tipo apropriado
     * para ser passado ao especificador %p.
     *
     * Como aPtr recebeu o endereço de 'a', os dois
     * endereços apresentados devem corresponder.
     *
     * Exemplo ilustrativo:
     *
     * O endereco de a e 0x7ffd1234
     * o valor de aPtr e 0x7ffd1234
     *
     * ATENÇÃO:
     * O endereço real será diferente em cada execução
     * e depende do ambiente e da organização da memória.
     */

    // =========================================================
    // 4. EXIBIÇÃO DOS VALORES
    // =========================================================

    printf("O valor de a e %d\n"
           "o valor de *aPtr e %d \n\n", a, *aPtr);

    /*
     * %d:
     * Especificador utilizado para exibir números inteiros.
     *
     * a:
     * Acessa diretamente o conteúdo da variável.
     *
     * *aPtr:
     * O operador * realiza a DESREFERÊNCIA do ponteiro.
     *
     * Isso significa que o programa acessa o conteúdo
     * armazenado no endereço para o qual aPtr aponta.
     *
     * Como aPtr aponta para 'a', temos:
     *
     * a      = 7
     * *aPtr  = 7
     *
     * Os dois representam o mesmo conteúdo armazenado
     * na variável original.
     */

    // =========================================================
    // 5. DEMONSTRAÇÃO DOS OPERADORES & E *
    // =========================================================

    printf("Sabendo que * e & complementam-se mutuamente."
           "\n&*aPtr = %p\n*&aPtr = %p \n",
           (void *)&*aPtr, (void *)*&aPtr);

    /*
     * Vamos entender as duas expressões:
     *
     * PRIMEIRA EXPRESSÃO: &*aPtr
     *
     * 1. *aPtr:
     *    Acessa o conteúdo da variável apontada por aPtr.
     *
     * 2. &*aPtr:
     *    Obtém o endereço desse conteúdo.
     *
     * Como aPtr aponta para 'a', o resultado equivale
     * ao endereço de 'a'.
     *
     * Portanto:
     * &*aPtr == aPtr
     *
     * SEGUNDA EXPRESSÃO: *&aPtr
     *
     * 1. &aPtr:
     *    Obtém o endereço da própria variável ponteiro.
     *
     * 2. *&aPtr:
     *    Desreferencia esse endereço, recuperando
     *    o próprio conteúdo da variável aPtr.
     *
     * Portanto:
     * *&aPtr == aPtr
     *
     * IMPORTANTE:
     * Não confunda &aPtr com &a!
     *
     * &aPtr = endereço da variável ponteiro.
     * &a    = endereço da variável inteira.
     *
     * São endereços diferentes.
     */

    // =========================================================
    // 6. FINALIZAÇÃO DO PROGRAMA
    // =========================================================

    return 0;
    /*
     * Retorna o valor 0 ao sistema operacional.
     *
     * Convencionalmente, significa que o programa
     * terminou sua execução sem indicar erros.
     */
}
