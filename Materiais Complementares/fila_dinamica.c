#include<stdio.h>
#include<stdlib.h>

typedef struct Elemento
{    
    int dados;
    struct Elemento *prox;
} Elemento;

typedef struct Fila
{        
    struct Elemento *inicio;
    struct Elemento *fim;
} Fila;

void Imprimir(Fila* fila)
{
    Elemento* lista = fila->inicio;
    if (lista == NULL)     
        printf("[]");
    else 
    {
        printf("[");
        while (lista != NULL)
        {
            if(lista->prox != NULL)
                printf("%d, ", lista->dados);
            else
                printf("%d", lista->dados);

            lista = lista->prox;
        }
        printf("]");
    }   
}

Elemento* Criar(int dados)
{
    Elemento* novo = (Elemento*)malloc(sizeof(Elemento));    
    novo->dados = dados;
    novo->prox = NULL;
    return novo;
}

void Enfilerar(Fila* fila, Elemento* novo)
{
    Elemento* elemento = fila->fim;

    if (elemento == NULL) 
    {        
        fila->inicio = novo; 
    } 
    else 
    {
        elemento->prox = novo;              
    }
    fila->fim = novo;  
}

int Desenfilerar(Fila* fila)
{
    Elemento* elemento = fila->inicio;
    if (elemento != NULL) 
    {        
        Elemento* remove = elemento; 
        if(elemento->prox == NULL)
        {
            fila->inicio = NULL;
            fila->fim = NULL;
        }
        else
            fila->inicio = elemento->prox;        
        int valor = remove->dados;
        free(remove);
        return valor;
    }     
}

int main()
{
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    fila->inicio = NULL;
    fila->fim = NULL;  
    
    Enfilerar(fila, Criar(1));
    Enfilerar(fila, Criar(2));
    Enfilerar(fila, Criar(3));  
    Imprimir(fila);
    Desenfilerar(fila);
    Desenfilerar(fila);
    Desenfilerar(fila);
    Imprimir(fila);    
    Enfilerar(fila, Criar(4));    
    Imprimir(fila);

    return 0;
}

