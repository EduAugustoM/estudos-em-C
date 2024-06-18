// Quest�o 4 ? Crie um programa que leia o tamanho de um vetor e crie um vetor com o tamanho
// informado, pe�a ao usu�rios que informe os n�meros para o vetor e calcule a media e a moda dos n�meros informados.
#include <stdio.h>
#include <locale.h>
float media(int vetor[],int n){
  int soma=0;
  for(int i=0;i<n;i++){
    soma+=vetor[i];
  }
  return soma/n;
}
int moda(int vetor[],int n){
  int moda=0;
  int cont=0;
  for(int i=0;i<n;i++){
    int cont2=0;
    for(int j=0;j<n;j++){
      if(vetor[i]==vetor[j]){
        cont2++;
      }
    }
    if(cont2>cont){
      moda=vetor[i];
      cont=cont2;
    }
  }
  return moda;
}
int main(){
  setlocale(LC_ALL, "Portuguese");
  int n;
  printf("Digite o tamanho do vetor: ");
  scanf("%d",&n);
  int vetor[n];
  for(int i=0;i<n;i++){
    printf("Digite o %d� n�mero: ",i+1);
    scanf("%d",&vetor[i]);
  }
  printf("A m�dia dos n�meros �: %.2f\n",media(vetor,n));
  printf("A moda dos n�meros �: %d\n",moda(vetor,n));
  return 0;
}