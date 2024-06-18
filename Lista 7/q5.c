//Questão 5 – Implemente um algoritmo de ordenação (como bubble sort) que organiza os alunos por nota, do menor para o maior.
#include <stdio.h>
struct Aluno {
  char nome[50];
  int matricula;
  float nota;
};

void ordena(struct Aluno Alunos[5]){
  struct Aluno aux;
  int menor;
  for(int i=0; i<5; i++){
    menor=i;
    for(int j=i+1; j<5; j++){
      if(Alunos[j].nota < Alunos[menor].nota){
        menor=j;
      }
    }
    if (menor!=i){
      aux=Alunos[i];
      Alunos[i]=Alunos[menor];
      Alunos[menor]=aux;
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
  ordena(Alunos);
  for(int i = 0; i < 5; i++){
    printf("Nome: %s\nMatrícula: %d\nNota: %.2f\n", Alunos[i].nome, Alunos[i].matricula, Alunos[i].nota);
  }

  return 0;
}
