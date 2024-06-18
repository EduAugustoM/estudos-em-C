// Descrição: Defina uma struct chamada Aluno que armazena nome, número de matrícula e nota final.
// – Crie uma lista encadeada de alunos
// – Crie uma função para inserir elementos a lista pelo final.
// – Crie uma função para remover elementos da lista pelo final.
// – Crie uma função que calcule a média das notas dos alunos.
// – Crie uma função de busca linear que encontre um aluno pela matrícula.
// – Crie um menu com as opções disponíveis:
// - Inserir aluno;
// - Remover Aluno;
// - Buscar Aluno;
// - Calcular média;
// - Lista Alunos (Nome, Matricula);
// - Sair;
// Ao entrar no sistema deve ser apresentado o menu com as opções e o usuário fazer quantas
// operações quiser a menos que selecione o menu “Sair”.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Aluno {
    char nome[50];
    int matricula;
    float nota;
    struct Aluno *prox;
} Aluno;

Aluno* criar(char nome[50], int matricula, float nota) {
    Aluno* novo = (Aluno*)malloc(sizeof(Aluno));
    if (novo != NULL) {
        strcpy(novo->nome, nome);
        novo->matricula = matricula;
        novo->nota = nota;
        novo->prox = NULL;
    }
    return novo;
}

void adicionar(Aluno** lista, Aluno* novo) {
    if (*lista == NULL)
        *lista = novo;
    else {
        Aluno* atual = *lista;
        while (atual->prox != NULL)
            atual = atual->prox;
        atual->prox = novo;
    }
}

void remover(Aluno** lista, int matricula) {
    if (*lista == NULL)
        return;

    Aluno* atual = *lista;
    Aluno* anterior = NULL;

    while (atual != NULL && atual->matricula != matricula) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Aluno com matricula %d não encontrado.\n", matricula);
        return;
    }

    if (anterior == NULL)
        *lista = atual->prox;
    else
        anterior->prox = atual->prox;

    free(atual);
}

float media(Aluno* lista) {
    if (lista == NULL)
        return 0.0;
    int c = 0;
    float soma = 0.0;
    Aluno* atual = lista;

    while (atual != NULL) {
        soma += atual->nota;
        c++;
        atual = atual->prox;
    }

    if (c > 0)
        return soma / c;
    else
        return 0.0;
}

Aluno* busca_matricula(Aluno* lista, int matricula) {
    Aluno* atual = lista;
    while (atual != NULL) {
        if (atual->matricula == matricula) {
            return atual;
        }
        atual = atual->prox;
    }

    return NULL;
}

void imprimir(Aluno* lista) {
    if (lista == NULL)
        printf("\n lista vazia \n");
    else {
        printf("[");
        while (lista != NULL) {
            if (lista->prox != NULL)
                printf("%s | %d | %.2f |\n ", lista->nome, lista->matricula, lista->nota);
            else
                printf("%s | %d | %.2f", lista->nome, lista->matricula, lista->nota);
            lista = lista->prox;
        }
        printf("]\n");
    }
}

void menu() {
    printf("Menu:\n");
    printf("1. Inserir Aluno\n");
    printf("2. Remover Aluno\n");
    printf("3. Buscar Aluno\n");
    printf("4. Calcular Média\n");
    printf("5. Listar Alunos\n");
    printf("6. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    Aluno* lista = NULL;
    int opcao, matricula;
    char nome[50];
    float nota;

    // testes:
    // Aluno* novo1 = criar("Eduardo", 2024001, 9.45);
    // adicionar(&lista, novo1);
    // imprimir(lista);
    // Aluno* novo2 = criar("Ronam", 2024002, 7.65);
    // adicionar(&lista, novo2);
    // Aluno* novo3 = criar("Andrey", 2024001, 8.85);
    // adicionar(&lista, novo3);
    // imprimir(lista);
    // remover(&lista);
    // imprimir(lista);
    // float media_notas = media(lista);
    // printf("Média: %.2f\n", media_notas);
    // Aluno* aluno = busca_matricula(lista, 2024002);
    // printf("Aluno: %s\n", aluno->nome);

    do {
        menu();
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Inserir Aluno:\n");
                printf("Nome: ");
                fgets(nome, 50, stdin);
                nome[strcspn(nome, "\n")] = '\0';
                printf("Matricula: ");
                scanf("%d", &matricula);
                printf("Nota: ");
                scanf("%f", &nota);
                adicionar(&lista, criar(nome, matricula, nota));
                break;
            case 2:
                printf("Remover Aluno:\n");
                printf("Matricula: ");
                scanf("%d", &matricula);
                remover(&lista, matricula);
                break;
            case 3:
                printf("Buscar Aluno:\n");
                printf("Matricula: ");
                scanf("%d", &matricula);
                Aluno* aluno = busca_matricula(lista, matricula);
                if (aluno != NULL)
                    printf("Aluno: %s | Matricula: %d | Nota: %.2f\n", aluno->nome, aluno->matricula, aluno->nota);
                else
                    printf("Aluno não encontrado.\n");
                break;
            case 4:
                printf("Calcular Média:\n");
                printf("Média: %.2f\n", media(lista));
                break;
            case 5:
                printf("Listar Alunos:\n");
                imprimir(lista);
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 6);

    while (lista != NULL) {
        remover(&lista, lista->matricula);
    }

    return 0;
}