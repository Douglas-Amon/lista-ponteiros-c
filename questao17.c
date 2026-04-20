//Memory leak, em português vazamento de memória, é um termo utilizado na linguagem C que se refere
//a erros no gerenciamento de memória em programas. Ocorre quando um programa aloca memória que não
//é mais usada, mas não a libera de volta ao sistema. Isso leva a um aumento no consumo de memória
//ao longo do tempo, o que pode causar problemas de desempenho ou até mesmo falhas no programa.
//Na biblioteca padrão C, há algumas funções para essa finalidade, sendo a mais comum 'malloc',
//usada em conjunto com 'free'.

#include <stdio.h>
#include <stdlib.h>

int main (){
    int *p;
    p = malloc(10*sizeof(int));
    p[3] = 5;
    printf("O valor de p[3]: %d\n", p[3]);
}
//Não houve liberação de memória aqui, há vazamento de memória

//Correção para o erro
int main (){
    int *p;
    p = malloc(10*sizeof(int));
    p[3] = 5;
    printf("O valor do ponteiro na posição [3]: %d\n", p[3]);
    free(p);
    return 0
}
