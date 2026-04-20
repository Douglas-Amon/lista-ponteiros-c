#include <stdio.h>
#include <stdlib.h>

int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){ //o for vai de 0 a 2
    printf("%d ", *(vet+i)); //imprime o conteudo de cada posição i do vetor
  }
}
int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i); //imprime o endereço de cada posição i do vetor
  }
}
