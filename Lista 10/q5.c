// Crie uma lista encadeada de alunos com a idade do aluno, ordene a lista utilizando o algoritmo quick sort.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Aluno {
  char nome[50];
  int idade;
  struct Aluno *prox;
} Aluno;

Aluno* Criar(char nome[], int idade) {
  Aluno* novo = (Aluno*)malloc(sizeof(Aluno));
  strcpy(novo->nome, nome);
  novo->idade = idade;
  novo->prox = NULL;
  return novo;
}

void Adicionar(Aluno** lista, Aluno* novo) {
  if (*lista == NULL) {
    *lista = novo;
  } else {
    Aluno* aux = *lista;
    while (aux->prox != NULL) {
      aux = aux->prox;
    }
    aux->prox = novo;
  }
}

void Imprimir(Aluno* lista) {
  if (lista == NULL) {
    printf("Lista vazia\n");
  } else {
    while (lista != NULL) {
      printf("Nome: %s | Idade: %d\n", lista->nome, lista->idade);
      lista = lista->prox;
    }
  }
}

void Trocar(Aluno* a, Aluno* b) {
  int tempIdade = a->idade;
  char tempNome[50];
  strcpy(tempNome, a->nome);

  a->idade = b->idade;
  strcpy(a->nome, b->nome);

  b->idade = tempIdade;
  strcpy(b->nome, tempNome);
}

Aluno* Particiona(Aluno* inicio, Aluno* fim) {
  int pivo = fim->idade;
  Aluno* i = inicio->prox;
  Aluno* j = inicio;

  while (i != fim->prox) {
    if (i->idade <= pivo) {
      j = (j == NULL) ? inicio : j->prox;
      Trocar(i, j);
    }
    i = i->prox;
  }
  j = (j == NULL) ? inicio : j->prox;
  Trocar(j, fim);
  return j;
}

void QuickSortRec(Aluno* inicio, Aluno* fim) {
  if (inicio != fim && inicio != fim->prox) {
    Aluno* pivo = Particiona(inicio, fim);
    if (pivo != NULL && pivo != inicio) {
      QuickSortRec(inicio, pivo->prox);
    }
    if (pivo != NULL && pivo != fim) {
      QuickSortRec(pivo->prox, fim);
    }
  }
}

Aluno* UltimoNo(Aluno* lista) {
  while (lista != NULL && lista->prox != NULL) {
    lista = lista->prox;
  }
  return lista;
}

void Ordena(Aluno** lista) {
  Aluno* fim = UltimoNo(*lista);
  if (fim != NULL) {
    QuickSortRec(*lista, fim);
  }
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