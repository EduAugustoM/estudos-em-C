#include<stdio.h>
#include<stdlib.h>

typedef struct Elemento{
    int dados;
    struct Elemento *prox;
} Elemento;

Elemento* Criar(int dados){
    Elemento* novo=(Elemento*)malloc(sizeof(Elemento));
    novo->dados=dados;
    novo->prox=NULL;
    return novo;
}

void Adicionar(Elemento** lista, Elemento* novo){
    if(*lista==NULL){
        *lista=novo;
    } else {
        Elemento* atual = *lista;
        while(atual->prox != NULL){
            atual = atual->prox;
        }
        atual->prox=novo;
    }
}

void Adicionar_Inicio(Elemento** lista, Elemento* novo){
    if(*lista==NULL){
        *lista=novo;
    } else {
        novo->prox=*lista;
        *lista=novo;
    }
}

void Imprimir(Elemento* lista){
    if(lista == NULL)
        printf("\n Lista Vazia. \n");
    else {
        printf("[");
        while(lista != NULL){
            if(lista->prox!=NULL)
                printf("%d.",lista->dados);
            else
                printf("%d",lista->dados);
            lista = lista->prox;
        }
        printf("]\n");
    }
}

int main(){
    Elemento* lista=NULL;
    Elemento* novo1=Criar(123);
    Adicionar(&lista,novo1);
    Elemento* novo2=Criar(321);
    Adicionar(&lista,novo2);
    
    Elemento* novo3=Criar(456);
    Adicionar_Inicio(&lista,novo3);
    
    Imprimir(lista);

    return 0;
}
