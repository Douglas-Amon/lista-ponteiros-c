#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de comparação para usar qsort
int comparar(const void *a, const void *b) {
    int na = *(const int*)a; // Retorna o valor do ponteiro em int
    int nb = *(const int*)b; // Retorna o valor do ponteiro em int
    if (na < nb)
        return -1; //retorna -1 se o primeiro for menor que o segundo
    else if (na > nb)
        return 1; //retorna 1 se o primeiro for maior que o segundo
    else
        return 0; //retorna 0 se os dois numeros forem iguais
}

// Função criada para ordenar
void ordenar(int *numeros, int n) {
    int i, j, troca;
    for (i = 0; i < n - 1; i++) { // Percorre o array n-1 vezes
        for (j = 0; j < n - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) { // Se o elemento j for maior que j+1, troca
                troca = numeros[j]; // Troca os valores
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = troca;
            }
        }
    }
}

int main() {
    int *numeros, n, i;
    clock_t t1_ordena, t2_ordena, t1_qsort, t2_qsort; // Definição das variáveis de tempo
    double t_total_ordenacao, t_total_qsort; // Variáveis para armazenar o tempo total

    scanf("%d", &n); // Receber o tamanho do array

    numeros = malloc(n * sizeof(int));
    if (numeros == NULL) {
        printf("Erro ao alocar memória\n");
        return 1; // Retorna 1 para indicar erro
    }

    for (i = 0; i < n; i++) {
        numeros[i] = rand() % 10000; // número aleatório de 0 a 9999
    }


    // Medir o tempo da função de ordenação da função ordenar
    t1_ordena = clock();//tempo inicial
    ordenar(numeros, n);
    t2_ordena = clock();//tempo final
    t_total_ordenacao = (double)(t2_ordena - t1_ordena) / CLOCKS_PER_SEC;

    //CLOCKS_PER_SEC;converte o tempo medido em "clocks" para segundos.
    //double é usado para ter mais precisão do tempo comparado ao float ou int

    // Medir o tempo da função qsort
    t1_qsort = clock(); //tempo inicial de execução
    qsort(numeros, n, sizeof(int), comparar);
    t2_qsort = clock(); //tempo final de execução
    t_total_qsort = (double)(t2_qsort - t1_qsort) / CLOCKS_PER_SEC;

    // Exibe os tempos de execução
    printf("Tempo de execucao da funcao ordenar: %.20f segundos\n", t_total_ordenacao);
    printf("Tempo de execucao da funcao qsort: %.20f segundos\n", t_total_qsort);


    // Exibe os valores ordenados
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]); // Retorna os n elementos ordenados do array
    }
    printf("\n"); // Nova linha após os números

    free(numeros); // Libera a memória alocada
    return 0;
}
//obs: a funcao qsort executou de forma mais rápida e eficiente comparada a função ordenar, devido a fazer menos comparações e menos trocas.
// a função ordenar tem que passar em 2 for e comparando, custa mais computacionalmente
