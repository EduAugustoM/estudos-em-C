// Quest�o 1 - Declare um ponteiro para um inteiro e um inteiro. Atribua um valor ao inteiro e fa�a o
// ponteiro apontar para ele. Em seguida, modifique o valor do inteiro atrav�s do ponteiro e imprima o
// valor do inteiro.
#include <stdio.h>
int main(){
  int a = 10;
  int *p = &a;
  *p = 20;
  printf("%d\n", a);
  return 0;
}