#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 3, j = 5;  // Declaração de variáveis
    int *p, *q;       // Declaração de ponteiros
    p = &i;
    q = &j;

    p == &i; //O resultado é True. A operação verifica se o endereço de p é igual ao endereço de i.
    *p - *q; //O resultado é -2. O *p e *q acessam os conteúdos das variáveis armazenadas, a operação é 3-5=-2.
    **&p; // Retorna o valor 3
    //  &p retorna o endereco de memoria de p
    //*(&p) retorna o conteúdo de p que é igual o endereco de i
    //*(&i) retorna o conteúdo de i
    3 - *p/(*q) + 7; //Retorna o valor 10, a operação *p/*q retorna uma divisão inteira (3/5 = 0). Logo fica 3-0+7=10
    return 0;
}

