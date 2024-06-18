> Questão 1 - Qual das seguintes afirmações melhor descreve o propósito das estruturas de dados?
a) ( ) Estruturas de dados são utilizadas para diminuir a complexidade dos programas de computador, as vezes tornando-os mais difíceis de entender.
b) (X) Estruturas de dados servem para organizar e armazenar dados de maneira eficiente, facilitando seu acesso e manipulação.
c) ( ) A escolha da estrutura de dados influencia o desempenho de um programa de computador, uma vez que as estruturas não têm o mesmo impacto na eficiência.
d) ( ) Estruturas de dados são relevantes apenas em contextos de desenvolvimento de software de baixo nível, como drivers de dispositivo ou sistemas operacionais.

> Questão 2 ? A linguagem C se denomina general purpose, e esta é uma das suas grandes vantagens, pois adapta-se ao desenvolvimento de qualquer projeto, como sistemas operacionais, interfaces gráficas, processamento de registros, etc. Neste contexto assinale a alternativa correta:
a) (X) A linguagem C consegue obter performances semelhantes às obtidas pelo Assembly.
b) ( ) A sua sintaxe é complexa, e o número de palavras reservadas, de tipos de dados básicos e
de operadores é grande.
c) ( ) O código escrito numa máquina sempre pode ser transportado para outra máquina e
compilado sem qualquer alteração.
d) ( ) A linguagem C não permite o desenvolvimento modular de aplicações.

> Questão 3 ? A linguagem C é uma linguagem copilada. Isso significa que é realizado um processo pelo Compilador. Caso seja detectado algum erro, o processo de compilação é terminado. Neste contexto assinale a alternativa correta.
a) ( ) Caso não seja detectado nenhum erro e nenhum warnings, o compilador cria um arquivo
objeto, com o nome igual ao nome do programa e extensão .OBJ (em DOS) ou .o (em Unix).
b) ( ) O arquivo executável é criado a partir do arquivo fonte, inicialmente escrito pelo
programador, e obtido através do processo de compilação.
c) (X) Uma vez feito o programa, o próximo passo é copilar, nesse processo é verificado se este
foi corretamente escrito (isto é, se a sintaxe das instruções está ou não correta).
d) ( ) Todas as alternativas estão INCORRETAS

> Questão 4 ? Com base no código abaixo assinale a linha que contêm um erro de sintaxe.
`
#include <stdio.h>
int main ()
{
  int idade1 = 30;
  char _nome[] = "higor";
  float pi_1 = 3.14;
  double 1peso = 62.40;
  return 0;
}
`
a) ( ) Linha 5
b) ( ) Linha 6
c) (X) Linha 7
d) ( ) Linha 8

> Questão 5 ? Com base na função representada abaixo, qual seria o retorno dela caso fosse passado o número 7 como parâmetro?
`
int funcao (int num){
  if (num <= 0)
    return 0;
  else if (num == 1)
    return 1;
  else {
    int termo = funcao (num - 2) + funcao (num - 1);
    return termo;
  }
}
`
a) (X) 13
b) ( ) 29
c) ( ) 7
d) ( ) 49

> Questão 6 ? Com base no programa abaixo assinale o valor que será impresso no fim da execução.
`
int main (){
  int var1 = 10, *var2 = 20, *var3 = 30;
  var2 = &var1;
  var3 = var2;
  var1 = 20;
  *var3 = 40;
  printf ("%d", var1);
}
`
a) ( ) 10
b) ( ) 20
c) ( ) 30
d) (X) 40

> Questão 7 ? Com base no programa abaixo assinale o valor que será impresso no fim da execução.
`
int main (){
  int x = 6;
  int y = 1;
  for (int i = 1; i <= x; i++){
    y = y * i;
    printf ("%d, ", y);
  }
}
`
a) ( ) 1, 2, 3, 4, 5, 6,
b) (X) 1, 2, 6, 24, 120, 720,
c) ( ) 0, 1, 2, 6, 24, 120,
d) ( ) 1, 1, 1, 1, 1, 1,

> Questão 8 ? A função abaixo representa a implementação mais básica de um algoritmo de ordenação. Com base nisso assinala a alternativa com o nome correto do algoritmo
`
void ordena (int *vet, int n){
  int aux;
  for (int i - 0; i < n-1; i++){
    for (int j = i+1; j < n; j++){
      if(vet[i] > vet [j]){
        aux = vet[i]:
        vet [i] = vet [j];
        vet [j] = aux;
      }
    }
  }
}
`
a) (X) selection sort
b) ( ) bubble sort
c) ( ) merge sort
d) ( ) custom sort