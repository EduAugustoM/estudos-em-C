//Faça um programa que faça a leitura de 10 números e imprimir quantos são pares e quantos são ímpares.
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
    printf("%d são pares e %d são ímpares\n",par,10-par);
    return 0;
}