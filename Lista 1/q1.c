//Escreva um programa que identifique se uma pessoa é do sexo masculino ou feminino.
//Para isso, utilize 1 para Masculino e 2 para feminino.
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int genero;

    printf("Digite 1 para Masculino ou 2 para Feminino\n");
    scanf("%d",&genero);

    if (genero==1){
        printf("Masculino\n");
    } else if (genero==2){
        printf("Feminino\n");
    } else {
        printf("Opção inválida\n");
    }
    return 0;
}
