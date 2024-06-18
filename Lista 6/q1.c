//Questão 1 – Escreva um programa que gere um vetor de 100.000 posições com números inteiros
//entre 0 e 10.000, em seguida faça a ordenação dele utilizando o algoritmo bubble sort. Imprima o vetor ordenado.
#include <stdio.h>
#include <stdlib.h>
void ordena(int vet[],int n){
    int aux,band,fim=n;
    do{
        band=0;
        for(int i=0;i<fim-1;i++){
            if(vet[i]>vet[i+1]){
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
                band=i;
            }
        }
        fim--;
    } while (band!=0);
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
