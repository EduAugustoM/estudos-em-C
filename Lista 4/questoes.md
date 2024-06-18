> Quest�o 1 - Em uma itera��o do Bubble Sort, quantas vezes um par de elementos adjacentes � comparado e potencialmente trocado? Depende do tamanho da lista?
Sim, a quantidade de compara��es e trocas potenciais em uma �nica itera��o do Bubble Sort depende do tamanho da lista. Especificamente, em cada itera��o do Bubble Sort para uma lista de ?? elementos, s�o realizadas 
?? ? 1 compara��es. O n�mero de trocas depende dos elementos espec�ficos da lista e de sua ordem.

> Quest�o 2 - Como o Bubble Sort pode ser otimizado para parar mais cedo se a lista j� estiver ordenada?
O Bubble Sort pode ser otimizado para parar mais cedo de duas formas: 
1� se a lista j� estiver ordenada introduzindo uma verifica��o de se houve ou n�o trocas em uma itera��o. Se nenhuma troca for realizada durante uma itera��o, isso significa que a lista est� ordenada e o algoritmo pode terminar mais cedo.
2� iniciando o la�o de repeti��o interno com o index do la�o externo, pois assim os elementos ap�s o index do la�o externo j� est�o ordenados.

> Quest�o 3 - O que caracteriza o algoritmo de Selection Sort e qual � o princ�pio b�sico por tr�s de sua opera��o?
O Selection Sort � um algoritmo de ordena��o que seleciona o menor elemento da lista e o coloca na primeira posi��o, depois seleciona o segundo menor elemento e o coloca na segunda posi��o, e assim por diante. O princ�pio b�sico por tr�s da opera��o do Selection Sort � a sele��o iterativa do menor elemento da lista e sua coloca��o na posi��o correta.

> Quest�o 4 - Em que aspecto o Selection Sort difere do Bubble Sort em termos de n�mero de trocas realizadas?
O Selection Sort difere do Bubble Sort em termos de n�mero de trocas realizadas, pois o Bubble Sort realiza trocas de elementos adjacentes, enquanto o Selection Sort realiza trocas de elementos selecionados com base em compara��es com todos os outros elementos da lista.

> Quest�o 5 - Na sua implementa��o do Bubble Sort em C, como voc� compara elementos adjacentes no array? Mostre o trecho de c�digo respons�vel por isso.

> Quest�o 6 - No Selection Sort implementado em C, como voc� seleciona o �ndice do menor elemento e realiza a troca com o elemento na posi��o correta? Apresente os trechos de c�digo correspondentes.