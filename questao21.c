#include <stdio.h>
#include <stdlib.h>

int ordenar(int *numeros, int n){
    int i, j, troca;
    for (i = 0; i < n - 1; i++) {  //percorre o array n-1 vezes
        for (j = 0; j < n - 1 - i; j++) { //
            if (numeros[j] > numeros[j + 1]) {  // se o elemento j for maior que seu j+1 , troca os elemento j para j+1
                troca = numeros[j]; // Troca os valores
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = troca;
            }
        }
    }
}

int main(){
    int *numeros, n, i;

    scanf("%d", &n); // recebe o tamanho do vetor

    numeros = malloc(n * sizeof(float)); // aloca a memoria para o ponteiro

    for (i = 0; i < n; i++){
        scanf("%d", &numeros[i]); // lê os valores de n elementos digitados pelo usuario
    }

    ordenar(numeros, n); //chama a função ordenar

    for (i = 0; i < n; i++){
        printf("%d\n", numeros[i]); // imprime na tela os valores em ordem
    }

    free(numeros);
    return 0;
}
