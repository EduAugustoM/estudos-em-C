// Crie uma lista encadeada de alunos com a idade do aluno, ordene a lista utilizando o algoritmo insertion sort.
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

void Ordena(Aluno** lista) {
  if (*lista == NULL || (*lista)->prox == NULL)
    return;
  Aluno* ordenado = NULL;
  Aluno* atual = *lista;

  while (atual != NULL) {
    Aluno* next = atual->prox;
    if (ordenado == NULL || ordenado->idade >= atual->idade) {
      atual->prox = ordenado;
      ordenado = atual;
    } else {
      Aluno* temp = ordenado;
      while (temp->prox != NULL && temp->prox->idade < atual->idade) {
        temp = temp->prox;
      }
      atual->prox = temp->prox;
      temp->prox = atual;
    }
    atual = next;
  }
  *lista = ordenado;
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
  Ordena(&lista);
  printf("\n");
  Imprimir(lista);
  return 0;
}
