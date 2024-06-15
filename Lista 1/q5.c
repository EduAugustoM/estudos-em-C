//Escreva um programa que faça a leitura de um valor inteiro (aceitar somente valores
//entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1;

    printf("Digite um número de 1 a 10:\n");
    scanf("%d", &n1);

    if (n1 < 1 || n1 > 10) {
        printf("Número inválido\n");
    } else {
        for (int i = 1; i <= 10; ++i) {
            printf("%d x %d = %d\n", n1, i, n1 * i);
        }
    }

    return 0;
}
