//Escreva um programa que receba tr�s notas, N1, N2 e N3. Com base nessas tr�s notas
//calcule a m�dia simples e identifique que o aluno atingiu a nota m�nima para passar ou reprovou. A
//nota m�nima para passar � 6.
#include <stdio.h>
int main(){
    int n1,n2,n3;
    float media;

    printf("Digite a sua primeira nota:\n");
    scanf("%d",&n1);
    printf("Digite a sua segunda nota:\n");
    scanf("%d",&n2);
    printf("Digite a sua terceira nota:\n");
    scanf("%d",&n3);

    media=(float)((n1+n2+n3)/3);

    if (media < 6){
        printf("Reprovado!\n");
    } else {
        printf("Aprovado!\n");
    }

    return 0;
}