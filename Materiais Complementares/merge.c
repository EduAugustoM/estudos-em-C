#include <stdio.h>

int comparacoes = 0;
int trocas = 0;

void merge(int vet[], int inicio, int meio, int fim){
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = vet[inicio + i];
    for (j = 0; j < n2; j++)
        R[j] = vet[meio + 1 + j];
    i = 0;
    j = 0;
    k = inicio;
    while (i < n1 && j < n2){
        comparacoes++;
        if (L[i] <= R[j]){
            vet[k] = L[i];
            i++;
        } else {
            vet[k] = R[j];
            j++;
        }
        trocas++;
        k++;
    }

    while (i < n1){
        vet[k] = L[i];
        i++;
        k++;
        trocas++;
    }
    while (j < n2){
        vet[k] = R[j];
        j++;
        k++;
        trocas++;
    }
}

void ordena(int vet[], int inicio, int fim){
    if (inicio < fim){
        int meio = inicio + (fim - inicio) / 2;

        ordena(vet, inicio, meio);
        ordena(vet, meio + 1, fim);
        merge(vet, inicio, meio, fim);
    }
}

void imprime(int *vet, int n){
    printf("[");
    for(int i = 0; i < n; i++){
        if(i == 0)
            printf("%d", vet[i]);
        else
            printf(", %d", vet[i]);
    }
    printf("]\n");
}

int main(){
    int vet[7];
    for(int i = 0; i < 7; i++){
        printf("Digite um número:\n");
        scanf("%d", &vet[i]);
    }
    imprime(vet, 7);
    ordena(vet, 0, 6);
    imprime(vet, 7);
    printf("Número de comparações: %d\n", comparacoes);
    printf("Número de trocas: %d\n", trocas);

    return 0;
}

//23,4,-8,3,67,53,21 - 11 comparações e 20 trocas
//desempenho = n log(n)