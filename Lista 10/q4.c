// Crie uma lista encadeada de alunos com a idade do aluno, ordene a lista utilizando o algoritmo merge sort.
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

void DividirLista(Aluno* fonte, Aluno** frente, Aluno** traseira) {
  Aluno* rapido;
  Aluno* devagar;
  devagar = fonte;
  rapido = fonte->prox;
  
  while (rapido != NULL) {
    rapido = rapido->prox;
    if (rapido != NULL) {
      devagar = devagar->prox;
      rapido = rapido->prox;
    }
  }
  *frente = fonte;
  *traseira = devagar->prox;
  devagar->prox = NULL;
}

Aluno* MesclarListas(Aluno* a, Aluno* b) {
  Aluno* resultado = NULL;
  if (a == NULL)
    return b;
  else if (b == NULL)
    return a;
  if (a->idade <= b->idade) {
    resultado = a;
    resultado->prox = MesclarListas(a->prox, b);
  } else {
    resultado = b;
    resultado->prox = MesclarListas(a, b->prox);
  }
  return resultado;
}

void Ordena(Aluno** lista) {
  Aluno* cabeca = *lista;
  Aluno* a;
  Aluno* b;
  if ((cabeca == NULL) || (cabeca->prox == NULL)) {
    return;
  }
  DividirLista(cabeca, &a, &b);
  Ordena(&a);
  Ordena(&b);
  *lista = MesclarListas(a, b);
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