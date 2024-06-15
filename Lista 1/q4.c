// Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int ano, mes, dia;
    int nascimento;

    printf("Digite sua idade em dias:\n");
    scanf("%d", &nascimento);

    ano= (int)(nascimento/365);
    nascimento=(nascimento-(ano*365));
    mes= (int)(nascimento/30);
    nascimento=(nascimento-(mes*30));
    dia= (int)(nascimento);

    printf("Você tem %d anos, %d meses, %d dias",ano,mes,dia);

    return 0;
}