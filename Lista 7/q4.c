//Questão 4 – Modifique o programa para encontrar o aluno com a maior nota e imprimir seu nome e nota.
#include <stdio.h>
struct Aluno {
  char nome[50];
  int matricula;
  float nota;
};

void maior(struct Aluno Alunos[5]){
  float nota = 0;
  for(int i = 0; i < 5; i++){
    if(Alunos[i].nota > nota){
      nota = Alunos[i].nota;
    }
  }
  for(int i = 0; i < 5; i++){
    if(Alunos[i].nota == nota){
      printf("O aluno com a maior nota é: %s com a nota %.2f\n", Alunos[i].nome, Alunos[i].nota);
    }
  }
}

int main(){
  struct Aluno Alunos[5];
  for(int i = 0; i< 5; i++){
    printf("Digite o nome do aluno %d: ", i+1);
    scanf(" %[^\n]", Alunos[i].nome);
    printf("Digite a matrícula do aluno %d: ", i+1);
    scanf("%d", &Alunos[i].matricula);
    printf("Digite a nota do aluno %d: ", i+1);
    scanf("%f", &Alunos[i].nota);
  }
  maior(Alunos);
  return 0;
}
