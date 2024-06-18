// Questão 2 - Crie uma função que receba uma string como argumento e utilize ponteiros para
// inverter a string.
#include <stdio.h>
#include <string.h>
#include <locale.h>
void inverterString(char *str) {
  char *inicio = str;
  char *fim = str + strlen(str) - 1;
  char temp;
  while (fim > inicio) {
    temp = *inicio;
    *inicio = *fim;
    *fim = temp;
    inicio++;
    fim--;
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  char str[] = "Olá, mundo!";
  printf("Original: %s\n", str);
  inverterString(str);
  printf("Invertida: %s\n", str);
  return 0;
}
