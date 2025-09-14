#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1; // Caso base: fatorial de 0 é 1
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}