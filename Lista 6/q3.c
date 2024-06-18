// Questão 3 – Escreva um programa que gere um vetor de 10 posições com números inteiros entre 0
// e 10, em seguida peça ao usuário outros 10 números entre 10 e 20, junte os dois em um único vetor
// de 20 posições e faça a ordenação dele utilizando o algoritmo selection sort. Imprima os vetores
// originais e o vetor ordenado.
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
    int a[10];
    for(int i = 0; i < 10; i++){
        printf("Digite um número entre 10 e 20:\n");
        scanf("%d",&a[i]);
    }
    int b[10];
    for(int i = 0; i < 10; i++){
        b[i]=rand() %11;
    }

    int n=20;
    int vet[n];
    for(int i = 0; i < 10; i++){
        vet[i]=b[i];
        vet[i+10]=a[i];
    }
    imprime(vet,n);
    ordena(vet,n);
    printf("\n");
    imprime(vet,n);
    printf("\n");
    return 0;
}
