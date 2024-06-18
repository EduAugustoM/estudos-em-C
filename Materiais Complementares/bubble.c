#include <stdio.h>
void ordena(int *vet, int n){
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
  } while(band!=0);
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