// Quest�o 2 - Crie uma fun��o recursiva para calcular a soma 1 + 1/2 + 1/3 +... + 1/n, sendo n ? 0 um
// n�mero natural.
#include <stdio.h>
#include <locale.h>
double rec(int n) {
    if (n == 1)
        return 1;
    else
        return 1.0/n + rec(n-1);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n = 5;
    double res;
    res = rec(n);
    printf("O resultado �: %.2f", res);
    return 0;
}