#include <stdio.h>

int busca_sequencial(int *vet, int num, int tam) {
    for (int i = 0; i < tam; i++) {
        if (vet[i] == num)
            return i;
    }
    return -1;
}

void ordena(int *vet, int n) {
    int atual, j;
    for (int i = 1; i < n; i++) {
        atual = vet[i];
        for (j = i; j > 0 && (atual < vet[j - 1]); j--) {
            vet[j] = vet[j - 1];
        }
        vet[j] = atual;
    }
}

int busca_binaria(int *vet, int num, int tam) {
    int inicio, meio, final;
    inicio = 0;
    final = tam - 1;

    while (inicio <= final) {
        meio = (inicio + final) / 2;
        if (num < vet[meio])
            final = meio - 1;
        else {
            if (num > vet[meio])
                inicio = meio + 1;
            else
                return meio;
        }
    }
    return -1;
}

void imprime(int *vet, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        if (i == 0)
            printf("%d", vet[i]);
        else
            printf(", %d", vet[i]);
    }
    printf("]\n");
}

int main() {
    int tam = 8;
    int vet[tam];
    int num;
    for (int i = 0; i < tam; i++) {
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }
    printf("Digite o número de busca: ");
    scanf("%d", &num);
    imprime(vet, tam);
    ordena(vet, tam);
    int pos = busca_sequencial(vet, num, tam);
    printf("\n");
    imprime(vet, tam);
    printf("\no número %d está na posição %d\n", num, pos);
    return 0;
}
