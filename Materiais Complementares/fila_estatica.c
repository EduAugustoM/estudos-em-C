#include<stdio.h>

typedef struct Fila
{   
    int fim;
    int vet[9999]
} Fila;


void Enfilerar(Fila *fila, int valor)
{    
    fila->fim =  fila->fim + 1;
    fila->vet[fila->fim] = valor;    
}

int  Desenfilerar(Fila *fila)
{    
    if(fila->fim < 0)
        return -1;

    int aux = fila->vet[0] ;
    fila->fim = fila->fim - 1;

    for(int i = 0; i <= fila->fim; i++)
    {
        fila->vet[i] = fila->vet[i+1];
    }

    fila->vet[fila->fim+1] = NULL;  
          
    return aux;
}

void imprime(Fila *fila)
{
    printf("[");
     for (int i = 0; i <= fila->fim; i++)
     {
        if(i == 0)
            printf("%d", fila->vet[i]);
        else
            printf(", %d", fila->vet[i]);
     }
     printf("]");
}

int main()
{
    Fila fila;
    fila.fim = -1;

    Enfilerar(&fila, 1);
    Enfilerar(&fila, 2);
    Enfilerar(&fila, 3); 
    imprime(&fila);
    Desenfilerar(&fila);
    Desenfilerar(&fila);
    imprime(&fila); 
    Enfilerar(&fila, 6);
    Enfilerar(&fila, 7);
    imprime(&fila); 
    
    return 0;
}