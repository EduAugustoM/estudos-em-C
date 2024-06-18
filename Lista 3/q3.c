// Questão 3 - Escreva um programa que declare duas variáveis inteiras e um ponteiro para inteiro. O
// ponteiro deve ser utilizado para alterar os valores das variáveis inteiras e o programa deve imprimir
// os valores alterados.
#include <stdio.h>
int main(){
  int a = 10, b = 20;
  int *p;
  p = &a;
  *p = 30;
  p = &b;
  *p = 40;
  printf("a = %d, b = %d\n", a, b);
  return 0;
}