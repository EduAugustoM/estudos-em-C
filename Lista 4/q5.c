#include <stdio.h>
#include <locale.h>
void ordena_bubble(int *vetor, int n) {
    int aux;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o %d número: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    ordena_bubble(vetor, n);
    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}