> Questão 1 - Em uma iteração do Bubble Sort, quantas vezes um par de elementos adjacentes é comparado e potencialmente trocado? Depende do tamanho da lista?
Sim, a quantidade de comparações e trocas potenciais em uma única iteração do Bubble Sort depende do tamanho da lista. Especificamente, em cada iteração do Bubble Sort para uma lista de ?? elementos, são realizadas 
?? ? 1 comparações. O número de trocas depende dos elementos específicos da lista e de sua ordem.

> Questão 2 - Como o Bubble Sort pode ser otimizado para parar mais cedo se a lista já estiver ordenada?
O Bubble Sort pode ser otimizado para parar mais cedo de duas formas: 
1° se a lista já estiver ordenada introduzindo uma verificação de se houve ou não trocas em uma iteração. Se nenhuma troca for realizada durante uma iteração, isso significa que a lista está ordenada e o algoritmo pode terminar mais cedo.
2° iniciando o laço de repetição interno com o index do laço externo, pois assim os elementos após o index do laço externo já estão ordenados.

> Questão 3 - O que caracteriza o algoritmo de Selection Sort e qual é o princípio básico por trás de sua operação?
O Selection Sort é um algoritmo de ordenação que seleciona o menor elemento da lista e o coloca na primeira posição, depois seleciona o segundo menor elemento e o coloca na segunda posição, e assim por diante. O princípio básico por trás da operação do Selection Sort é a seleção iterativa do menor elemento da lista e sua colocação na posição correta.

> Questão 4 - Em que aspecto o Selection Sort difere do Bubble Sort em termos de número de trocas realizadas?
O Selection Sort difere do Bubble Sort em termos de número de trocas realizadas, pois o Bubble Sort realiza trocas de elementos adjacentes, enquanto o Selection Sort realiza trocas de elementos selecionados com base em comparações com todos os outros elementos da lista.

> Questão 5 - Na sua implementação do Bubble Sort em C, como você compara elementos adjacentes no array? Mostre o trecho de código responsável por isso.

> Questão 6 - No Selection Sort implementado em C, como você seleciona o índice do menor elemento e realiza a troca com o elemento na posição correta? Apresente os trechos de código correspondentes.