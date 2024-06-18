// Questão 3 - Crie uma função recursiva para calcular a soma dos n primeiros itens armazenados
// num vetor de números inteiros v.
#include <stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "Portuguese");
  int n,v;
  printf("Digite o tamanho do vetor: ");
  scanf("%d",&n);
  printf("Quantos números deseja somar?");
  scanf("%d",&v);
  int vetor[n];
  for(int i=0;i<n;i++){
    printf("Digite o %dº número: ",i+1);
    scanf("%d",&vetor[i]);
  }
  int soma=0;
  for(int i=0;i<v;i++){
    soma+=vetor[i];
  }
  printf("A soma dos %d primeiros números é: %d\n",v,soma);
  return 0;
}