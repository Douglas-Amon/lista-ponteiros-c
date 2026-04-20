#include <stdio.h>
#include <stdlib.h>

//(A) CORRETO, aloca e libera a memoria
void f( ){
  void *s;
  s = malloc(50);
  free(s);
}

//(B) CORRETO, nao houve alocacao de memoria
int f( ){
  float *a;
  return 0;
}

//(C) INCORRETO,ja que se strlen(data) for maior que 50, a funcao retorna imediatamente sem chamar free(s), ou seja, a memoria alocada com malloc(50) nunca sera liberada.
int f(char *data){
  void *s;
  s = malloc(50);
  int size = strlen(data);
  if (size > 50)
    return (-1);
  free(s);
  return 0;
}

//(D) CORRETO, houve alocacao e liberacao de num
int *f(int n){
  int *num = malloc(sizeof(int)*n);
  return num;
}
int main(void){
  int *num;
  num = f(10);
  free(num);
  return 0;
}

//(E) CORRETO, apesar de haver um erro de double free, todas as memorias sao liberadas
void f(int n){
  char *m = malloc(10);
  char *n = malloc(10);
  free(m);
  m = n;
  free(m);
  free(n);
}

