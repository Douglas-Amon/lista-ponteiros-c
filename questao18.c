// Um ponteiro para uma função é uma variável que armazena o endereço de uma função, permitindo que essa
// função seja chamada indiretamente por meio do ponteiro. Você pode usar ponteiros para chamar funções
// e para passar funções como argumentos para outras funções.

#include <stdio.h>

void imprimirNumero(int x) { // Funcao que imprime um numero inteiro
    printf("Valor de x: %d\n", x);
}

int main() {
    void (*ponteiroFuncao)(int); // declaracao de um ponteiro para funcao que recebe um int e retorna void

    ponteiroFuncao = imprimirNumero;  // atribuicao do endereço da funcao ao ponteiro

    ponteiroFuncao(2025); // chamada da função através do ponteiro

    return 0;
}
