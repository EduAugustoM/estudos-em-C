//Questão 2 – Escreva um programa que lê os dados de 5 alunos usando a struct Aluno e os armazena em um array.
#include <stdio.h>
struct Aluno {
  char nome[50];
  int matricula;
  float nota;
};

int main(){
  struct Aluno Alunos[5];
  for(int i = 0; i < 5; i++){
    printf("Digite o nome do aluno %d: ", i+1);
    scanf(" %[^\n]", Alunos[i].nome);
    printf("Digite a matrícula do aluno %d: ", i+1);
    scanf("%d", &Alunos[i].matricula);
    printf("Digite a nota do aluno %d: ", i+1);
    scanf("%f", &Alunos[i].nota);
  }
  for(int i = 0; i < 5; i++){
    printf("Nome: %s\nMatrícula: %d\nNota: %.2f\n", Alunos[i].nome, Alunos[i].matricula, Alunos[i].nota);
  }
  return 0;
}
