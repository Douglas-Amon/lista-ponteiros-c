# include <stdio.h>


int main(void){
    int i,j,*p,*q;
    p = &i;
    *q = &j; // Um ponteiro desreferenciado não pode receber um endereço de memória.
    p = &*&i;
    i = (*&)j; // Erro de sintaxe, tentativa de desreferenciar uo & que não é ponteiro. Não é possível retornar o endereço de memória e desreferenciar ao mesmo tempo.
    i = *&j;
    i = *&*&j;
    q = *p; // A variável q (sem o *) é do tipo ponteiro, portanto não pode receber o valor desreferenciado da variável *p.
    i = (*p)++ + *q;
`}
