#include <stdio.h>
#include <locale.h>
void ordena_selection(int *vetor, int n) {
    int aux, menor;
    for (int i = 0; i < n; i++) {
        menor = i;
        for (int j = i + 1; j < n; j++) {
            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
    }
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    ordena_selection(vetor, n);
    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}