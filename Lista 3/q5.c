// Quest�o 5 ? Crie um programa que leia o tamanho de um vetor e crie um vetor com o tamanho
// informado, pe�a aos usu�rios que informe os n�meros para o vetor e calcule a media e a moda dos
// n�meros informados.
#include <stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "Portuguese");
  int n;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  int vetor[n];
  for (int i = 0; i < n; i++){
    printf("Digite o %d� n�mero: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  int soma = 0;
  for (int i = 0; i < n; i++){
    soma += vetor[i];
  }
  float media = (float)soma / n;
  printf("M�dia: %.2f\n", media);
  int moda = 0;
  int cont = 0;
  for (int i = 0; i < n; i++){
    int contTemp = 0;
    for (int j = 0; j < n; j++){
      if (vetor[i] == vetor[j]){
        contTemp++;
      }
    }
    if (contTemp > cont){
      cont = contTemp;
      moda = vetor[i];
    }
  }
  printf("Moda: %d\n", moda);
  return 0;
}