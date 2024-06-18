// Crie uma lista encadeada de alunos com a idade do aluno, ordene a lista utilizando o algoritmo bobble sort.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
typedef struct Aluno{
  char nome[50];
  int idade;
  struct Aluno *prox;
} Aluno;

Aluno* Criar(char nome[], int idade){
  Aluno* novo = (Aluno*)malloc(sizeof(Aluno));
  strcpy(novo->nome, nome);
  novo->idade = idade;
  novo->prox = NULL;
  return novo;
}

void Adicionar(Aluno** lista, Aluno* novo){
  if(*lista == NULL){
    *lista = novo;
  }else{
    Aluno* aux = *lista;
    while(aux->prox != NULL){
      aux = aux->prox;
    }
    aux->prox = novo;
  }
}

void Imprimir(Aluno* lista){
  if (lista == NULL){
    printf("Lista vazia\n");
  }else{
    while (lista != NULL){
      printf("Nome: %s | Idade: %d\n", lista->nome, lista->idade);
      lista = lista->prox;
    }
  }
}

void Ordena(Aluno* lista) {
  if (lista == NULL) 
    return;
  Aluno* i;
  Aluno* j;
  int IdadeTemp;
  char NomeTemp[50];
  int troca;

  do {
    troca = 0;
    i = lista;
    while (i->prox != NULL) {
      j = i->prox;
      if (i->idade > j->idade) {
        IdadeTemp = i->idade;
        i->idade = j->idade;
        j->idade = IdadeTemp;
        strcpy(NomeTemp, i->nome);
        strcpy(i->nome, j->nome);
        strcpy(j->nome, NomeTemp);
        troca = 1;
      }
      i = i->prox;
    }
  } while (troca);
}

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  Aluno* lista = NULL;
  Aluno* novo1 = Criar("João", 20);
  Adicionar(&lista, novo1);
  Aluno* novo2 = Criar("Maria", 18);
  Adicionar(&lista, novo2);
  Aluno* novo3 = Criar("José", 22);
  Adicionar(&lista, novo3);
  Imprimir(lista);
  Ordena(lista);
  printf("\n");
  Imprimir(lista);  
  return 0;
}