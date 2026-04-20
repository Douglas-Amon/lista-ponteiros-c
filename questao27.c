#include <stdio.h>
#define TAM 10
int funcao1(int vetor[], int v){
  int i;
  for (i = 0; i < TAM; i++){
    if (vetor[i] == v) //se o valor na posição do vetor é igual ao numero, retorna a posição do vetor.
        return i; // no caso é verdadeiro em vetor[7] == 15. logo retorna 15
  }
  return -1;
}
int funcao2(int vetor[], int v, int i, int f){
  int m = (i + f) / 2; // i = 0, f = 9, m = (0+9)/2 -> m = 4. vetor[4] = 9
  if (v == vetor[m])
    return m;
  if (i >= f)
    return -1;
  if (v > vetor[m]) //no caso cai nesse if onde 15 > 9, chama a funcao contando a partir da direita
    return funcao2(vetor, v, m+1, f); // i = 5, f = 9, m = 14/2 = 7. passa para o primeiro if (15 == vetor[7]) que é verdadeiro e retorna a posição m = 7
  else
    return funcao2(vetor, v, i, m-1);
}
int main(){
  int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
  return 0;
}
// I. Correto. Ambas as funções retornam 7.
// II. Incorreto. A funcao2 é mais rápida, devido a ela subdividir o vetor ao meio (a procura é menor) e utiliza recursividade ao invés do laço for.
// III. Incorreto. A funcao2 não é interativa (nao utliza for nem while), mas sim usa a estratégia recursiva.
// Resposta final: A. I, apenas.
