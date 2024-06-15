//Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.
#include <stdio.h>

int main(){
    int n1,n2,quociente,resto;

    printf("Digite o primeiro numero:\n");
    scanf("%d",&n1);
    printf("Digite o segundo numero:\n");
    scanf("%d",&n2);

    quociente=n1/n2;
    printf("Quociente: %d\n",quociente);
    resto=n1%n2;
    printf("Resto: %d\n",resto);


    return 0;
}