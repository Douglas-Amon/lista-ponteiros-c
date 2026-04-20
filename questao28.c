#include <stdio.h>
char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"}; //e um vetor de ponteiros para char
char **b[] = {a + 3, a + 2, a + 1, a}; //é vetor de ponteiro para ponteiro (a+3 -> JUNIOR, a+2 -> BRITO , a+1 -> MEDEIROS, a -> AGOSTINHO)
char ***c = b; //É um ponteiro para ponteiro para ponteiro que aponta para b (c -> b[0] -> a+3)
int main() {
  printf("%s ", **++c);
  // ++c avança c para b[1]. *++c acessa o conteudo de b[1] que é (a+2). **++c acessa e retorna o conteudo de a+2 que é "BRITO"

  printf("%s ", *--*++c + 3);
  // ++c avança para b[2]. *++c acessa b[2] que é a+1. --*++c decrementa o que a+1 aponta, vai para a.
  // *--*++c acessa o conteudo de a[0] que é "AGOSTINHO".
  // *--*++c + 3 soma 3 posições a partir do inicio de "AGOSTINHO", retorna "STINHO".

  printf("%s ", *c[-2] + 3);
  // c[-2] retorna 2 posições onde c aponta, b[2] vai para b[0]. *c[-2] retorna o conteudo de b[0], *(a+3), retorna "JUNIOR".
  //*c[-2] + 3 soma 3 posições a partir de "JUNIOR", retorna "IOR".

  printf("%s ", c[-1][-1] + 1);
  // c[-1][-1] fica b[1][-1] (pois c[-1] = b[1]).
  // b[1][-1] -> (a+2)[-1] -> a[1] -> "MEDEIROS"
  // "MEDEIROS" + 1 -> pula 1 caractere
  // retorna "EDEIROS"
  return 0;
}
