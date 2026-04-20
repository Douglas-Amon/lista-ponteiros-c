#include <stdlib.h>
#include <stdio.h>

void funcao(char **p){ //ponteiro para ponteiro de char
  char *t; //ponteiro para t
  t = (p += sizeof(int))[-1]; //a operação irá avançar o ponteiro p pelo tamanho de um int(4 bytes) e o indice [-1] volta 1 posição em t, ficando assim na posição 3
  printf("%s\n", t); //imprime o valor de t na posicao 3
}
int main(){
  char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"}; //imprime gh que é a 3 posicao do array de ponteiros para strigs
  funcao(a);
  return 0;
}
