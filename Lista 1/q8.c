//Escreva um programa que leia um n�mero correspondente ao dia da semana e mostre o
//dia da semana. Sendo domingo 1 e s�bado 7.
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int d;
    printf("Digite o dia da semana sendo 1 para domingo e 7 para s�bado: ");
    scanf("%d",&d);
    switch (d){
    case 1:
        printf("Domingo!\n");
        break;
    case 2:
        printf("Segunda!\n");
        break;
    case 3:
        printf("Ter�a!\n");
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
        printf("S�bado!\n");
        break;
    default:
        printf("N�mero inv�lido.\n");
        break;
    }

    return 0;
}