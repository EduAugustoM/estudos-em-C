// Questão 1 - Usando soma e subtração, crie uma função recursiva para calcular o produto de dois
// números naturais m e n.
#include <stdio.h>

int mult(int m, int n) {
    if (n == 0)
        return 0;
    else
        return m + mult(m, n-1);
}

int main() {
    int m = 7;
    int n = 5;
    int res;

    res = mult(m, n);
    printf("%d * %d = %d\n", m, n, res);

    return 0;
}