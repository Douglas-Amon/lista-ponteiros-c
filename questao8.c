#include <stdio.h>
#include <stdlib.h>

int main(void){
  int pulo[5]={10,20,30,40,50};// 30 é o terceiro elemento desse vetor
  int *vet;//ponteiro inteiro
  vet=pulo;
  printf("posicao_3= %d",*(vet+2));
}


    *(pulo + 2);// ESSA SERÁ UTILIZADA PARA ACESSAR O 3 ELEMENTO
    *(pulo + 4);
    pulo + 4;
    pulo + 2;
