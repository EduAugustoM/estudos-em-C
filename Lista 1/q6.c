//Fa�a um programa que fa�a a leitura de 10 n�meros e imprimir quantos s�o pares e quantos s�o �mpares.
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[10]={2,4,6,7,8,9,1,2,3,6};
    int par=0;
    for (int i=0;i<10;i++){
        if(vet[i]%2==0)
            par++;
    }
    printf("%d s�o pares e %d s�o �mpares\n",par,10-par);
    return 0;
}