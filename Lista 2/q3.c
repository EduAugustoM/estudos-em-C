// Quest�o 3 - Crie uma fun��o recursiva para calcular a soma dos n primeiros itens armazenados
// num vetor de n�meros inteiros v.
#include <stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "Portuguese");
  int n,v;
  printf("Digite o tamanho do vetor: ");
  scanf("%d",&n);
  printf("Quantos n�meros deseja somar?");
  scanf("%d",&v);
  int vetor[n];
  for(int i=0;i<n;i++){
    printf("Digite o %d� n�mero: ",i+1);
    scanf("%d",&vetor[i]);
  }
  int soma=0;
  for(int i=0;i<v;i++){
    soma+=vetor[i];
  }
  printf("A soma dos %d primeiros n�meros �: %d\n",v,soma);
  return 0;
}