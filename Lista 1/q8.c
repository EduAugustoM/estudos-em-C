//Escreva um programa que leia um número correspondente ao dia da semana e mostre o
//dia da semana. Sendo domingo 1 e sábado 7.
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int d;
    printf("Digite o dia da semana sendo 1 para domingo e 7 para sábado: ");
    scanf("%d",&d);
    switch (d){
    case 1:
        printf("Domingo!\n");
        break;
    case 2:
        printf("Segunda!\n");
        break;
    case 3:
        printf("Terça!\n");
        break;
    case 4:
        printf("Quarta!\n");
        break;
    case 5:
        printf("Quinta!\n");
        break;
    case 6:
        printf("Sexta!\n");
        break;
    case 7:
        printf("Sábado!\n");
        break;
    default:
        printf("Número inválido.\n");
        break;
    }

    return 0;
}