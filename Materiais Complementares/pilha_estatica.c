#include<stdio.h>

typedef struct Pilha
{    
    int topo;
    int vet[9999]
} Pilha;


void Empilha(Pilha *pilha, int valor)
{    
    pilha->topo =  pilha->topo + 1;
    pilha->vet[pilha->topo] = valor;    
}

int  Desempilha(Pilha *pilha)
{    
    if(pilha->topo < 0)
        return -1;

    int aux = pilha->vet[pilha->topo] ;
    pilha->vet[pilha->topo] = NULL;  
    pilha->topo = pilha->topo - 1;      
    return aux;
}

void imprime(Pilha *pilha)
{
    printf("[");
     for (int i = 0; i <= pilha->topo; i++)
     {
        if(i == 0)
            printf("%d", pilha->vet[i]);
        else
            printf(", %d", pilha->vet[i]);
     }
     printf("]");
}

int main()
{
    Pilha pilha;
    pilha.topo = -1;

    Empilha(&pilha, 1);
    Empilha(&pilha, 2);
    Empilha(&pilha, 3); 

    imprime(&pilha);

    Desempilha(&pilha);
    Desempilha(&pilha);

    imprime(&pilha); 
    Empilha(&pilha, 6);
    Empilha(&pilha, 7);
    imprime(&pilha); 
    
    return 0;
}