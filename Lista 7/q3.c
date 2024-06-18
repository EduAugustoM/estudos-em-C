//Questão 3 – Adicione uma função ao seu programa que calcula a média das notas dos alunos e imprime o resultado.
#include <stdio.h>
struct Aluno {
  char nome[50];
  int matricula;
  float nota;
};

float media(struct Aluno Alunos[5]){
  float media = 0;
  for(int i = 0; i < 5; i++){
    media += Alunos[i].nota;
  }
  return media/5;
}

int main(){
  struct Aluno Alunos[5];
  float notas_media;
  for(int i = 0; i< 5; i++){
    printf("Digite o nome do aluno %d: ", i+1);
    scanf(" %[^\n]", Alunos[i].nome);
    printf("Digite a matrícula do aluno %d: ", i+1);
    scanf("%d", &Alunos[i].matricula);
    printf("Digite a nota do aluno %d: ", i+1);
    scanf("%f", &Alunos[i].nota);
  }
  notas_media = media(Alunos);
  printf("A média das notas é: %.2f\n",notas_media);
  return 0;
}
