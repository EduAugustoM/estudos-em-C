// Questão 4 - Declare um ponteiro para ponteiro para um inteiro. Atribua o endereço de um ponteiro
// para inteiro a ele e utilize este ponteiro para ponteiro para modificar o valor do inteiro original..
#include <stdio.h>
int main(){
  int a=10;
  int *p;
  int **pp;
  p = &a;
  pp = &p;
  **pp = 20;
  printf("a = %d\n", a);
  return 0;
}