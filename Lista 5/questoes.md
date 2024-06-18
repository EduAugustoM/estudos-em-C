> Quest�o 1 - Qual das seguintes afirma��es melhor descreve o prop�sito das estruturas de dados?
a) ( ) Estruturas de dados s�o utilizadas para diminuir a complexidade dos programas de computador, as vezes tornando-os mais dif�ceis de entender.
b) (X) Estruturas de dados servem para organizar e armazenar dados de maneira eficiente, facilitando seu acesso e manipula��o.
c) ( ) A escolha da estrutura de dados influencia o desempenho de um programa de computador, uma vez que as estruturas n�o t�m o mesmo impacto na efici�ncia.
d) ( ) Estruturas de dados s�o relevantes apenas em contextos de desenvolvimento de software de baixo n�vel, como drivers de dispositivo ou sistemas operacionais.

> Quest�o 2 ? A linguagem C se denomina general purpose, e esta � uma das suas grandes vantagens, pois adapta-se ao desenvolvimento de qualquer projeto, como sistemas operacionais, interfaces gr�ficas, processamento de registros, etc. Neste contexto assinale a alternativa correta:
a) (X) A linguagem C consegue obter performances semelhantes �s obtidas pelo Assembly.
b) ( ) A sua sintaxe � complexa, e o n�mero de palavras reservadas, de tipos de dados b�sicos e
de operadores � grande.
c) ( ) O c�digo escrito numa m�quina sempre pode ser transportado para outra m�quina e
compilado sem qualquer altera��o.
d) ( ) A linguagem C n�o permite o desenvolvimento modular de aplica��es.

> Quest�o 3 ? A linguagem C � uma linguagem copilada. Isso significa que � realizado um processo pelo Compilador. Caso seja detectado algum erro, o processo de compila��o � terminado. Neste contexto assinale a alternativa correta.
a) ( ) Caso n�o seja detectado nenhum erro e nenhum warnings, o compilador cria um arquivo
objeto, com o nome igual ao nome do programa e extens�o .OBJ (em DOS) ou .o (em Unix).
b) ( ) O arquivo execut�vel � criado a partir do arquivo fonte, inicialmente escrito pelo
programador, e obtido atrav�s do processo de compila��o.
c) (X) Uma vez feito o programa, o pr�ximo passo � copilar, nesse processo � verificado se este
foi corretamente escrito (isto �, se a sintaxe das instru��es est� ou n�o correta).
d) ( ) Todas as alternativas est�o INCORRETAS

> Quest�o 4 ? Com base no c�digo abaixo assinale a linha que cont�m um erro de sintaxe.
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

> Quest�o 5 ? Com base na fun��o representada abaixo, qual seria o retorno dela caso fosse passado o n�mero 7 como par�metro?
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

> Quest�o 6 ? Com base no programa abaixo assinale o valor que ser� impresso no fim da execu��o.
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

> Quest�o 7 ? Com base no programa abaixo assinale o valor que ser� impresso no fim da execu��o.
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

> Quest�o 8 ? A fun��o abaixo representa a implementa��o mais b�sica de um algoritmo de ordena��o. Com base nisso assinala a alternativa com o nome correto do algoritmo
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