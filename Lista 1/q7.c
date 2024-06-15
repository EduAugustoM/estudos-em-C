//Escreva um programa que leia uma letra e mostre se ela é vogal ou consoante.
#include <stdio.h>

int main(){
    char letra;

    printf("Digite a letra:\n");
    scanf("%c",&letra);

    switch (letra)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Vogal\n");
        break;
    
    default:
        printf("Consoante\n");
        break;
    }
    return 0;
}