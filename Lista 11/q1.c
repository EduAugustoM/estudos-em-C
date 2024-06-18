// Questão 1 - Crie uma lista duplamente encadeada, de alunos com a idade do aluno. Implemente as seguintes operações sobre a lista:
// - Impressão na tela da lista;
// - Inserção de elemento no início;
// - Inserção de elemento no fim;
// - Remoção de elemento no início;
// - Remoção de elemento no fim;
// - Remoção de elemento pelo index;
#include <stdio.h>
#include <stdlib.h>
typedef struct Aluno{
    int idade;
    struct Aluno *prox;
    struct Aluno *ant;
} Aluno;

Aluno* Criar(int idade) {
    Aluno* novo = (Aluno*)malloc(sizeof(Aluno));
    novo->idade = idade;
    novo->prox = NULL;
    novo->ant = NULL;
    return novo;
}

void Adicionar(Aluno** lista, Aluno* novo) {
    if (*lista == NULL) {
        *lista = novo;
    } else {
        Aluno* atual = *lista;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novo;
        novo->ant = atual;
    }
}

void AdicionarInicio(Aluno** lista, Aluno* novo) {
    if (*lista == NULL) {
        *lista = novo;
    } else {
        novo->prox = *lista;
        (*lista)->ant = novo;
        *lista = novo;
    }
}

void remover_inicio(Aluno** lista){
    if (*lista==NULL)
        return;
    Aluno* temp = *lista;
    *lista = (*lista)->prox;
    if (*lista != NULL)
        (*lista)->ant=NULL;
    free(temp);
}

void remover_fim(Aluno** lista){
    if (*lista==NULL)
        return;
    Aluno* atual = *lista;
    while(atual->prox!=NULL){
        atual=atual->prox;        
    }
    if(atual->ant != NULL){
        atual->ant->prox = NULL;
    } else {
        *lista = NULL;
    }
    free(atual);
}

void remover_index(Aluno** lista, int index){
    if (*lista == NULL || index < 0)
        return;
    Aluno* atual = *lista;
    int c=0;
    while (atual != NULL && c < index) {
        atual = atual->prox;
        c++;
    }
    if (atual == NULL) {
        printf("Indice %d não encontrado.\n", index);
        return;
    }
    if (atual->ant != NULL){
        atual->ant->prox= atual->prox;
    } else {
        *lista = atual->prox;
    }
    if (atual->prox != NULL) {
        atual->prox->ant=atual->ant;
    }
    free(atual);
}

void Imprimir(Aluno* lista) {
    if (lista == NULL)
        printf("\n Lista Vazia. \n");
    else {
        printf("[");
        while (lista != NULL) {
            if (lista->prox != NULL)
                printf("%d, ", lista->idade);
            else
                printf("%d", lista->idade);
            lista = lista->prox;
        }
        printf("]\n");
    }
}

int main() {
    Aluno* lista = NULL;
    Aluno* novo1 = Criar(18);
    Adicionar(&lista, novo1);
    Aluno* novo2 = Criar(19);
    Adicionar(&lista, novo2);
    Aluno* novo3 = Criar(23);
    Adicionar(&lista,novo3);
    Aluno* novo4 = Criar(25);
    Adicionar(&lista,novo4);
    Aluno* novo5 = Criar(30);
    AdicionarInicio(&lista, novo5);
    Imprimir(lista);
    remover_inicio(&lista);
    remover_fim(&lista);
    remover_index(&lista,2);
    Imprimir(lista);
    return 0;
}