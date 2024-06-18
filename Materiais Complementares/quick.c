#include <stdio.h>

int comparacoes = 0;
int trocas = 0;

int particiona(int *V,int inicio, int fim){
    int dir,esq,pivo,aux;
    esq=inicio;
    dir=fim;
    pivo=V[inicio];

    while(esq<dir){
        while (esq<=fim && V[esq]<=pivo){
            esq++;
            comparacoes++;
        }
        while (dir>=0 && V[dir]>pivo){
            dir--;
            comparacoes++;
        }
        if(esq<dir){
            aux=V[esq];
            V[esq]=V[dir];
            V[dir]=aux;
            trocas++;
        }
    }
    V[inicio]=V[dir];
    V[dir]=pivo;
    return dir;
}

void ordena(int *V,int inicio,int fim){
    int pivo;
    if(fim>inicio){
        pivo=particiona(V,inicio,fim);
        ordena(V,inicio,pivo-1);
        ordena(V,pivo+1,fim);
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
//23,4,-8,3,67,5,21