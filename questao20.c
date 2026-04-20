#include <stdio.h>
#include <stdlib.h>

// Declaracao da fun��o auxiliar, que definir� como a fun��o qsort deve ordenar o vetor.
int comparar(const void *a, const void *b){ //const void s�o ponteiros gen�ricos , podem tratar qualquer tipo de elemento
    float na = *(const float*)a; //na recebe o valor do ponteiro em float
    float nb = *(const float*)b; //nb recebe o valor do ponteiro em float

    if (na < nb)
        return -1; //retorna -1 se o primeiro for menor que o segundo
    else if (na > nb)
        return 1; //retorna 1 se o primeiro for maior que o segundo
    else
        return 0; //retorna 0 se os dois numeros forem iguais
}
int main(){
    float *numeros;
    int i, n;

    printf("Insira o tamanho n do array: ");
    scanf("%d", &n); //recebe o tamanho n do array

    numeros = malloc(n * sizeof(float)); //aloca a memoria do array

    for (i = 0; i < n; i++) {
        scanf("%f", &numeros[i]);  //armazena cada float digitado
    }

    qsort(numeros, n , sizeof(float), comparar); //utiliza qsort passando o ponteiro para o primeiro elemento do array, o numero de elementos do array, o tamanho em bytes de cada elemento e um ptr para funcao

    printf("Os valores em ordem s�o:\n");
    for (i = 0; i < n; i++){
        printf("%f\n", numeros[i]); // Imprime na tela os valores em ordem
    }

    free(numeros); // libera a mem�ria alocada
    return 0;
}
