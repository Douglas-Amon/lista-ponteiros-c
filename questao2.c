#include <stdio.h>
#include <stdlib.h>

main(){
  int i=5, *p;
  p = &i;
  printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);

  //printf("%p, p) retorna o endereço na memória de p
  //print("%p, p+1) retorna o endereço de memoria de p + 2 bytes adiantte (4096)
  //print("%d, *p+2) pega o conteudo armazenado em p que é 5 e soma 2, o resultado é 7
  //print("%d, **&p) retorna o valor armazenado em i, primeiro acessa o endereço de p, depois o conteudo de p, por fim o valor do conteudo de i (valor 5)
  //print("%d, 3**&p) acessa o conteudo de p, depois faz a multiplicação por 3 (retorna 15)
  //print("%d, **&p+4) acessa o valor armazenado em i (5) e soma + 4, resulta em 9
}
