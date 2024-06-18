#include <stdio.h>
void ordena(int *vet, int n){
  int menor,aux;
  for(int i=0;i<n-1;i++){
    menor=i;
    for(int j=i+1;j<n;j++){
      if(vet[j]>vet[menor]){
        menor=j;
      }
    }
    if (menor!=i){
    aux=vet[i];
    vet[i]=vet[menor];
    vet[menor]=aux;
    }
  }
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