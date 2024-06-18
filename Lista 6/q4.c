// Questão 4 - Dada a sequência de números: 3 4 9 2 5 8 2 1 7 4 6 2 9 8 5 1, ordene-a em ordem não
// decrescente segundo os seguintes algoritmos, apresentando a sequência obtida após cada passo do
// algoritmo:
// a. MergeSort
// b. QuickSort
#include <stdio.h>
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
        if (L[i] <= R[j]){
            vet[k] = L[i];
            i++;
        } else {
            vet[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        vet[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        vet[k] = R[j];
        j++;
        k++;
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

int particiona(int *V,int inicio, int fim){
    int dir,esq,pivo,aux;
    esq=inicio;
    dir=fim;
    pivo=V[inicio];

    while(esq<dir){
        while (esq<=fim && V[esq]<=pivo){
            esq++;
        }
        while (dir>=0 && V[dir]>pivo){
            dir--;
        }
        if(esq<dir){
            aux=V[esq];
            V[esq]=V[dir];
            V[dir]=aux;
        }
    }
    V[inicio]=V[dir];
    V[dir]=pivo;
    return dir;
}

void ordena1(int *V,int inicio,int fim){
    int pivo;
    if(fim>inicio){
        pivo=particiona(V,inicio,fim);
        ordena1(V,inicio,pivo-1);
        ordena1(V,pivo+1,fim);
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
    int vet[]={3,4,9,2,5,8,2,1,7,4,6,2,9,8,5,1};
    // for(int i = 0; i < 15; i++){
    //     printf("Digite um número:\n");
    //     scanf("%d", &vet[i]);
    // }
    imprime(vet, 16);
    ordena(vet, 0, 15);
    printf("MergeSort:\n");
    imprime(vet, 16);
    printf("QuickSort:\n");
    ordena1(vet, 0, 15);
    imprime(vet, 16);


    return 0;
}
