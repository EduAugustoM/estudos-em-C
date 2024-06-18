#include <stdio.h>
void ordena(int *vet, int n){
    int atual,j;
    int comparacoes=0;
    int troca=0;
    for(int i=1;i<n;i++){
        atual=vet[i];
        comparacoes++;
        for(j=i;j>0 && (atual<vet[j-1]);j--){
            vet[j]=vet[j-1];
            troca++;
        }
        vet[j]=atual;
        troca++;
    }
    printf("\n%d Comparações e %d Trocas",comparacoes,troca);
}
void imprime(int *vet, int n){
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
    int vet[7];
    for(int i = 0; i < 7; i++){
        printf("Digite um número:\n");
        scanf("%d", &vet[i]);
    }
    imprime(&vet,7);
    ordena(&vet,7);
    printf("\n");
    imprime(&vet,7);
    printf("\n");
    return 0;
}
//23,4,-8,3,67,53,21 - 6 comparações e 15 trocas
// desempenho?