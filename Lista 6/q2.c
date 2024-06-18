// Questão 2 – Escreva um programa que gere um vetor de 100.000 posições com números inteiros
// entre 0 e 10.000, em seguida faça a ordenação dele utilizando o algoritmo insertion sort. Imprima o vetor ordenado.
#include <stdio.h>
#include <stdlib.h>
void ordena(int vet[],int n){
    int menor;
    int aux;
    for(int i=0;i<n-1;i++){
        menor=i;
        for(int j=i+1;j<n;j++){
            if(vet[j]<vet[menor])
                menor=j;
        }
        if (menor!=i){
            aux=vet[i];
            vet[i]=vet[menor];
            vet[menor]=aux;
        }
    }

}
void imprime(int vet[], int n){
    printf("[");
    for(int i=0;i<n;i++){
        if (i==0)
            printf("%d",vet[i]);
        else
            printf(", %d",vet[i]);
    }
    printf("]");
}

int main(){
    int n=100000;
    int vet[n];
    for(int i = 0; i < n; i++){
        vet[i]=rand() %10001;
    }
    //imprime(vet,n);
    ordena(vet,n);
    printf("\n");
    imprime(vet,n);
    printf("\n");
    return 0;
}
