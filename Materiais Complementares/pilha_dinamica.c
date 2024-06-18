#include<stdio.h>
#include<stdlib.h>

typedef struct Elemento
{    
    int dados;
    struct Elemento *ant;
} Elemento;

void Imprimir(Elemento* lista)
{
    if (lista == NULL)     
        printf("[]");
    else 
    {
        printf("[");
        while (lista != NULL)
        {
            if(lista->ant != NULL)
                printf("%d, ", lista->dados);
            else
                printf("%d", lista->dados);

            lista = lista->ant;
        }
        printf("]");
    }   
}

Elemento* Criar( int dados)
{
    Elemento* novo = (Elemento*)malloc(sizeof(Elemento));    
    novo->dados = dados;
    novo->ant = NULL;
    return novo;
}

void Empilha(Elemento** lista, Elemento* novo)
{
    if (*lista != NULL)     
        novo->ant = *lista;

    *lista = novo;
}

int Desempilha(Elemento** lista)
{
    if(*lista == NULL)
        return -1;

    Elemento* remover = *lista; 
    *lista = (*lista)->ant;

    int aux = remover->dados;
    free(remover);  
    return aux;
}

int main()
{
    
    Elemento* lista = NULL;  
    
    Empilha(&lista, Criar(1));
    Empilha(&lista, Criar(2));
    Empilha(&lista, Criar(3));    

    Imprimir(lista);

    Desempilha(&lista);
    Desempilha(&lista);
    Desempilha(&lista);

    Imprimir(lista);
    
    Empilha(&lista, Criar(4));    
 
    Imprimir(lista);

    return 0;
}

