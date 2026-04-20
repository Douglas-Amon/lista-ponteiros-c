#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void funcao(char** str){ //ponteiro para ponteiro de char
  str++;  //uma posiçao adiante no endereço de memória , mas nao altera o conteúdo da função principal
}
int main(){
  char *str = (void *)malloc(50*sizeof(char));//alocação de memória de 50 caracteres
  strcpy(str, "Agostinho");//copia o string Agostinho no ponteiro alocado de str
  funcao(&str);//retorna o inicio do endereço de memoria de um adiante  de str
  puts(str);//imprime str(saida é Agostinho)
  free(str);//liberação da memoria do malloc *str
  return 0;
}

// o codigo nao sai como o esperado porque ele escreveu o literal errado , se tivesse colocado "gostinho " invés de "Agostinho"
// tambem o erro é que a funcao criada o ponteiro str não muda na o valor para o proximo, deveria ser usado (*str++) para passar para o proximo caractere
