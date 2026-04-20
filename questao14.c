#include <stdio.h>
#include <stdlib.h>

int f(int a, int *pb, int **ppc) {
  int b, c;
  **ppc += 1; //Retorna (**a) o conteúdo do conteúdo de a , o valor é igual a 5+1=6
  c = **ppc; // c recebe o conteúdo de ppc que é 6
  *pb += 2; //Retorna o valor do endereço de c da função void main, o valor do endereço de c é 6 (alterado antes) e soma com 2, retorna 6+2=8
  b = *pb; //Armazena em b o conteúdo de pb que é 8
  a += 3; //Como a = c = 5, soma 5+3 = 6, retorna o valor 6
  return a + b + c; //Soma 8+8+6=22
}
void main() {
  int c, *b, **a;
  c = 5;
  b = &c; // Retorna o endereço de c
  a = &b; // Retorna o endereço de b, que é o mesmo de c
  printf("%d\n", f(c, b, a)); //Retorna o resultado da função
  getchar(); //Espera que o usuário aperta a tecla enter antes que ele feche após a execução
}
