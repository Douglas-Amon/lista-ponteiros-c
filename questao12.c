#include <stdio.h>
void main(){
  int const *x = 3; //tentativa de atribuir um valor a um ponteiro do tipo x constante
  printf("%d", ++(*x)); //tentativa de alterar incrementando o valor do ponteiro  *x que é constante. nao pode alterar
}
// erro no código devido a declaração de variaveis e tipos delas
