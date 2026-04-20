#include <stdio.h>
#include <stdlib.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){//for vai de 0 a 4 , incrementando em 1 e 1
  printf("i = %d",i);//vai imprimir i a cada contagem do for , nesse caso vai imprimie de 0 a 5
  printf(" vet[%d] = %.1f",i, vet[i]);//imprime o conteudo de vet  na posiçao de i
  printf(" *(f + %d) = %.1f",i, *(f+i));//mesma coisa da linha 12, vai imprimir o conteudo de vet na posiçao i
  printf(" &vet[%d] = %X",i, &vet[i]);//imprime o endereço de vet na posiçao i
  printf(" (f + %d) = %X",i, f+i);//mesma coisa da linha 13 , imprime o endereço de vet(f=vet) de i adiante na memoria
  printf("\n");//pula linha
  }
}
