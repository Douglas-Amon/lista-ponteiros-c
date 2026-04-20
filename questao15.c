#include <stdio.h>
int main(){
  unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},
  {7, 8, 9}, {10, 11, 12}}; // matriz de 4 linhas e 3 colunas
  printf("%u, %u, %u\n", x+3, *(x+3), *(x+2)+3);
}
// O %u está imprimindo endereços como inteiros
//a primeira impressão é do endereço de x deslocado 3 unidades a frente, como é na matriz, imprime o endereço do primeiro elemento da linha 4 (array {10,11,12})
//como x+3 é o quarto array, *(x+3) acessa o endereço do primeiro elemento do array, o numero 10, por fim imprime o endereço de 10
//acessa o conteudo de x+2, que é o primeiro elemento 7 e dps soma com 3, resultando em 10, imprime no fim o endereço de 10
