//Questão 1 – Defina uma struct chamada Aluno que armazena nome, número de matrícula e nota final.
#include <stdio.h>
struct Aluno {
  char nome[50];
  int matricula;
  float nota;
};

int main() {
  struct Aluno Aluno;
  printf("Digite o nome do aluno: ");
  scanf(" %[^\n]", Aluno.nome);
  printf("Digite a matrícula do aluno: ");
  scanf("%d", &Aluno.matricula);
  printf("Digite a nota do aluno: ");
  scanf("%f", &Aluno.nota);
  printf("Nome: %s\nMatrícula: %d\nNota: %.2f\n", Aluno.nome, Aluno.matricula, Aluno.nota);
  return 0;
}
